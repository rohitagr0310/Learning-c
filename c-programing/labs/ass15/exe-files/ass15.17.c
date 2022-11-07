#include <stdio.h>
void series(int n);

void series(int n)
{
    int t1 = 0, t2 = 1;

    int nextTerm = t1 + t2;

    printf("Fibonacci Series - %d, %d, ", t1, t2);

    for (int i = 3; i <= n; ++i)
    {
        printf("%d, ", nextTerm);

        t1 = t2;
        t2 = nextTerm;

        nextTerm = t1 + t2;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    series(n);

    return 0;
}
