#include <stdio.h>
#include <string.h>
#define arg argv[1]

int main(int argc, char* argv[]) {

	if( argc != 2){
        printf("Supply 1 argument.\n");
        return -1;
    }
        int length = strlen(argv[1]);
		for(int i = length - 1; i != -1; i--){
			printf("%c", arg[i]); // <-- idk why but it segfaults without that macro lol
		}
		printf("\n");
	
}

