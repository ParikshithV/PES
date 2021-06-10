#include <stdio.h>

int main(){
  int a[10], b[10][10], n, d;

  printf("Enter dimention of array (1 or 2): \n");
  scanf("%d",&d);
  printf("Enter limit of array: \n");
  scanf("%d",&n);


  int *ptr = a;  //*ptr gets address of "a"
  int *ptrb = &b[0][0];
  // for (int j = 0; j < n; j++) {
  //   printf("Data in %d = %d\n",ptr+j, *ptr+j);  // "ptr" gives the address, adding * gives value
  // }

  if (d==1){
    printf("Enter the elemrnts of the array: \n");
    for (int i = 0; i < n; i++) {
      printf("Enter a[%d]: ",i);
      scanf("%d",&a[i]);
    }

    for (int *j = a; j < ptr+n; j++) {
      printf("Data in %d = %d\n",j, *j);  // "ptr" gives the address, adding * gives value
    }
  }

  else if(d==2){
    printf("Enter the elements of the array: \n");
    for (int q = 0; q < n; q++) {
      for (int r = 0; r < n; r++) {
        printf("Enter a[%d][%d]: ",q,r);
        scanf("%d",&b[q][r]);
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        printf("b[%d][%d]= %d\n",i,j,*(*(b+i)+j));
      }
    }
  }
  else{
    printf("Invalid input");
  }

  return 0;
}
