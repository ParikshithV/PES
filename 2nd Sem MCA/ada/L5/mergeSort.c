#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<math.h>

void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);

void fnGenRandInput(int X[],int n)
{
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        X[i]=rand()%10000;
    }
}

void fnDispArray(int X[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d \t",X[i]);
}

int main(int argc,char **argv)
{
    FILE *fp1,*fp2;
    struct timeval tv;
    double dStart,dEnd;
    int Arr[100000],iNum,i,j;
    fp1=fopen("merge.txt","w");
    fp2=fopen("merge1.txt","w");

    int a[30],n;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("Enter numbers to sort: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    fnDispArray(Arr,iNum);

    for(i=100;i<5000;i+=100)
    {
        fnGenRandInput(Arr,i);
        gettimeofday(&tv,NULL);
        dStart = tv.tv_sec + (tv.tv_usec/1000000.0);
        mergesort(Arr,i-1,j-1);
        gettimeofday(&tv,NULL);
        dEnd = tv.tv_sec + (tv.tv_usec/1000000.0);
        fprintf(fp1,"%d\t%1f\n",i,dEnd-dStart);
        fprintf(fp2,"%d\t%d\n",i,i*log10(i));
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}

void mergesort(int a[],int i,int j)
{
    int mid;

    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=j1)
        temp[k++]=a[i++];

    while(j<=j2)
        temp[k++]=a[j++];


    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
