// this program checks the string if it's palindrome or not using functions present in the string header file.
#include <stdio.h>
#include <string.h>

int main(void)
{
 char a[100], b[100];
  printf("Enter a string:");
  gets(a);
  
  strcpy(b,a);
  strrev(b);
  
  if (strcmp(a,b) == 0)
    printf("palindrome\n");
  else
    printf("not palindrome\n");
  return 0;
}
