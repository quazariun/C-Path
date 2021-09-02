#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validation(char str[1000]){
	if( !(isdigit(str[4]) && isdigit(str[5]) && isdigit(str[6]) && isdigit(str[7])) )
		return 0;
	if( !(isupper(str[0]) && isupper(str[1]) && isupper(str[2])) )
		return 0;
	if( str[3] != '-')
		return 0;
	if( strlen(str) > 8)
		return 0;
	return 1;
}

int main(){
	char plate[1000];
	char days[10][50] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY"};
	int day = 0;
  int x;
	int n;
	scanf("%d", &n);

	for(x = 0; x < n; ++x){
		scanf(" %s", plate);

		if(validation(plate)){
			switch(plate[7]){
				case '1':
				case '2':
					day = 0;
					break;
				case '3':
				case '4':
					day = 1;
					break;
				case '5':
				case '6':
					day = 2;
					break;
				case '7':
				case '8':
					day = 3;
					break;
				case '9':
				case '0':
					day = 4;
					break;
			}
			printf("%s\n", days[day]);
		}else{
			printf("FAILURE\n");
		}
	}

	return 0;
}
