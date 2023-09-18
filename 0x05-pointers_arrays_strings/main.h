#ifndef MAIN_H
#define MAIN_H

/*
 * File : main.h
 * Auth : Nason Mamu
 * Desc : Header file containing function declarations and prototypes
 * used in 0x05. C - Pointers, arrays and strings.
 */

#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif
