#include<stdio.h> 
#include<string.h>
#include <stdlib.h> 
  
// A function to copy block of 'n' bytes from source 
// address 'src' to destination address 'dest'. 
void my_memmove(void *dest, void *src, size_t n) 
{ 
   // Typecast src and dest addresses to (char *) 
   char *csrc = (char *)src; 
   char *cdest = (char *)dest; 
  
   // Create a temporary array to hold data of src 
   char *temp = (char*) malloc (sizeof(char)); 
  
   // Copy data from csrc[] to temp[] 
   for (int i=0; i<n; i++) 
       temp[i] = csrc[i]; 
  
   // Copy data from temp[] to cdest[] 
   for (int i=0; i<n; i++) 
       cdest[i] = temp[i]; 
  
   free(temp); 
} 
  
// Driver program 
int main() 
{ 
   char csrc[100] = "BlackHole in a Nutshell!\n"; 
   my_memmove(csrc+5, csrc, strlen(csrc)+1); 
   printf("%s", csrc); 
   return 0; 
} 
