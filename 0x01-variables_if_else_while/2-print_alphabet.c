#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*
*Return: return 
*/
int main(void)
{
    int letter;

   for (letter = 'a'; letter <= 'z'; letter++)
   
    putchar(letter);
 
        putchar('\n');

  return (0);
}
