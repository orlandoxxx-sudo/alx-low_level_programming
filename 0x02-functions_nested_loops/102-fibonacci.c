#include <stdio.h>
/**
 * print_fibonacci - a function that prints the fibonacci
 * main - entry point
 * Description: this program prints first 50 fibonacci
 * Return: Always 0 (Success)
*/
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

