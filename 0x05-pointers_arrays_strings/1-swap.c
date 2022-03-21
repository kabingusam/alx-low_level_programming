/**
*main -Writes a function that swaps the values of two integers.
* prototype -void swap_int(int *a, int *b);
*@a - first value to swap
*@b - second value to swap
*/
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = b;
    *b = temp; 
}