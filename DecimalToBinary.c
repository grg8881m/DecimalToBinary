//1er paso Dividir el valor entre 2 y almacenar el resto, mod, en un array
//2do paso dividir otra vez entre 2 y almacenar el restante
//repetir hasta que nuestro ya no se pueda dividir


#include <stdio.h>
#include <stdlib.h>

/*Voy a tener un array donde voy a tener mis resultados de [12] posiciones para crear
un numero binario de hasta 12 digitos
vamos a tener dos auxiliares el auxiliar n para nuestro numero que vamos a recibir
y el auxiliar i para nuestros arrays que vamos a estar trabajando*/
int binaryNumber[12], n, i;

main ()

{
    system("cls");
    system("color 9f");
    printf("Ingrese un valor decimial\n");
    scanf("%d", &n);
    printf("Usted va a convertir el numero %d a binario\n", n);

    /*vamos a crear un ciclo for para que vaya iterando para que se vaya resolviendo
    nuestro problema*/
    /*vamos a usar n que es el numero porque n es el numero que estamos metiendo n es
    la variable que usamos para almacenar el valor que vamos a convertir
    y mientras n ese valor no halla llegado a cero en el proceso de divisiones entre 2
    púes nostros tenemos que seguir diviendo hasta queno se pueda dividir más*/
    for ( i = 0; n > 0; i++)
    {
        //vector
        binaryNumber[i] = n%2;
        n=n/2;
    }

    printf("El resultado de la conversion es: ");
    //estamos recorriendo del final de nuestro array al principio de nuestro
    //array
    for (i = i-1 ; i >= 0; i--)
    {
        printf("%d", binaryNumber[i]);
    }
    
    

    return 0;
}