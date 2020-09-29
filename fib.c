#include <stdio.h>
#include <time.h>

int fib(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    time_t c1, c2;
    double t;
    printf("Enter n: ");
    scanf("%d", &n);
    c1 = clock();
    for (int i = 0; i <= n; i++)
        printf("%d\n", fib(i));
    c2 = clock();
    t = (double) (c2 - c1) / CLOCKS_PER_SEC;
    printf("\nComputation Time: %f seconds\n", t);
    return 0;
}