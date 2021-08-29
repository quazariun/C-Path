#include <stdio.h>

void hor_line(){
	for(int x = 0; x < 39; ++x){
		printf("-");
	}
	printf("\n");
}

void vert_line(){
	printf("|");
	for(int x = 0; x < 37; ++x){
		printf(" ");
	}
	printf("|\n");
}

int main(){
	hor_line();
	for(int x = 0; x < 5; ++x){
		vert_line();
	}
	hor_line();

	return 0;
}
