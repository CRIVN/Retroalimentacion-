#include <stdio.h>

void capturar_enteros(){
    int enteros[5];
    float promedio;
    int suma=0;

    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        scanf("%i", &enteros[i]);
        
    }
    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        printf("%i\n", &enteros[i]);

    }
    for (size_t i = 0; i < sizeof(enteros); i++)
    {
        suma = suma + enteros[i]; //suma += enteros[i]

    }
    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/5.0);

    
}

int main() {
    char op;

    do{
        printf("1) Capturar enteros \n");
        printf("2) Mostrar cadena n veces \n");
        printf("3) Agregar personajes \n");
        printf("0) Salir \n");
        scanf("%c", &op);

        switch(op)
        {
            case '1':
                 capturar_enteros();
                break;

            case '2':
                break;
            case '3':

                break;
            default:
                break;


        }

    }while (op != '0');

    return 0;
}