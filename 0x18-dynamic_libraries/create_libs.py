import os

# libs = [
# 	"int _putchar(char c);",
# 	"int _islower(int c);",
# 	"int _isalpha(int c);",
# 	"int _abs(int n);",
# 	"int _isupper(int c);",
# 	"int _isdigit(int c);",
# 	"int _strlen(char *s);",
# 	"void _puts(char *s);",
# 	"char *_strcpy(char *dest, char *src);",
# 	"int _atoi(char *s);",
# 	"char *_strcat(char *dest, char *src);",
# 	"char *_strncat(char *dest, char *src, int n);",
# 	"char *_strncpy(char *dest, char *src, int n);",
# 	"int _strcmp(char *s1, char *s2);",
# 	"char *_memset(char *s, char b, unsigned int n);",
# 	"char *_memcpy(char *dest, char *src, unsigned int n);",
# 	"char *_strchr(char *s, char c);",
# 	"unsigned int _strspn(char *s, char *accept);",
# 	"char *_strpbrk(char *s, char *accept);",
# 	"char *_strstr(char *haystack, char *needle);",
# ]

# for lib in libs:
#     name = lib.split(' ')[1].split('(')[0].replace('*', '')
#     print(f'"{name}.c": "{lib}",')

libs = {
	"_putchar.c": "int _putchar(char c);",
	"_islower.c": "int _islower(int c);",
	"_isalpha.c": "int _isalpha(int c);",
	"_abs.c": "int _abs(int n);",
	"_isupper.c": "int _isupper(int c);",
	"_isdigit.c": "int _isdigit(int c);",
	"_strlen.c": "int _strlen(char *s);",
	"_puts.c": "void _puts(char *s);",
	"_strcpy.c": "char *_strcpy(char *dest, char *src);",
	"_atoi.c": "int _atoi(char *s);",
	"_strcat.c": "char *_strcat(char *dest, char *src);",
	"_strncat.c": "char *_strncat(char *dest, char *src, int n);",
	"_strncpy.c": "char *_strncpy(char *dest, char *src, int n);",
	"_strcmp.c": "int _strcmp(char *s1, char *s2);",
	"_memset.c": "char *_memset(char *s, char b, unsigned int n);",
	"_memcpy.c": "char *_memcpy(char *dest, char *src, unsigned int n);",
	"_strchr.c": "char *_strchr(char *s, char c);",
	"_strspn.c": "unsigned int _strspn(char *s, char *accept);",
	"_strpbrk.c": "char *_strpbrk(char *s, char *accept);",
	"_strstr.c": "char *_strstr(char *haystack, char *needle);",
}

mainH = """\
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
"""
for fileName in libs.keys():
    print(fileName, libs[fileName])
    open(fileName, 'w').write(f'#include "main.h"\n\n{libs[fileName].replace(";", "")} {{}}\n')
    mainH += f'\n{libs[fileName]}'

mainH += "\n\n#endif /* MAIN_H */"

open("main.h", 'w').write(mainH)
