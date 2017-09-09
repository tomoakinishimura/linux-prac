#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char *argv[])
{
  pid_t pid = fork();
  if(pid == 0){
    sleep(1);
    printf("child!!\n");
    return 0;
  }

  printf("parent!!\n");

  int status;
  waitpid(pid, &status, 0);

  printf("parent end\n");
  return 0;
}

