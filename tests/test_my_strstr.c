/*
** EPITECH PROJECT, 2018
** test_strstr.c
** File description:
** task04.5
*/

#include <criterion/criterion.h>
char *my_strstr(char *str, char const *to_find)

Test(my_strstr, copy_five_characters_in_empty_array)
{
    char str[5] = {0};

    my_strstr(str, "Hello");
    cr_assert_str_eq(my_strstr("Hello"), "He");
}
    
