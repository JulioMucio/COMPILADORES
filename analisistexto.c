#include <stdio.h>
#include <ctype.h>

void analiza_linea(char linea[], int *pv, int *pc, int *pd, int *pb, int*po);
int main()
{
    char linea[80]; /*Linea de texto*/
    int vocales = 0; /*Contador de vocales*/
    int consonantes = 0; /*Contador de consonantes*/
    int digitos = 0; /*Contador de digitos*/
    int blancos = 0; /*Contador de espacios en blanco*/
    int otros = 0; /*Contador del resto de caracteres*/
    printf("Introducir una linea de texto:\n");
    scanf("%[^\n]", linea);

    analiza_linea(linea, &vocales, &consonantes, &digitos, &blancos, &otros);

    printf("\nN° de vocales: %d", vocales);
    printf("\nN° de consonantes: %d", consonantes);
    printf("\nN° de digitos : %d", digitos);
    printf("\nN° de caracteres en blanco: %d", blancos);
    printf("\nN° de otros caracteres: %d", otros);
}
void analiza_linea(char linea[], int *pv, int*pc, int*pd, int *pb, int *po)
/*Analizar los caracteres en una linea de texto*/
{
    char c; /*Caracter en mayusculas*/
    int cont = 0; /*Contador de caracteres*/
    while ((c = toupper(linea[cont])) != '\0') {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        ++ *pv; /*Vocal*/
        else if (c >= 'A' && c <= 'Z')
        ++ *pc; /*Constante*/
        else if (c >='0' && c<= '9')
        ++ *pd; /*Digito*/
        else if (c == ' ' || c == '\t')
        ++ *pb; /*Espacio en blanco*/
        else++ *po; /*Otro*/
        ++cont;
    }
    return;
}