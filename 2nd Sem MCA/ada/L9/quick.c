#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
#include<math.h>

int ind=1;
int est=1;

FILE *fp1,*fp2;
struct timeval tv;
double dStart,dEnd;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int midpoint(int array[], int s, int h) {
  int mid = array[h];
  int i = (s - 1);
  for (int j = s; j < h; j++) {
    if (array[j] <= mid) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[h]);
  return (i + 1);
}

void sort(int ele[], int s, int h, double dStart) {
  gettimeofday(&tv,NULL);
  dStart=tv.tv_sec+(tv.tv_usec/1000000.0);

  if (s < h) {
    int pi = midpoint(ele, s, h);
    sort(ele, s, pi - 1, dStart);
    sort(ele, pi + 1, h, dStart);

  }
  dEnd=tv.tv_sec+(tv.tv_usec/100000000.0);
  fprintf(fp1, "\n%d %lf\n",ind,dStart-dEnd);
  ind++;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int n;
  printf("No. of elements to sort: ");
  scanf("%d",&n);

  int ele[n];

  fp1=fopen("quick_actual.txt","w");
  fp2=fopen("quick_estimated.txt","w");

  printf("Random elements to sort: \n");
  for (size_t i = 0; i < n; i++) {
    ele[i] = rand() % 500;
    printf("%d  ", ele[i]);
  }

  sort(ele, 0, n - 1, dStart);

  fclose(fp1);
  fclose(fp2);

  printf("\nSorted array: \n");
  for (int i = 0; i < n; ++i) {
    printf("%d  ", ele[i]);
  }
  printf("\n");
}
