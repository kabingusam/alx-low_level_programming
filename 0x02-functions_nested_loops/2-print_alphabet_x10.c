#include "main.h"
/**
*main prints alphabets from a-z ten times followed by a new line.
*returns: 0 on success.
*/
void print_alphabet_x10(void)
{
    char c;

    for(i = 0 ; i < 10 ; i++)
    {
        for(c = 'a' ; c <= 'z' ; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
    }
}