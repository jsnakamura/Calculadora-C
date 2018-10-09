#include "Funções.h"

float Soma(float a, float b)
{
	return a + b;
}

float Subtração(float a, float b)
{
	return a - b;
}

float Multiplicação(float a, float b)
{
	return a * b;
}

float Divisão(float a, float b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		printf("Divisor = 0\n");
		return 0;
	}
}