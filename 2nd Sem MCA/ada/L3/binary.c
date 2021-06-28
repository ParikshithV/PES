#include<stdio.h>

#include<stdlib.h>

#include<sys/time.h>

void fnGenRandInput(int X[],int n)

{

int i;

srand(time(NULL));

for(i=0;i<n;i++)

{

X[i] = rand()%10000;

}

}



void fnDispArray(int X[], int n)

{

int i;

for (i=0;i<n;i++)

printf("%d \t",X[i]);

}





int binarySearch(int array[], int x, int low, int high)

 {



  while (low <= high) {

    int mid = low + (high - low) / 2;

    if (array[mid] == x)

      return mid;

    if (array[mid] < x)

      low = mid + 1;

    else

      high = mid - 1;

  }

  return -1;

}



int main(int argc,char **argv)

{

FILE *fp1,*fp2;

struct timeval tv;

double dStart,dEnd;

int Arr[100000],i,find,c,n;

fp1 = fopen("time.txt","w");

fp2 = fopen("time1.txt","w");

printf("Binary Search \n");

printf("Enter number of elements::");

scanf("%d",&n);

printf("Enter the %d numbers::",n);

for(i=0;i<n;i++)

scanf("%d",&Arr[i]);

printf("Enter the element to be searched\n");

scanf("%d",&find);

int result = binarySearch(Arr, find, 0, n - 1);

    if(result == -1)

printf("Element is not present in array");

else

printf("Element is present at index %d",result+1);

/*fnDispArray(Arr,n);

for(i=100;i<5000;i+=100)

{

fnGenRandInput(Arr,i);

gettimeofday(&tv,NULL);

dStart = tv.tv_sec + (tv.tv_usec/1000000.0);

binarySearch(Arr, find, 0, n - 1);

gettimeofday(&tv,NULL);

dEnd=tv.tv_sec+(tv.tv_usec/1000000.0);

fprintf(fp1,"%d\t%lf \n",i,dEnd-dStart);

fprintf(fp2,"%d\t%d\n",i,i*i);

}

fclose(fp1);

fclose(fp2);*/

return 0;

}
