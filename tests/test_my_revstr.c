/*
** EPITECH PROJECT, 2018
** test_my_revstr.c
** File description:
** Task03.5
*/

#include <criterion/criterion.h>
char *my_revstr(char *str);

Test (my_revestr, return_value_is_reversed)
{
    char str[6] = {0};

    strcpy(str, "Hello");
    cr_assert_str_eq(my_revstr("Hello"), "olleh");
}

