#include <stdio.h>
#include <math.h>

int main()
{
	double degree;
	int hour;
	int minutes;
	double seconds;

	while(scanf("%lf", &degree) == 1){
		hour = (degree/15) + 6;
		if(hour >= 24) hour -= 24;
		minutes = fmod(degree, 15.0) / 0.25;
		seconds = fmod(fmod(degree, 15.0), 0.25) / (0.25/60.0);

		if(hour >= 6 && hour < 12){
			printf("Bom Dia!!\n");
		}else if(hour >= 12 && hour < 18){
			printf("Boa Tarde!!\n");
		}else if(hour >= 18 && hour < 24){
			printf("Boa Noite!!\n");
		}else{
			printf("De Madrugada!!\n");
		}

		printf("%s%d:%s%d:%s%.0lf\n", hour < 10 ? "0" : "" , hour, minutes < 10 ? "0" : "", minutes, seconds < 10 ? "0" : "", seconds);
	}

	return 0;
}
