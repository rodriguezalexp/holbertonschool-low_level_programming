/**
 * _islower - checks if passes character is lowercase
 * @c: is the argument of the protoype
 * Return: 1 if is c, 0 oyherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
