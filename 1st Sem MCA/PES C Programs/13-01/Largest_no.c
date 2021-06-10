#include <stdio.h>
int main() {
    int num[10], n, i, largest;
    printf("Enter the limit: \n");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for (int e = 0; e < n; e++) {
      for (int r = n; r >= 0; r--) {
        if (num[e] > num[r]) {
          largest = num[e];
        }
        else if (num[r] > num[e]) {
          largest = num[r];
        }
      }
    }
    printf("largest number is: %d\n",largest);
    return 0;
}
