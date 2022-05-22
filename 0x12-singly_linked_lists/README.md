# Singly linked lists

The data structure for this project:

    /**
    * struct list_s - singly linked list
    * @str: string - (malloc'ed string)
    * @len: length of the string
    * @next: points to the next node
    *
    * Description: singly linked list node structure
    */
    typedef struct list_s
    {
        char *str;
        unsigned int len;
        struct list_s *next;
    } list_t;


Allowed functions include:

    ``malloc`` 
    ``free``
    ``exit``

Compailation:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89