#include <stdio.h>

int main()
{
    int upper[10], find[10],type_DT,size_DT;
    int n,base_addr=0,actual_addr=0,i,j,offset=0;
    printf("Enter the dimension of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d dimension of the upper bound array: ",i);
        scanf("%d",&upper[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter the %d dimension to find the address of the array:",i);
        scanf("%d",&find[i]);
    }
    printf("Enter the base address of the upper bound array: ");
    scanf("%d",&base_addr);
    size_DT=4;
    for(int i=0;i<n;i++)
    {
        int temp=find[i];
         for(int j=i+1;j<n;j++)
         {
             temp=temp*upper[j];

         }
            offset=offset+temp;
    }
   actual_addr=base_addr+(size_DT*offset);
   printf("Actual address: %d",actual_addr);
    return 0;
}
