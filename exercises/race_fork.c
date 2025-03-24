#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//race fork example

int main() {
	int data = 100;
	pid_t pid = fork();

	if (pid == 0) {
		//child process
		printf("child starts with data = %d\n", data);
		data += 50;
		printf("child modified data to %d\n", data);
	} else if (pid > 0) {
		//parent process
		printf("parent starts with data = %d\n", data);
		data += 100;
		printf("parent modified data to %d\n", data);
		//sleep to wait for child process (introduces a timing issue)
		sleep(1);    
	} else {
		perror("fork failed");
		exit(1);
	}
	printf("process %d exiting with data = %d\n", getpid(), data);
	return 0;
}

