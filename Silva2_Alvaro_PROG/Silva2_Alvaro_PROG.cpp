#include <stdio.h>
#include <stdbool.h> 

int main()
//Exercise 1
/*
{
	int multiple5for = 0;
	printf("Showing multiples of 5 \n");
	
		for (int i = 5; i <= 100; i += 5)
		{
			multiple5for += i; 
			printf(" %d\n", i);
		}
}
*/
//Exercise 2
/*
{
	int multiple5while = 0;
	printf("Showing multiples of 5 \n");

	while (multiple5while <= 100) //While i (multiple5while) no es igual o major a 5, keep going
	{
		printf("%d\n", multiple5while);
		multiple5while += 5; //5+5+5+5...
	}
}
*/
//Exercise 3
/*
{
	int multiple5dowhile = 0;
	printf("Showing multiples of 5 \n");

	do
	{
		printf("%d\n", multiple5dowhile);
		multiple5dowhile += 5; //5+5+5+5...
	}
	while (multiple5dowhile <= 100);
}
*/
//Exercise 4
/*
{
	printf("Showing 320 - 160 (20-20)\n");

	for (int i = 360; i >= 160; i -= 20)
	{
		printf(" %d\n", i);
	}
}
*/
//Exercise 5
/*
{
	int minus20while = 320;
	printf("Showing 320 - 160 (20-20)\n");

	while (minus20while >= 160)
	{
		printf("%d\n", minus20while);
		minus20while -= 20; //20+20+20...
	}
}
*/
//Exercise 6
/*{
	int minus20dowhile = 320;
	printf("Showing 320 - 160 (200-20)\n");
	do
	{
		printf("%d\n", minus20dowhile);
		minus20dowhile -= 20; //20+20+20...
	} 
	while (minus20dowhile >= 160);
}
*/
//Exercise 7
/*
{
	const int password = 1111;
	int unlock;

	do
	{
		printf("Type the 4 digits password:\n");
		scanf_s("%d", &unlock);
		
		if (unlock == password)
		{
			printf("You are in!\n");
			break;
		}
		
		else {
			printf("Incorrect password\n");
		}
	} while (true);
}
*/
//Exercise 8
/*
{
	const int password = 1111;
	int unlock;
	int max_attempts = 4;

	for (int attempt = 1; attempt <= max_attempts; attempt++)
	{
		printf("Type the 4 digits password:\n");
		scanf_s("%d", &unlock);

		if (unlock == password)
		{
			printf("You are in!\n");
			break;
		}

		else 
		{
			printf("Incorrect password\n");
		}
	}
	printf("Maximum attempts reached. Access denied.\n");

}
*/
//Exercise 9

{
	int number;
	int digits = 0;

	printf("Type a whole number\n");
	scanf_s("%d", &number);

	if (number < 0)
		number =- number;

	// Special case, the 0 has 1 digit
	if (number == 0)
	{
		digits = 1;
	}
	else
	{
		// Loop to divide by 10
		while (number > 0)
		{
			number = number / 10; // takes the last digit
			digits++;            // +1 
		}
	}

//Exercise 10
/*
{
	int number;
	bool isPrime = true;

	printf("Type a whole number:\n");
	scanf_s("%d", &number);

	if (number <= 1)
	{
		// Los números <=1 NO son primos
		isPrime = false;
	}
	else
	{
		for (int i = 2; i < number; i++)
		{
			if (number % i == 0)   // si hay divisor exacto
			{
				isPrime = false;
				break;             // no hace falta seguir comprobando
			}
		}
	}

	if (isPrime)
		printf("%d is prime.\n", number);
	else
		printf("%d is NOT prime.\n", number);

	return 0;
}
*/