#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define NUM_PALABRAS 100
#define LONGITUD_PALABRAS 10

int main()

//From doc
//Strings. Exercise 1 Dada una palabra realizar las siguientes operaciones
/*
{
    char palabra[100];
    int longitud;
    int esPalindromo = 1; // 1 = sí, 0 = no

    printf("Escribe una palabra: ");
    gets_s(palabra, 100); // igual que en ejercicios anteriores

    // a. Escribir la palabra dada
    printf("Palabra: %s\n", palabra);

    // b. Escribir la palabra al revés
    longitud = (int)strlen(palabra);
    printf("Palabra al reves: ");
    for (int i = longitud - 1; i >= 0; i--)
    {
        printf("%c", palabra[i]);
    }
    printf("\n");

    // c. Comprobar si es palíndroma
    for (int i = 0; i < longitud / 2; i++)
    {
        {
            if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = 0;
            break;
            }

        }
    }
    if (esPalindromo) {
        printf("La palabra ES palindroma.\n");
    }
    else {
        printf("La palabra NO es palíndroma.\n");
    }
    return 0;
}
*/

//Strings. Exercise 2. Escribir un programa que lea una frase y determine la frecuencia de aparición de cada vocal con respecto al total de caracteres de la frase.
/*
{
    int frecuencia[5] = { 0 }; // a, e, i, o, u
    int phraselength;
    char frase[100];

    printf("Escribe una frase: ");
    gets_s(frase, 100);
    phraselength = strlen(frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        switch (frase[i]) {
        case 'a':
        case 'A':
            frecuencia[0]++;
            break;
        case 'e':
        case 'E':
            frecuencia[1]++;
            break;
        case 'i':
        case 'I':
            frecuencia[2]++;
            break;
        case 'o':
        case 'O':
            frecuencia[3]++;
            break;
        case 'u':
        case 'U':
            frecuencia[4]++;
            break;


        }
    }
    printf("La frase es de %d caracteres\n", phraselength);
    printf("La letra a aparece %d veces en un total de %d\n", frecuencia[0], phraselength);
    printf("La letra e aparece %d veces en un total de %d\n", frecuencia[1], phraselength);
    printf("La letra i aparece %d veces en un total de %d\n", frecuencia[2], phraselength);
    printf("La letra o aparece %d veces en un total de %d\n", frecuencia[3], phraselength);
    printf("La letra u aparece %d veces en un total de %d\n", frecuencia[4], phraselength);

}
*/

//Strings. Exercise 3. Escribe un programa que lea del teclado una cadena y construya y muestre en la pantalla otra cadena en la que cada vocal haya sido remplazada por un punto.
/*
{
    char frase[100];

    printf("Escribe una frase: ");
    gets_s(frase, 100);

    for (int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            frase[i] = '.';
        }
    }
    printf("Resultado: %s\n", frase);
}
*/

//Strings. Exercise 4. Escribe un programa que lea del teclado una cadena y muestre en la pantalla la cantidad de consonantes y de vocales que contiene.
/*
{
    int vocales = 0;
    int consonantes = 0;
    char frase[100];

    printf("Escribe una frase: ");
    gets_s(frase, 100);

    for (int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { // Este if sirve para identificar letras, ignorando espacios y otros caracteres como números o signos de puntuación
            switch (c) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                vocales++;
                break;
            default:
                consonantes++;
                break;
            }
        }
    }
    printf("Resultado: %d vocales y %d consonantes\n", vocales, consonantes);
}
*/

//Strings. Exercise 5. Escribir un programa que lea una frase y a continuación visualice cada palabra de la frase una debajo de otra, seguida cada palabra del número de letras que compone cada palabra.
/*
{
    char frase[100];
    int longitudPalabra = 0;
    printf("Escribe una frase: ");
    gets_s(frase, 100);
    printf("Palabras y su longitud:\n");
    for (int i = 0; ; i++) {
        char c = frase[i];
        if (c != ' ' && c != '\0') {
            longitudPalabra++;
        }

        else {
            if (longitudPalabra > 0) {
                // Imprimir la palabra
                for (int j = i - longitudPalabra; j < i; j++) {
                    printf("%c", frase[j]);
                }
                // Imprimir la longitud
                printf(" (%d letras)\n", longitudPalabra);
                longitudPalabra = 0; // Reiniciar para la siguiente palabra
            }
            if (c == '\0') {
                break; // Fin de la frase
            }
        }
    }
    return 0;
}
*/


//Strings. Exercise 6. Escribir un programa que lea una frase y sustituya todas las secuencias de dos o más blancos por un solo blanco y visualice la frase.
{
    char frase[100];
    char resultado[100];
    int j = 0;

    printf("Escribe una frase: ");
    gets_s(frase, 100);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' && frase[i + 1] == ' ') {
            continue; // Saltar espacios adicionales
        }
        resultado[j++] = frase[i];
    }
    resultado[j] = '\0';

    printf("Frase resultante: %s\n", resultado);
    return 0;
}