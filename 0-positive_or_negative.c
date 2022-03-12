int main(void)
{
int n;
int x;
int lastn;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n;
n %= 10;
if (n > 5)
lastn = n % 10;
if (lastn > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", x, n);
printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (n < 6 && n != 0)
else if (lastn == 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", x, n);
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else
else if (lastn < 6 && lastn != 0)
{
printf("Last digit of %d is %d and is 0\n", x, n);
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}