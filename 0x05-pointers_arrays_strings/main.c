#include "main.h"

/**
 * main - check the code 
 * Return: Always 0.
 */
int main(void)
{
	/* 0-reset_to_98.c */
	/*
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	*/

	/* 0-swap.c */
	/*
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	*/

	/* 0-strlen.c */
	/*
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	*/

	/* 3-puts.c */
	/*
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	*/

	/* 4-print_rev.c */
	/*
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	*/

	/* 5-rev_string.c */
	/*
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	*/

	/* 6-puts2.c */
	/*
	char *str;

	str = "0123456789";
	puts2(str);
	*/

	/* 7-puts_half.c */
	/*

	char *str;

	str = "0123456789";
	puts_half(str);
	*/

	/* 8-print_array.c */
	/*
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	*/

	/* 8-print_array.c */
	/*
	*/
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}