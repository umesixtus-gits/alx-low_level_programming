#include <stdio.h>

/**
 * main - Entry point
 * Description: return all combination of 0 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, num1, num2, num3, num4;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			num1 = a / 10;
			num2 = a % 10;
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(' ');
			num3 = b / 10;
			num4 = b % 10;
			putchar(num3 + '0');
			putchar(num4 + '0');
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
