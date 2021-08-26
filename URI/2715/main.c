#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int vect[1000000];
	int ind_rangel, ind_gugu;
	long long rangel, gugu;

	while(scanf("%d", &n) == 1){
		ind_rangel = 0;
		ind_gugu = n-1;
		rangel = 0;
		gugu = 0;
		
		for(int x = 0; x < n; ++x)
			scanf("%d", &vect[x]);

		if(n == 1){
			rangel += vect[0];
			printf("%lld\n", rangel);
			continue;
		}else{
			rangel = vect[ind_rangel];
			gugu = vect[ind_gugu];

			while(ind_rangel+1 != ind_gugu){
				if(rangel <= gugu){
					ind_rangel++;
					rangel += vect[ind_rangel];
				}else{
					ind_gugu--;
					gugu += vect[ind_gugu];
				}
			}
			printf("%lld\n", llabs(rangel-gugu));
		}
	}

	return 0;
}
