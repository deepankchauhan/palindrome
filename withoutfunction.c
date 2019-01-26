// this program checks if the string is palindrome or not.
#include <stdio.h>
 
int main()
{
  char text[100];
  int begin, middle, end, length = 0;
 
  gets(text);
 
  while (text[length] != '\0')
    length++;
 
  end = length - 1;
  middle = length/2;
 
  for (begin = 0; begin < middle; begin++)
  {
    if (text[begin] != text[end])
    {
      // prints if the string is not palindrome
      printf("Not a palindrome.\n");
      break;
    }
    end--;
  }
  if (begin == middle)
    // prints if the string is palindrome
    printf("Palindrome.\n");
 
  return 0;
}
