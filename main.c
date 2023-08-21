#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    printf("----------------edege cases-------------");

   

	len = _printf("A %s sentence\n", "simple");
	len2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %v entence\n");
	len2 = printf("A simple %v entence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("NULL: %c, %s\n", NULL, NULL);
	len2 = printf("NULL: %c, %s\n", NULL, NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%");
	printf("lookup\n");
	len2 = printf("%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple sentence%");
	len2 = printf("\nA simple sentence%");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

    return (0);
}
