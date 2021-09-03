#include <stdio.h>
#include <stdlib.h>

int sort_func(const void *a, const void *b){
  return ( *(int *)a - *(int *)b);
}

int main(){
  int vect[1000];
  int n, m;
  int uniq = 1;

  scanf("%d", &n);
  scanf("%d", &m);

  int x;
  for(x = 0; x < m; ++x){
    scanf("%d", &vect[x]);
  }

  qsort(vect,m,sizeof(int),sort_func);
  
  for(x = 1; x < m; ++x){
    if(vect[x] != vect[x-1])
      uniq++;
  }

  printf("%d\n", n-uniq);
  return 0;
}
