
#include<stdio.h>
#include<Sys/time.h>
#include<stdlib.h>
# define SIZE 100

void matrix_multiplication(int A[SIZE][SIZE],int B[SIZE][SIZE],int m,int p,int q)
{
	int C[10][10];
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<q; j++)
		{
			C[i][j]=0;
			for (int k=0; k<p; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}


	printf("\nResultant matrix:\n");
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("%d  ",C[i][j]);
		}
		printf("\n");
	}

}
void fnGenRandInput(int X[SIZE][SIZE],int Y[SIZE][SIZE],int n)
{
	int i,j;
	srand(time(NULL));
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			X[i][j]=rand()%10000;
			Y[i][j]=rand()%10000;
		}
	}


}



int main()
{
	int A[SIZE][SIZE],B[SIZE][SIZE],i,j,m,n,p,q;
	FILE *fp1, *fp2;
	struct timeval tv;
	double dStart,dEnd;
	fp1=fopen("time1.txt","w");
	fp2=fopen("time2.txt","w");

	// 
	// printf("Enter i and j for matrix A : \n");
	// 	scanf("%d%d",&m,&n);
	//
	// printf("Enter the elements of matrix A : \n");
	//
	// for (i=0;i<m;i++)
	// 	for(j=0;j<n;j++)
	// 		scanf("%d",&A[i][j]);
	//
	// printf("Enter i and j for matrix B : \n");
	// 	scanf("%d%d",&p,&q);
	// if (n != p)
	// 	printf("The multiplication is not possible \n");
	// else
	// {
	// printf("Enter the elements of matrix B : \n");
	//
	// for (i=0;i<p;i++)
	// 	for(j=0;j<q;j++)
	// 		scanf("%d",&B[i][j]);
	//
	// matrix_multiplication(A,B,m,p,q);
	//
	// }

	for(i=2;i<11;i+=1)
	{

		fnGenRandInput(A,B,i);
		gettimeofday(&tv,NULL);
		dStart=tv.tv_sec+(tv.tv_usec/1000000.0);
		matrix_multiplication(A,B,i,i,i);
		gettimeofday(&tv,NULL);
		dEnd=tv.tv_sec+(tv.tv_usec/1000000.0);
		fprintf(fp1, "\n %d \t %lf \n",i,dEnd-dStart);
		fprintf(fp2,"%d \t %d \n",i,i*i*i);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
