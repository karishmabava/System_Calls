/* Simplest form of malloc*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void * kari_malloc(size_t size){

	void * p = sbrk(0); // malloc asks sbrk to uncreament the heap size 
						// and return a pointer pointing to the location.
	void * request = sbrk(size);
	if (request == (void*)-1)
	{
		return NULL;

	}else{
		assert(p==request);
		return p;
	}
}

int main(){

	int * ptr;
	int i,sum=0,n;
	
	n=5;
	ptr = (int*) kari_malloc(n*sizeof(int));

	if(ptr ==NULL)
	{
		printf("Memory not allocated\n\n");
		exit(0);
	}else{

		printf("Successful\n");
		ptr[i] = i+1;
	}

	printf("The elements are: ");
		for(i=0;i<n;i++){
			printf("%d ",ptr[i]);
	}
	printf("\n\n");

	return 0;

}
