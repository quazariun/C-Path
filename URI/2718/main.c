#include <stdio.h>

int main(){
	unsigned long long lamps;
	int range_count;
	int max_range;
  int x;
	int n;
	scanf("%d", &n);

	for(x = 0; x < n; ++x){
		range_count = 0;
		max_range = 0;
		scanf("%llu", &lamps);

		while(1){
			if(lamps % 2 == 1){
				range_count++;
			}else{
				if( range_count > max_range)
					max_range = range_count;
				range_count = 0;
			}
			if( lamps / 2 <= 0){
				if( range_count > max_range)
					max_range = range_count;
				break;
			}
			lamps /= 2; 
		}
		printf("%d\n", max_range);
	}

	return 0;
}
