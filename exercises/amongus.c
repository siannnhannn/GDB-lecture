#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	const char* impostor = "jacussy"; 
	if (argc < 2) {
		printf("usage: %s <crew member names>\n", argv[0]);
		return 1;
	}

	printf("crew assembly: checking for impostors...\n");

	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], impostor) == 0) {
		    printf("OMG!!! :O %s is the impostor!\n", argv[i]);
		} else {
		    printf("%s is not an impostor\n", argv[i]);
		}
	}

	return 0;
}
