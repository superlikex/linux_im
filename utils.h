#ifndef _UTILS_H_
#define _UTILS_H_
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <strings.h>
#include <arpa/inet.h>

class Utils{
public:
    static int create_socket(char const *,int);
};
#endif
