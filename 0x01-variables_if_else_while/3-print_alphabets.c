#include <stdio.h>



/**
 * main - Prints the alphabet in lowercase first and then in uppercase
 * using putchar only followed by a new line
 * Return: Always 0 (Success)
 **/

int main(void)

{

		int x = 'a';

			int i = 'A';



				while (x <= 'z')

						{

									putchar(x);

											x++;

												}



					while (i <= 'Z')

							{

										putchar(i);

												i++;

													}

						putchar('\n');


						return (0);

}
