#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
  for(int i = 0; i < 4; i++) {
    pid_t pid = fork();
 
    if(pid == 0) {
      char nm[15];
      printf("Please enter your name:\n");
      scanf("%s",nm);
      printf ("Name : %s\n",nm);
     exit(0);

   }
   else {

   wait(NULL);

   }
  }
   printf ("Your job is done!\n");
   return EXIT_SUCCESS;

}
