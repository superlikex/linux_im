#include <iostream>
#include <cstdio>
#include "../utils.h"

int main()
{
    int fd;
    int port = 999;
    fd = Utils::create_socket("127.0.0.1",port);
    printf("connect %d\n",fd);
    return 0;
}
