#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void fnGenRandInput(int X[], int n)
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
   for(i=0;i<n;i++)
      printf(" %d \t",X[i]);
}

void sel_sort(int a[],int n)
{
   int i,j,temp,min;
   for(i=0;i<=n-1;i++)
   {
      min =i;
      for(j=i+1;j<=n;j++)
      {
         if(a[j]<a[min])
            min=j;
      }
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
   }
}

int main( int argc, char **argv)
{
   FILE *fp1,*fp2;
   struct timeval tv;
   double dStart,dEnd;
   int Arr[100000],iNum,i;
   fp1 = fopen("time.txt","w");
   fp2 = fopen("time1.txt","w");
    /*
   printf("\nEnter number of elements\t: ");
   scanf("%d",&iNum);
   printf("Enter the elements\t: ");
   for(i=0;i<iNum;i++)
      scanf("%d",&Arr[i]);
   sel_sort(Arr,iNum-1);
   printf("\nSorted Array\n");
   fnDispArray(Arr,iNum);
   */

   for(i=100;i<5000;i+=100)
   {
      fnGenRandInput(Arr,i-1);
      gettimeofday(&tv,NULL);
      dStart = tv.tv_sec + (tv.tv_usec/1000000.0);
      sel_sort(Arr,i-1);
      gettimeofday(&tv,NULL);
      dEnd = tv.tv_sec + (tv.tv_usec/1000000.0);
      fprintf(fp1,"%d\t%1f\n",i,dEnd-dStart);
      fprintf(fp2,"%d\t%d\n",i,i*i);
   }
   fclose(fp1);
   fclose(fp2);

   return 0;
}
