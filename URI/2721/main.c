#include <stdio.h>

int main(){
	char names[10][50] = { "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph" };
	int result, aux;
	result = 0;

	while(scanf("%d", &aux) == 1)
		result += aux;

	printf("%s\n", result % 9 == 0 ? names[8] : names[(result % 9)-1]);
	return 0;
}
