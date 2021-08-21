#include <stdio.h>

int main(){
	int hour;

	while(scanf("%d", &hour) == 1){
		if( (hour >= 0 && hour < 90) || hour == 360){
			printf("Bom Dia!!\n");
		}else if(hour >= 90 && hour < 180){
			printf("Boa Tarde!!\n");
		}else if(hour >= 180 && hour < 270){
			printf("Boa Noite!!\n");
		}else{
			printf("De Madrugada!!\n");
		}
	}
}
