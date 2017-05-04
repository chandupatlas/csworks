/* Description :  Check processors in little-endian or big-endian
 * Author      : Srinivas Chandupatla
 * Date        : 24.03.2008
 * File        : endianess.c
 * Compile     : gcc -Wall endianess.c -o endianess
 * Execute     : ./endianess
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int data = 1;

   if (1 == *(char *)&data)
      printf("--> CPU is LITTLE ENDIAN <--\n");
   else
      printf("--< CPU is BIG ENDIAN >--\n");

   return EXIT_SUCCESS;
}
