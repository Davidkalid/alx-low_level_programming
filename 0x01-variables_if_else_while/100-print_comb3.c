0x01-variables_if_else_while
README
C - Variables, if, else, while
0. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

The variable n will store a different value every time you will run this program
The output of the program should be:
The number, followed by
if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative
followed by a new line
1. The last digit
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

The variable n will store a different value every time you run this program
The output of the program should be:
The string Last digit of, followed by
n, followed by
The string is, followed by
if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line
2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
3. alphABET
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code
4. When I was having that alphabet soup, I never thought that it would pay off
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
5. Numbers
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

All your code should be in the main function
6. Numberz
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

You are not allowed to use any variable of type char
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar twice in your code
All your code should be in the main function
7. Smile in the mirror
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
8. Hexadecimal
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code
9. Patience, persistence and perspiration make an unbeatable combination for success
Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar four times maximum in your code
You are not allowed to use any variable of type char
10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
Write a program that prints all possible different combinations of two digits.

Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar five times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
11. The success combination in business is: Do what you do better... and: do more of what you do...
Write a program that prints all possible different combinations of three digits.

Numbers must be separated by ,, followed by a space
The three digits must be different
012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
Print only the smallest combination of three digits
Numbers should be printed in ascending order, with three digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar six times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
12. Software is eating the World
Write a program that prints all possible combinations of two two-digit numbers.

The numbers should range from 0 to 99
The two numbers should be separated by a space
All numbers should be printed with two digits. 1 should be printed as 01
The combination of numbers must be separated by comma, followed by a space
The combinations of numbers should be printed in ascending order
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar eight times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function



======================================================

0-positive_or_negative.c



#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */

if (n > 0)

{

printf("%d is positive\n", n);

}

if (n < 0)

{

printf("%d is negative\n", n);

}

if (n == 0)

{

printf("%d is zero\n", n);

}

return (0);

}




========================================


1-last_digit.c


#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**

 * main - Prints the last digit of a randomly generated number

 *        and whether it is greater than 5, less than 6, or 0.

 *

 * Return: Always 0.

 */

int main(void)

{

        int n;


        srand(time(0));

        n = rand() - RAND_MAX / 2;


        if ((n % 10) > 5)

        {

                printf("Last digit of %d is %d and is greater than 5\n",

                        n, n % 10);

        }

        else if ((n % 10) < 6 && (n % 10) != 0)

        {

                printf("Last digit of %d is %d and is less than 6 and not 0\n",

                        n, n % 10);

        }

        else

        {

                printf("Last digit of %d is %d and is 0\n",

                        n, n % 10);

        }


        return (0);


}



=============================================


2-print_alphabet.c



#include <stdio.h>


/**

 * main - prints the alphabet in lowercase,

 * followed by a new line

 * Return: Always 0 (Success)

 */

int main(void)

{

        char ch;


        for (ch = 'a'; ch <= 'z'; ch++)

        {

                putchar(ch);

        }

        putchar('\n');

        return (0);

}



==============================================


3-print_alphabets.c



#include <stdio.h>


/**

 * main - prints the alphabet in lowercase, and then in uppercase,

 * followed by a new line

 * Return: Always 0 (Success)

 */

int main(void)

{

        int ch;


        for (ch = 'a'; ch <= 'z'; ch++)

                putchar(ch);

        for (ch = 'A'; ch <= 'Z'; ch++)

                putchar(ch);

        putchar('\n');

        return (0);

}



================================================



4-print_alphabt.c



#include <stdio.h>


/**

 * main - prints the alphabet in lowercase,

 * followed by a new line, except q and e

 * Return: Aways 0 (Sucess)

 */

int main(void)

{

        char ch = 'a';


        while (ch <= 'z')

        {

                if (ch != 'e' && ch != 'q')

                {

                        putchar(ch);

                }

                ch++;

        }

        putchar('\n');

        return (0);

}



==================================================


5-print_numbers.c



#include <stdio.h>


/**

 * main - prints all single digit numbers of base

 * 10 starting from 0, followed by a new line

 * Return: Always 0 (Success)

 */

int main(void)

{

        int n;


        for (n = 0; n < 10; n++)

                printf("%d", n);

        printf("\n");

        return (0);

}


=================================================

6-print_numberz.c


#include <stdio.h>


/**

 * main - prints all single digit numbers of base 10 starting from 0,

 * followed by a new line, using putchar

 * Return: Always 0 (Success)

 */

int main(void)

{

        int n;


        for (n = 48; n < 58; n++)

        {

                putchar(n);

        }

        putchar('\n');

        return (0);

}




===================================================



7-print_tebahpla.c



#include <stdio.h>


/**

 * main - prints the lowercase alphabet in reverse,

 * followed by a new line

 * Return: Always 0 (Success)

 */

int main(void)

{

        char ch;


        for (ch = 'z'; ch >= 'a'; ch--)

        {

                putchar(ch);

        }

        putchar('\n');

        return (0);

}



====================================================


8-print_base16.c


#include <stdio.h>


/**

 * main - prints all the numbers of base 16 in lowercase,

 * followed by a new line

 * Return: Always 0 (Success)

 */

int main(void)

{

        int n;

        char ch;


        for (n = 48; n < 58; n++)

        {

                putchar(n);

        }

        for (ch = 'a'; ch <= 'f'; ch++)

        {

                putchar(ch);

        }

        putchar('\n');

        return (0);

}



================================================


9-print_comb.c



#include <stdio.h>


/**

 * main - prints all possible combinations of single-digit numbers

 * Return: Always 0 (Success)

 */

int main(void)

{

        int n;


        for (n = 48; n < 58; n++)

        {

                putchar(n);

                if (n != 57)

                {

                        putchar(',');

                        putchar(' ');

                }

        }

        putchar('\n');

        return (0);

}



===================================================


100-print_comb3.c


#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */

int main(void)

{

int n, m;

for (n = 48; n <= 56; n++)

{
for (m = 49; m <= 57; m++)
{
if (m > n)
{

putchar(n);

putchar(m);
if (n != 56 || m != 57)

{

putchar(',');

putchar(' ');
}

}
}
}

putchar('\n');

return (0);
}
