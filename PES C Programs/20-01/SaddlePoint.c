// Saddle point of a matrix
#include <stdio.h>

int main()
{
  int n, a[10][10], i, j=0, min, max;
  int sad[10], count=0, flag=0, pos=0;
  printf("Enter size of matrix: ");
  scanf("%d",&n);
  for (int r = 0; r < n; r++) {
    for (int s = 0; s < n; s++) {
      printf("Enter a[%d][%d]: ",r,s);
      scanf("%d",&a[r][s]);
    }
  }
	for (i = 0; i < n; i++)
	{
    min = a[i][0];
    for (j = 0; j < n; j++) {
      if (min > a[i][j]) {
         min = a[i][j];
         pos = j;
      }
    }

    max = min;
    for (int k = 0; k < n; k++) {
      if (max < a[k][pos]) {
         max = a[k][pos];
      }
    }

    if (min == max) {
      sad[count]=min;
      count++;
      flag = 1;
    }
	}
  if (flag==1) {
    for (int r = 0; r < count; r++) {
      printf("The saddle point number is %d, ",sad[r]);
    }
  }
  else {printf("No saddle point\n");}
	return 0;
}
