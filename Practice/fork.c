#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int childpid;
    int count1 = 0, count2 = 0;

    printf("Before it forks\n");
    childpid = fork();

    if(childpid == 0){
        printf("This is a child process\n");
        while(count1 < 10){
            printf("Child Process: %d\n", count1++);
            sleep(1);
        }
    }else{
        printf("This is the parent process\n");
        while(count2 < 20){
            printf("Parent Process: %d\n", count2++);
            sleep(1);
        }
    }

    return 0;
}
