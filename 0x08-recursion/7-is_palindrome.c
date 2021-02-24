#include "holberton.h"
int _strlen_recursion(char *s);
int pal(char *s, int len, int i);
/**
*is_palindrome - function
*@s: PAL.
* Return: 0
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (pal(s, len - 1, 0));
}
/**
*_strlen_recursion - check the code
*@s: pointer
*
*Return: 0
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
return (0);
}



/**
*pal - pall
*@s: char
*@len: length
*@i: account
*Return: 0
*/
int pal(char *s, int len, int i)
{
if (s[i] == s[len - i] && i == len / 2)
{
return (1);
}
else if (s[i] == s[len - i])
{
return (pal(s, len, i + 1));
}
else
return (0);
}
