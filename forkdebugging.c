/* Description : Check the number of processes created using fork() and
 *               use strace to trace system calls of each child process
 * Author      : Srinivas Chandupatla
 * Date        : 24.03.2008
 * File        : forkdebugging.c
 * Compile     : gcc -Wall forkdebugging.c -o forkdebugger
 * Execute     : strace -o strace.dump -f ./forkdebugger
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
   int indx;

   for (indx = 0; indx < 4; indx++)
   {
      fork();
      printf("*\n");
   }

   return EXIT_SUCCESS;
}
