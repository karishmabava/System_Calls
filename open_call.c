/* C Program for Open System Calls */

#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
extern int errno;

int main(){
	int fd = open("kari.txt",O_RDONLY | O_CREAT);
	printf("fd = %d\n",fd);

	if(fd == -1){

		printf("Errno%d\n",errno);
		perror("Program");
	}
return 0;

}
