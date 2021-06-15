#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void fnGenRandInput(int X[],int n)
{
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		X[i]=rand()%10000;
	}
}
void fnDisplay(int X[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d \t",X[i]);
	}
}
void bubble_sort(int a[], int n)
{
	int i,j,swap;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
}
int main(int argc, char **argv)
{
	FILE *fp1,*fp2;
	struct timeval tv;
	double dStart,dEnd;
	int Arr[100000],iNum,i;

	fp1=fopen("bubble_actual.txt","w");
	fp2=fopen("bubble_est.txt","w");

	/*printf("\nEnter no of elements\t:");
	scanf("%d",&iNum);
	printf("Enter the elements\t:");
	for(i=0;i<iNum;i++)
	{
		scanf("%d",&Arr[i]);
	}
	bubble_sort(Arr,iNum);
	printf("\nSorted Array\n");
	fnDisplay(Arr,iNum);*/

	for(i=100;i<5000;i+=100)
	{
		fnGenRandInput(Arr,i);
		gettimeofday(&tv,NULL);
		dStart=tv.tv_sec +(tv.tv_usec/1000000.0);
		bubble_sort(Arr,i);
		gettimeofday(&tv,NULL);
		dEnd=tv.tv_sec +(tv.tv_usec/1000000.0);
		fprintf(fp1, "%d\t%1f\n",i,dEnd-dStart);
		fprintf(fp2,"%d\t%d\n",i,i*i);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
