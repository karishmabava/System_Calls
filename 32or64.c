#include <stdio.h>

int main()

{

unsigned int i = -1;

int bit = 0;

while(i)

{

bit = bit + (i & 1);

i = i >> 1;

}

printf("%d bit system it is!\n",bit);

return 0;

}
