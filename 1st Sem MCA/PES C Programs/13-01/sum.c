#include <stdio.h>
int main()
 {
    int n,s=0,i;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s+i;
    }
    printf("Sum of the integers is= %d", s);
    return 0;
}
