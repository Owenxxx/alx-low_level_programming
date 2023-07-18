#include"main.h"
/**
 * int _islower - project islower by codeX0-beep.
 * c: the char check if is correct.
 * return: 1 and 0 if char is lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return (0);
}
