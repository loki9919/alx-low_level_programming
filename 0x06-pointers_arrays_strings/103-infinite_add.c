#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n +i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		temp = *(n + i);
	}
}
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int carry = 0;
	int digits = 0;
	int sum;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{	
		j++;
	}
	if (i >= size_r || j >= size_r)
	{
		return (0);
	}
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		if(digits >= size_r - 1)
		{
			return (0);
		}
		r[digits] = sum % 10 + '0';
		digits++;
	}
	r[digits] = '\0';
	rev_string(r);
	return r;
}
