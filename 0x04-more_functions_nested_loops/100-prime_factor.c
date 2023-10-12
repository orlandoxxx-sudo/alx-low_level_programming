#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 * Return: The largest prime factor of n
 */
unsigned long largest_prime_factor(unsigned long n)
{
    unsigned long i;
    unsigned long largest_factor = 0;

    // Divide the number by 2 until it becomes odd
    while (n % 2 == 0)
    {
        largest_factor = 2;
        n = n / 2;
    }

    // Try dividing by odd numbers starting from 3
    for (i = 3; i <= n; i += 2)
    {
        while (n % i == 0)
        {
            largest_factor = i;
            n = n / i;
        }
    }

    return largest_factor;
}

int main(void)
{
    unsigned long num = 612852475143;
    unsigned long largest_factor = largest_prime_factor(num);

    printf("%lu\n", largest_factor);

    return 0;
}
