#include <stdio.h>

int main(){
  int m, n, i=0;
  printf("enter the range m < n \n");
  scanf("%d",&m);
  scanf("%d",&n);
  printf("numbers divisible by 2 and 3 are: \n");
  for (i=m;i<n;i++){
    if (i%2==0 && i%3==0) {
      printf("%d, ",i);
    }
  }
}
