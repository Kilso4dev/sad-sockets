#include <stdio.h>
#include <stdlib.h>
#include "./os_makros.h"

#ifndef SOCK_STRUCT_H
#define SOCK_STRUCT_H



#define SAD_TYPE_STREAM 0x1 << 1
#define SAD_TYPE_UDP 0x1 << 1

#define SAD_TYPE_SERV 0x1 << 4
#define SAD_TYPE_CLIENT 0x1 << 4


typedef struct sad_data {
    u_int8_t *dat;
    size_t len;
} sad_data;



#ifdef OS_UNIX

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>


typedef struct sad_socket_unix {
    addrinfo *info;
    int type = 0;
    int pid;

} sad_socket;


#elif defined(OS_WINDOWS)

#include <winsock2.h>

typedef struct sad_socket_win {
    addrinfo *info;
    int type = 0;
    int pid;

} sad_socket;

#else

typedef struct sad_socket_none {

} sad_socket;

#endif //OS

sad_socket *sad_socket_create(const char *target);

sad_socket *sad_socket_free(sad_socket *sock);

#endif // SOCK_STRUCT_H
