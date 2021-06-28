#include <stdio.h>
  #include <string.h>
  #define max 500
   int brute(char *search, char *pattern, int slen, int plen)
  {
        int i, j, k;

        for (i = 0; i <= slen - plen; i++)
        {
                for (j = 0, k = i; (search[k] == pattern[j]) &&
                        (j < plen); j++, k++);
                if (j == plen)
                        return j;
        }
        return -1;
  }

  int main()
  {
        char searchStr[max], pattern[max];
        int res;
        printf("Enter Search String:");
        fgets(searchStr, max, stdin);
        printf("Enter Pattern String to be found:");
        fgets(pattern, max, stdin);
        searchStr[strlen(searchStr) - 1] = '\0';
        pattern[strlen(pattern) - 1] = '\0';
        res = brute(searchStr, pattern, strlen(searchStr), strlen(pattern));
        if (res == -1)
        {
                printf("Search pattern is not available\n");
        }
        else
        {
                printf("Search pattern available at the location %d\n", res);
        }
        return 0;
  }
