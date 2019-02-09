#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void my_printf(char *);

int main(int argc,char *argv[])
{
        if(argc < 2)
        {
                char error[]="Usage Error: ./printf [arguments]";
                my_printf(error);
                exit(1);
        }
        my_printf(argv[1]);
}

void my_printf(char *str)
{
        int len;
        len=strlen(str);
        write(1,str,len);
        write(1,"\n",1);
}

