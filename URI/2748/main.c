#include <stdio.h>

void hor_line(){
  int x;
	for(x = 0; x < 39; ++x)
		printf("-");
	printf("\n");
}

void ver_line(char *str, int size){
	int i = 0;
	int x;
	printf("|");
	for(x = 0; x < 37; ++x){
		if(x >= 8 && size > 0){
			printf("%c", str[i++]);
			size--;
		}else{
			printf(" ");
		}
	}
	printf("|\n");
}

int main(){

	hor_line();
	ver_line("Roberto",7);
	ver_line("", 0);
	ver_line("5786", 4);
	ver_line("", 0);
	ver_line("UNIFEI", 6);
	hor_line();
	
	return 0;
}
