#include <stdio.h>

/*int main() // Exercise 1 
{
    int num1, num2, result;

    printf("1st num\n");
    scanf_s("%d", &num1);

    printf("2nd num\n");
    scanf_s("%d", &num2);

    if (num1 == num2)
    {
        result = num1 * num2;
        printf("The result is %d\n", result);
    }
    else if (num1 > num2)
    {
        result = num1 - num2;
        printf("The result is %d\n", result);
    }
    else 
    {
        result = num1 + num2;
        printf("The result is %d\n", result);
    } 
}*/

/*int main() // Exercise 2
{
    int num1, num2, num3;

    printf("Type 3 numbers:\n1.");
    scanf_s("%d", &num1);
    printf("Type 3 numbers:\n2.");
    scanf_s("%d", &num2);
    printf("Type 3 numbers:\n3.");
    scanf_s("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("The highest number is %d\n", num1);
    }
    
    else if (num2 > num1 && num2 > num3)
    {
        printf("The highest number is %d\n", num2);
    }
    
    else if (num3 > num1 && num3 > num2)
    {
        printf("The highest number is %d\n", num3);
    }

    else if (num1 == num2 && num2 == num3)
    {
        printf("All the numbers are the same");
    }
}*/     

/*int main() // Exercise 3
{
    int totalhours, plus40 = 40, mainpay = 800, extrapay;

    printf("How many hours did you work?\n");
    scanf_s("%d", &totalhours);

    if (totalhours > plus40)
    {
        extrapay = totalhours - plus40;
        printf("Your extra hours pay is %d", extrapay * 40);
        printf("\nYour total is %d", (extrapay * 40) + mainpay);
    }

    else
    {
        printf("You didn't make extra hours \nYour total is 800");
    }
}
*/

/*
int main() // Exercise 4
{
int edad;
char gender;
float pulsaciones;

    printf("Age?:\n");
    scanf_s("%d", &edad);

    printf("Type your gender ((F)emale, M(ale)):\n");
    scanf_s(" %c", &gender, 1);

    if (gender == 'f' || gender == 'F')
    {
        pulsaciones = (220 - edad) / 10; 
        printf("Your heart rate every 10 seconds is: %.2f", pulsaciones);
    }
    else if (gender == 'm' || gender == 'M')
    {
        pulsaciones = (210 - edad) / 10;
        printf("Your heart rate every 10 seconds is: %.2f", pulsaciones);
    }

    else
    {
        printf("Not valid");
    }
}
*/

int main() // Exercise 5
{
    char bolita;
    float white = 1.0f, green = 0.10f, yellow = 0.25f, blue = 0.50f, red = 0.0f;
    float price, discountedPrice;

        printf("What's the price of your buy?\n");
        scanf_s("%f", &price);

        printf("What's the colour of the bolita?\n W | G | Y | B | R |\n");
        scanf_s(" %c", &bolita, 1);

        if (bolita == 'W' || bolita == 'w')
        {
            discountedPrice = price * white;
            printf_s("No discount for you, you have to pay %f\n", discountedPrice);
        }

        else if (bolita == 'G' || bolita == 'g')
        {
            discountedPrice = price * green;
            printf_s("10%% discount, you have to pay %.2f\n", discountedPrice);
        }

        else if (bolita == 'Y' || bolita == 'y')
        {
            discountedPrice = price * yellow;
            printf_s("25%% discount, you have to pay %.2f\n", discountedPrice);
        }

        else if (bolita == 'B' || bolita == 'b')
        {
            discountedPrice = price * blue;
            printf_s("50%% discount, you have to pay %.2f\n", discountedPrice);
        }

        else if (bolita == 'R' || bolita == 'r')
        {
            discountedPrice = price * red;
            printf_s("100%% discount, you have to pay %.2f\n", discountedPrice);
        }
}