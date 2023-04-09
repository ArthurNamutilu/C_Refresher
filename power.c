#include "main.h"
/**
  * _pow_recursion - x ^ y
  * @x: base
  * @y: exponent
  *
  * Return: power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (y *= _pow_recursion(x, y));
}
