#include <stdio.h>

void hor_line(){
	for(int x = 0; x < 39; ++x)
		printf("-");
	printf("\n");
}

void ver_line(int pos, char *str, int size){
	int i = 0;
	
	printf("|");
	for(int x = 0; x < 37; ++x){
		if(x >= pos-2 && size > 0){
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
	ver_line(2,"x = 35",6);
	ver_line(0, "", 0);
	ver_line(17, "x = 35", 6);
	ver_line(0, "", 0);
	ver_line(33, "x = 35", 6);
	hor_line();
	
	return 0;
}
