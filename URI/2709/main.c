#include <stdio.h>
#include <math.h>

int sum(int coins[40], int step, int size){
  int result = 0;
  int x;

  for(x = size-1; x >= 0; x -= step){
    result += coins[x];
  }
  return result;
}

int isprime(int num){
  int root = (int)sqrt(num);
  int x;

  if(num != 2 && num % 2 == 0 || num == 1) return 0;

  for(x = 3; x <= root; x += 2){
    if(num % x == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int n, x;
  int coins[40];
  int step;

  while(scanf("%d", &n) == 1){
    for(x = 0; x < n; ++x)
      scanf("%d", &coins[x]);

    scanf("%d", &step);
    if(isprime(sum(coins,step,n))){
      printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
    }else{
      printf("Bad boy! I’ll hit you.\n");
    }
  }

  return 0;
}
