#include <iostream>
#include <cstdio>
#include "../utils.h"

int main()
{
    int listen_fd;
    socklen_t addr_len;
    struct sockaddr_in client_addr;

    listen_fd = Utils::create_socket(NULL,999);
    if( listen_fd < 0)
    {
        printf("listen error\n");
    }
    
    listen(listen_fd,5);
    addr_len = sizeof(struct sockaddr_in);
    accept(listen_fd,(struct sockaddr*)&client_addr,&addr_len);
    printf("client coming\n");
    
    return 0;
}
