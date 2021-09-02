#include <stdio.h>

void hor_line(){
  int x;
	for(x = 0; x < 39; ++x){
		printf("-");
	}
	printf("\n");
}

void vert_line(){
  int x;
	printf("|");
	for(x = 0; x < 37; ++x){
		printf(" ");
	}
	printf("|\n");
}

int main(){
  int x;
	hor_line();
	for(x = 0; x < 5; ++x){
		vert_line();
	}
	hor_line();

	return 0;
}
