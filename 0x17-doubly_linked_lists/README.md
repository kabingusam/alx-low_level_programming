# 0x17. C - Doubly linked lists


```Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence. ```


### General Info
***
0x17. C - Doubly linked lists


### Data structure used:

```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

```


### Table of Contents
***
1. [0-print_dlistint.c](./0-print_dlistint.c)
2. [1-dlistint_len.c](./1-dlistint_len.c)
3. [2-add_dnodeint.c](./2-add_dnodeint.c)
4. [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)
5. [4-free_dlistint.c](./4-free_dlistint.c)
6. [5-get_dnodeint.c](./5-get_dnodeint.c)
7. [6-sum_dlistint.c](./6-sum_dlistint.c)
8. [7-insert_dnodeint.c](./7-insert_dnodeint.c)
9. [8-delete_dnodeint.c](./8-delete_dnodeint.c)
10. [100-password](./#)
11. [102-result](./#)
12. [103-keygen.c](./#)
13. [README.md](./README.md)


Author:

Kabingu Sammy.