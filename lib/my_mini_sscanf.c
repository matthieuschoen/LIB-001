/*
** EPITECH PROJECT, 2025
** LIB-001
** File description:
** my_mini_sscanf
*/

#include "functions.h"

static int_parser(char **input, char *result)
{
    int sign = 1;

    *result = 0;
    if (**input == '-') {
        sign = -1;
        (*input)++;
    }
    while (my_isdigit(**input)) {
        *result = *result * 10 + (**input - '0');
        (*input)++;
    }
    *result *= sign;
    return 1;
}
