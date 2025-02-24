#include <main.h>
/**
* @c: character to check
*
* main - Fonctions that cheks for uppercase character
*
* Return: gives 1 or 0
*/
int _isupper(int c);
{
	if (c >= 'A' && c <='Z')
	{
		return (1);
	}
	return (0);
}
