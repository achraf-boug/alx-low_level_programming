#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to uppercase
 * Return: nothing.
 */
char *cap_string(char *str)
{
    int i = 0;
    int c;
    
    c = (int) str[0];
    if (str[0] >= 97 & str[0] <= 122)
        str[0] = (char) (c - 32);

    while (str[i] !='\0')
    {
        if (str[i] == '\t' | str[i] == '\n' | str[i] == ' ' | str[i] == ',' | str[i] == ';' | str[i] == '.' | str[i] == '!' | str[i] == '?' | str[i] == '"' | str[i] == '(' | str[i] == ')' | str[i] == '{' | str[i] == '}')
        {
            c = (int) str[i+1];
            if (str[i+1] >= 97 & str[i+1] <= 122){
                str[i+1] = (char) (c - 32);
                i++;
            }
        }
        i++;
    }
    
    return str;
}