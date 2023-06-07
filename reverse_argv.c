#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

	if(argc != 2){
        printf("Supply 1 argument.\n");
        return -1;
    }
        int length = strlen(argv[1]);
        char* reversed[length];

		for(int i = length - 1; i != -1; i--){
			printf("%c", argv[1][i]);
		}
		printf("\n");

        
	
}
