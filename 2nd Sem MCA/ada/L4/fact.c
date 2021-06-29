#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<math.h>
long int factorial(int n)
{
	if(n>=1)
		return n*factorial(n-1);
	else
		return 1;
}
int main()
{
	FILE *fp1,*fp2;
	struct timeval tv;
	double dStart,dEnd;
	int i, in;
  printf("Enter number :");
	scanf("%d",&in);
  int f=factorial(in);
  //int f=factorial(5);
  printf("factorial = %d\n",f);

	// fp1=fopen("factorial_actual.txt","w");
	// fp2=fopen("factorial_estimated.txt","w");
	// for(i=1;i<50;i+=1)
	// {
	// 	gettimeofday(&tv,NULL);
	// 	dStart=tv.tv_sec+(tv.tv_usec/1000000.0);
	// 	long int f=factorial(i);
	// 	printf("fact of %d= %ld\n",i,f);
	// 	gettimeofday(&tv,NULL);
	// 	dEnd=tv.tv_sec+(tv.tv_usec/1000000.0);
	// 	fprintf(fp1, "\n %d \t %lf \n",i,dEnd-dStart);
	// 	fprintf(fp2,"%d \t %d \n",i,i);
  //
	// }
  //
	// fclose(fp1);
	// fclose(fp2);

	return 0;
}
