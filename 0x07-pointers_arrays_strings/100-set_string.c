#include "main.h"

/**
 * set_string - sets the value of pointer to char
 * @s: pointer to a pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
