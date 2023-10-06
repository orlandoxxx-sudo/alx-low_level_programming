#include <stdio.h>

/**
 * main - Entry Point
 * Descrioption: A code that prints all lowercase letters
 * Return: Always 0 (Success)
*/
int main() 
{
    int asciiValue = 97; // ASCII value of 'a'

    while (asciiValue <= 122) {  // 'z' has ASCII value 122
        putchar(asciiValue);
        asciiValue++;
    }

    putchar('\n');  // Move to the next line after printing all lowercase letters

    return 0;
}

