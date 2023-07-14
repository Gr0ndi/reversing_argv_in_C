#include <stdio.h>
#include <string.h>
int main(int argc, char** argv){
	if(argc == 1){
	  printf("Argument missing\n");
 	  return -1;
	}
	
	int arg_len = strlen(argv[1]);
	for(arg_len != 0; arg_len--;){
	printf("%c", argv[1][arg_len]);
	}	
	printf("\n");
}
