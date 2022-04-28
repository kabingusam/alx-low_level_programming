#include "main.h"
/**
* binary_to_uint : converts binary number to an unsigned int.
* @b: is pointing to a string of 0 and 1 chars
* the converted number, or 0 if
* return: the converted number
*        or 0 if :
*           - there is one or more chars in the 
*            string b that is not 0 or 1.
*           - b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
  unsigned int num = 0;
  int i = 0;

  if (b == NULL)
    return 0;

  while (b[i] == '0' || b[i] == '1')
  {  // Found another digit.
    num <<= 1;
    num += b[i]-'0';
    i++;
  }
  return num;
}