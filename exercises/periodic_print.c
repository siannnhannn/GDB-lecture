#include <stdio.h>
#include <unistd.h>

int sleep_duration = 3;

int main() {
	while (1) {
		printf("meow every %d seconds\n", sleep_duration);
		sleep(sleep_duration);
	}
	return 0;
}

