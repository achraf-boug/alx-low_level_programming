#include "main.h"
/**
 * int _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;
    int diff = 0;

    while (s1[i] != '\0' & s2[i] != '\0')
    {
        diff = (int) s1[i] - (int) s2[i];
        if (diff != 0)
            return diff;
        i++;
    }

    diff = (int) s1[i] - (int) s2[i];

    return diff;
}
