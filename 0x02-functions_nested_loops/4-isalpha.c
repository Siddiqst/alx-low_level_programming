#include <stdio.h>
#include "main.h"

/**
 * main - Test the _isalpha() function
 *
 * Return: Always 0.
 */
int main(void)
{
int is_alpha;

is_alpha = _isalpha('H');
printf("Is 'H' an alphabetic character? %s\n", is_alpha ? "Yes" : "No");

is_alpha = _isalpha('o');
printf("Is 'o' an alphabetic character? %s\n", is_alpha ? "Yes" : "No");

is_alpha = _isalpha(108);
printf("Is 108 an alphabetic character? %s\n", is_alpha ? "Yes" : "No");

is_alpha = _isalpha(';');
printf("Is ';' an alphabetic character? %s\n", is_alpha ? "Yes" : "No");

return (0);
}
