#include <stdio.h>
#include <math.h>
int main() {
   int l, h, number, num, r, arms, count = 0;
   printf("Enter numbers l < h: ");
   scanf("%d %d", &l, &h);
   printf("armstrong numbers between %d and %d are: ", l, h);

   for (number = l + 1; number < h; ++number) {
      num = number;
      while (num != 0) {
         num /= 10;
         ++count;
      }
      num = number;
      while (num != 0) {
         r = num % 10;
         arms += pow(r, count);
         num /= 10;
      }
      if ((int)arms == number) {
         printf("%d ", number);
      }
      count = 0;
      arms = 0;
   }
   return 0;
 }
