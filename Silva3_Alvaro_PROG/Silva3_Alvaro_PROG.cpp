#include <stdio.h>

int main()

//1. Diseñe un programa en C, que lea un vector de 20 posiciones...
/*
{
	int i, v1[20], wholeresult = 0, lowval, highval, poshighval = 0;
	for (i = 0; i < 20; i++)
	{
		printf("Give me the %d value:\n", i + 1);
		scanf_s("%d", &v1[i]);

		wholeresult += v1[i];

		if (i == 0)
		{
			lowval =v1[i];
			highval = v1[i];
			poshighval = 0;
		}
		else
		{
			if (v1[i] < lowval)
			{
				lowval = v1[i];
			}

			if (v1[i] > highval)
			{
				highval = v1[i];
				poshighval = i;
			}
		}
	}
	printf("The lowest value is: %d\nThe highest value is: %d (position %d)\n", lowval, highval, poshighval + 1);
	printf("Final vector: %d\n", wholeresult);
}
*/
//2. Diseñe un programa que lea un vector de 12 posiciones y guarde en un segundo vector el inverso del primero...
/*
{
	int v1[12] = { 12,3,6,3,4,34,4,2,5,1,8,3 }, v2[12], v3[12];

	for (int i = 0; i < 12; i++)
	{
		printf("V1 Result is: %d\n", v1[i]);
	}
	printf("\n");

	for (int i = 0; i < 12; i++)
	{
		v2[i] = v1[11 - i]; // Same as [11 - i], v1[10 - i], v1[9 - i], v1[8 - i], v1[7- i], v1[6 - i], v1[5 - i], v1[4 - i], v1[3 - i], v1[2 - i], v1[1 - i], v1[0 - i]
		printf("V2 Result is: %d\n", v2[i]);
	}
	printf("\n");

	for (int i = 0; i < 12; i++)
	{
		if (v1[i] > 5)
		{
			v3[i] = -1;
		}
		else{
			v3[i] = v1[i];
		}
		printf("V3 Result is: %d\n", v3[i]);
	}
}
*/
//3. Realizar un algoritmo que solicite al usuario los elementos enteros de dos vectores de tres elementos y...
/*
{
	int v1[3] = { 12,3,4 };
	int v2[3] = { 3,1,6 };
	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		result += v1[i] * v2[i];
	}
	printf("The result is: %d", result);
}
*/
//4. Realizar el siguiente ejercicio, dado dos vectores V1 y V2 de tipo entero, compara si el...
/*
{
	int v1[10] = { 5,41,11,21,11,20,10,10,10,10 };
	int v2[10] = { 1,1,12,10,1,12,30,1,11,12 };
	int v3[10];

	for (int i = 0; i < 10; i++)
	{
		if (v1[i] > v2[i])
		{
			v3[i] = v1[i] + v2[i];
		}
		else if (v1[i] < v2[i])
		{
			v3[i] = v1[i] - v2[i];
		}
		else
		{
			v3[i] = 0;
		}
	}
	printf("Results in V3:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("V3[%d] = %d\n", i, v3[i]);
	}
}
*/
//5. Realizar una aplicación que realice las siguientes operaciones...
/*
{
	int i, v1[6], resultado = 0, lowval, highval;
	for (i = 0; i < 5; i++)
	{
		printf("Give me the %d value:\n", i + 1);
		scanf_s("%d", &v1[i]);
		if (i == 0)
		{
			lowval = v1[i];
			highval = v1[i];
		}
		else
		{
			if (v1[i] < lowval)
			{
				lowval = v1[i];
			}
			if (v1[i] > highval)
			{
				highval = v1[i];
			}
			resultado = lowval + highval;
		}
	}
	printf("The lowest value is: %d\nThe highest value is: %d\n", lowval, highval);
	printf("Final vector: %d\n", resultado);

}
*/
//6. Realizar una aplicación que realice las siguientes operaciones...
/*
{
	int v1[4];
	for (int i = 0; i < 4; i++)
	{
		printf("Give me the %d value:\n", i + 1);
		scanf_s("%d", &v1[i]);
		if (v1[i] > 10)
		{
			v1[i] = v1[i] * 2;
		}
	}
		printf("Results in V1:\n");					//Usar este bloque de código para imprimir
		for (int i = 0; i < 4; i++)					//un vector entero
		{											//las veces que sean necesarias (definir en el for)
			printf("V1[%d] = %d\n", i, v1[i]);
		}
}
*/
//7. Escribir un algoritmo que invierta los elementos de un vector de 6 elementos enteros sobre ella...
{
	int v1[6] = { 1,2,3,4,5,6 }, result = 0;

	for (int i = 0; i < 6; i++)
	{
		result = v1[i];
		printf("The result before the investment is: %d\n", v1[i]);
	}
	printf("---------------------------------------\n");
	for (int i = 0; i < 6; i++)
	{
		result = v1[5 - i];
		printf("The result after the investment is: %d\n", result);
	}
}