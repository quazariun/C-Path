#include <stdio.h>

int main(){
	char str[50];
	int tourists;
	int jeeps = 0;
	int people_left = 0;

	while(scanf("%s %d", str, &tourists) == 2){
		switch(str[0]){
			case 'S':
				jeeps++;
				people_left += tourists;
				break;
			case 'V':
				jeeps--;
				people_left -= tourists;
				break;
		}
	}

	printf("%d\n%d\n", people_left, jeeps);

	return 0;
}
