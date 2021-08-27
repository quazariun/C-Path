#include <stdio.h>

int main(){
	int time;
	int a, b;

	scanf("%d", &time);
	scanf("%d %d", &a, &b);

	if(a+b > time)
		printf("Deixa para amanha!\n");
	else
		printf("Farei hoje!\n");

	return 0;
}
