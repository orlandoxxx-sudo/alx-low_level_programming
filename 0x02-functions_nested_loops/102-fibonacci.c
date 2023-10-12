#include <stdio.h>

void print_fibonacci(int count) {
    long long first = 1, second = 2, next;
    int i;

    // Print the first two numbers
    printf("%lld, %lld", first, second);

    for (i = 3; i <= count; i++) {
        next = first + second;
        printf(", %lld", next);
        first = second;
        second = next;
    }
}

int main() {
    // Print the first 50 Fibonacci numbers
    print_fibonacci(50);
    printf("\n");

    return 0;
}
/**
 * print_fibonacci - a function that prints the fibonacci
 * main - entry point
 * Description: this program prints first 50 fibonacci
 * Return: Always 0 (Success)
*/
/**
void print_fibonacci(int count) {
    int first = 1, second = 2, next, i;

    printf("%d, %d", first, second);

    for (i = 3; i <= count; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
}

int main() {
   print_fibonacci(50);
    printf("\n");

    return 0;
}
*/

