#include<stdio.h>
int main()
{
  int a[10], n, i, s;
  printf("\n Enter the limit \n");
  scanf("%d",&n);
  printf("\n enter the numbers: \n", &n);
  for(i=0; i<n; i++)
   {
   	 scanf("%d",&a[i]);
   }
  s = a[0];
  for(i=1; i<n; i++)
   {
    if(s > a[i])
     {
       s = a[i];
	   }
   }
  printf("\nsmallest number = %d", s);
  return 0;
}
