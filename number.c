// checks for the integer number if it's a palindrome or not.
#include<stdio.h>

int main(void)
{
  int i, reversed_number = 0, remainder, original_number;
  printf("Enter a string: ");
  scanf("%i", &i);
  original_number = n;
  
  while (n != 0)
  {
    remainder = n % 10;
    reversed_number = reversed_number* 10+ remainder;
    n /= 10;
  }
  
  if (reversed_number == original_number)
  {
    // prints if the number is palindrome.
    printf("This number is palindrome\n");
  }
  else
    // prints if the number is not palindrome.
    printf("This number is not palindrome\n");
  return 0;
}
