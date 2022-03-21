/**
* _strlen(char *s) - calculates the length of a string.
* @s: input to print length of a string.
* Return - return the length of s string
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