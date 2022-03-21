/**
*main - Write a function that returns the length of a string
*Prototype: int _strlen(char *s);
*_strlen(char *s) - calculates the length of a string
*Return - retuns the length of s string
*@s: input to print length of a string.
*/
 int _strlen(char *s)
 {
     int i;

     i = 0;
     while(*s != '\0')
     {
         i++;
         s++;
     }
     return(i);
 }