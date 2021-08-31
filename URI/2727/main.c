#include <stdio.h>
#include <string.h>

char alpha[] = {"abcdefghijklmnopqrstuvwxyz"};

int main(){
	char code[50];
	int n;
	int flag, points, spaces;
	while(scanf("%d", &n) == 1){
		for(int x = 0; x < n; ++x){
			scanf(" %[^\n]s", code);
			flag = 0;
			points = 0;
			spaces = 0;
			for(int y = 0; y < (int)strlen(code); ++y){
				if(code[y] == '.' && flag == 0){
					points++;
				}else{
					flag = 1;
					if(code[y] == ' '){
						spaces++;
					}
				}
			}
			printf("%c\n", alpha[(spaces*3)+(points-1)]);
		}
		
	}

	return 0;
}
