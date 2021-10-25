//a program for reversing a string in c

#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Enter a string to reverse\n");
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
