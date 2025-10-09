
// Problem: Codeforces 96A - Football
// Goal: Check if the input string contains 7 or more same characters in a row (e.g., "0000000" or "1111111")

#include<stdio.h>
int main() {
    int x,i;
    int count =1;
    char str[101];
    scanf("%s",str);

    for (i=0; str[i]!='\0'; i++) // Loop through the string starting
        //from second character (index 1)
      {
        if (str[i]==str[i+1])
            // If current character is same as previous one, continue the streak
        {
          count++;
           if (count >= 7)
             {
                printf("YES\n");  // Found 7+ same players in a row
                return 0; // Exit immediately
             }
        }
        else {
            count = 1;
        }
      }
  printf("NO\n");
  return 0;
}
