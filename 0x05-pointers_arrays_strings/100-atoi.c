#include "main.h"

/**
 * _atoi - function with one argument
 * @s: char type pointer argument
 *
 * Description: convert a string to an integer
 * Return: value of s
 */
int _atoi(char *s)
{
	int i, sign, number;

	i = 0;
	sign = 1;
	number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				number = (s[i] - '0') * sign + number * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (number);
}
