#include "main.h"

/**
 * _isdigit - Main used function
 * Check if given character is digit or not
 * @c: given character
 * Return: 1 if @c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
