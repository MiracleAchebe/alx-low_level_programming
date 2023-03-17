#include <time.h> 
#include <studio.h>
#include <stdlib.h>
  
 /* betty style doc for function main goes there */
 /*This code checks and prints if random number is zero, positive or negative*/
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2;
         /* your code goes there */
         if (n == 0)
         printf("is zero\n")
         else if (n > 0)
         printf("is positive"\n")
         else
         printf("is negative\n")
         
         return (0);
 }