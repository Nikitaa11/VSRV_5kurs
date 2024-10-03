#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_COUNT 7

void ParentProcess(void);
void ChildProcess(void);

int main(int argc, char const *argv[]) {
    int pid = fork();
    if (pid == 0) {
        ChildProcess();
    } else if (pid > 0) {
        ParentProcess();
    } else {
        printf("ERROR!");
    }
    return 0;
}

void ParentProcess(void) {
    int i;
    for (i = 0; i < MAX_COUNT; i++) {
        printf("This line is from parent, value = %d\n", i);
        printf("My pid: %d\n, and path of this file:", getpid());
        execl("/bin/pwd", "pwd", NULL);
    }
}

void ChildProcess(void) {
    int i;
    for (i = 0; i < MAX_COUNT; i++) {
        printf("This line is from child, value = %d\n", i);
        printf("My pid: %d\n", getpid());
        printf("Parrent pid: %d\n", getppid());
    }
}