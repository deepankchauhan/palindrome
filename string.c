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
   // prints if the string is palindrome. 
   printf("palindrome\n");
  else
    // prints if the string is not palindrome.
    printf("not palindrome\n");
  return 0;
}
