#include <stdio.h>
#include <stddef.h>

char memory[20000];

struct block{

	size_t size;
	int free;
	struct block *next;
};

struct block *freeList = (void*)memory;

void initialize();
void split(struct block *fitting_slot,size_t size);
void *my_malloc(size_t noOfBytes);
void merge();
void my_free(void * ptr);
