#include <stdio.h>
#include <stdlib.h>
#include "./os_makros.h"

#ifndef SOCK_STRUCT_H
#define SOCK_STRUCT_H


#ifdef OS_UNIX

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>


typedef struct sad_socket_unix {
    addrinfo *info;
    int pid;

} sad_socket;


#elif defined(OS_WINDOWS)

#include <winsock2.h>

typedef struct sad_socket_win {
    addrinfo *info;
    int pid;

} sad_socket;

#else

typedef struct sad_socket_none {

} sad_socket;

#endif //OS

sad_socket *sad_socket_create(const char *ip);


#endif // SOCK_STRUCT_H
