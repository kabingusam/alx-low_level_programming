# More pointers, arrays and strings

New commands memset, memcpy, strchr, . strspn, strpbrk, strstr.

# memset :fills memory with a constant byte.

• Prototype used : char *\_memset(char *s, char b, unsigned int n);

# memcpy :copies memory area.

• Prototype used : char *\_memcpy(char *dest, char \*src, unsigned int n);

# strchr :locates a character in a string.

• Prototype: char *\_strchr(char *s, char c);

# strspn : gets the length of a prefix substring.

• Prototype: unsigned int \_strspn(char *s, char *accept);

# strpbrk : searches a string for any of a set of bytes.

• Prototype: char *\_strpbrk(char *s, char \*accept);

# strstr : that locates a substring.

• Prototype: char *\_strstr(char *haystack, char \*needle);

# A function that prints the chessboard.

• Prototype: void print_chessboard(char (\*a)[8]);

# A function that prints the sum of the two diagonals of a square matrix of integers.

• Prototype: void print_diagsums(int \*a, int size);

# A function that sets the value of a pointer to a char.

• Prototype: void set_string(char \**s, char *to);

# Creating a file that contains the password for the crackme2 executable.
