#include "utils.h"
#include "errno.h"
#include <cstdio>
/*
*params: ip,port
*return: socket fd
*/
int Utils::create_socket(char const *ip,int port)
{
    int sfd;
    struct sockaddr_in servaddr;
    sfd = socket(AF_INET,SOCK_STREAM,0);
    if(sfd < 0)
    {
        perror("socket");
	printf("------\n");
        return -1;
    }

    bzero(&servaddr,sizeof(servaddr));
    
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(port);
    if(!ip)
    {
        servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
        if ( bind(sfd,(struct sockaddr*)&servaddr,sizeof(servaddr)) < 0 )
        {
        perror("socket");
	    printf("------\n");
            return -1;
        }
    }
    else
    {
        inet_pton(AF_INET, ip,  &servaddr.sin_addr);
        if( connect(sfd,(struct sockaddr*)&servaddr,sizeof(servaddr)) <0 )
        {
            return -1;
        }
    }
    return sfd;
}
