#include "main.h"
/**
*main checks for alphabet characters
*Returns 1 if  c is lowercas or uppercase
*Returns 0 otherwise(not an alphabet character)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}