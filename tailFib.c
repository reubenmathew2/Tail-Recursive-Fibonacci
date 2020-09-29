#include <stdio.h>
#include <time.h>

long int go(int n, int a, int b)
{
    if (n == 0)
        return a;

    else
        return go(n - 1, b, a + b);
}

int main()
{
    int n;
    clock_t c1, c2;
    double t;
    printf("Enter n: ");
    scanf("%d", &n);
    c1 = clock();
    for (long int i = 0; i <= n; i++)
        printf("%ld\n", go(i, 0, 1));
    c2 = clock();
    t = (double) (c2 - c1) / CLOCKS_PER_SEC;
    printf("\nComputation time: %f seconds\n", t);
    return 0;
}
