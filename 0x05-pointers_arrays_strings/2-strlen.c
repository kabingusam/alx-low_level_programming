/**
*main - Write a function that returns the length of a string
*Prototype: int _strlen(char *s);
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
     return(i)
 }