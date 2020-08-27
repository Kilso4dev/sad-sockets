#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "./sockStruct.h"

#ifndef SAD_H
#define SAD_H

sad_socket *sad_socket_open(sad_socket *sock);

void sad_socket_send(sad_socket *sock);

sad_data *sad_socket_recv(sad_socket *sock);

#endif // SAD_H
