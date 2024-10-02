#include "libsitt.h"
#include <stdlib.h>
#include <stdio.h>

/*
struct DXAMIC_ARR{
	int * arr;
	int size = 0;
};

void push(DXAMIC_ARR * arr, int input){
	arr.arr = malloc(sizeof(int)*(arr.size+1));
	arr.arr[size] = input;
	arr.size++;
}

void length(DXAMIC_ARR arr, int * output){
	*output = arr.size;
}
*/

int line_size(FILE *file){
	int size = 0;
	while(1){
		int ch = fgetc(file);
		if(ch == 10 || ch == -1){ break; }
		else { size++; }
	}
	fseek(file, size*-1-1, SEEK_CUR);
	return size;
}

char * readline(FILE *file, int *size){
	*size = line_size(file);
	char *str = malloc(sizeof(char)*(*size));
	for(int i=0; i<*size; i++){
		str[i] = fgetc(file);		
	}
	fseek(file, 1, SEEK_CUR);
	return str;
}

void print_str(char * str, int size){
	for(int i=0; i<size; i++){
		printf("%c", str[i]);
	}
}

void print_strln(char * str, int size){
	for(int i=0; i<size; i++){
		printf("%c", str[i]);
	}
	printf("\n");
}


void cp_line(char * input, char * output, int size){
	for(int i=0; i<size; i++){
		output[i]=input[i];
	}
}
