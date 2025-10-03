#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define choose_stack_overflow 1
#define choose_out_of_memory 2
#define choose_memory_leak 3

void stack_overflow(int count){
	printf("Stack overflow: %d\n",count);
	stack_overflow(count+1);
}

void out_of_memory (){
	while(1){
		int *MEM = (int*) malloc(sizeof(int)*10000000);
	       	if (MEM == NULL){
			printf("Out of memory\n");
			exit(1);
		}
	}
}

void memory_leak(){
	int *MEM = (int*) malloc(sizeof(int)*1000);
	printf("Do not have free(MEM)");
}


int main(void){
	printf("./memory_lab stack_overflow\n");
	printf("./memory_lab out_of_memory\n");
	printf("./memory_lab memory_leak\n");
	printf("X to exit\n");
	printf("Select option(1,2,3):\n");

	char option;
	int count = 0 ;
	scanf(" %c",&option);

	if (option == 'X' || option == 'x'){
		printf("End.");
	} else if (option == choose_stack_overflow){
		printf("Demo stack overflow");
		stack_overflow(count);
	} else if (option == choose_out_of_memory){
		printf("Demo out of memory");
		out_of_memory();
	} else if (option == choose_memory_leak){
		printf("Demo memory leak");
		memory_leak();
	}
	return 0;
}
