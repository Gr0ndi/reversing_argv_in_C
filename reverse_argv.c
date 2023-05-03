#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]) {

	if( argc >= 2){
		int SIZE_OF_ARGV1 = sizeof(argv[1]);
		char string1[SIZE_OF_ARGV1 + 2];
		strcpy(string1, argv[1]);
		//get how many characters are in string1[]
		int CHAR_NUM = sizeof(string1) - 1;
		//exptected last char of an array
		//printf("%c\n", string1[CHAR_NUM - 1]);
		//print characters in reverse order
		for(int i = CHAR_NUM - 1; i != -1; i--){
			printf("%c", string1[i]);
		}
		printf("\n");
		
	} else {
		printf("Supply 1 argument.\n");
	}
}