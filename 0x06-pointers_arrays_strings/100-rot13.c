#include "main.h"
/**
 * rot13 - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: decrypted string
 */
char *rot13(char *n)
{
int a = 0;

while (s[a])
{
while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
{
if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
{
s[a] -= 13;
break;
}
s[a] += 13;
break;
}
a++;
}
return (s);
}
