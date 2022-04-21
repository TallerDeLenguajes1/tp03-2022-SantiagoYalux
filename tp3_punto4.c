//Modifique el ejercicio nro 2 para que, en lugar de ingresar un número fijo de nombres, el usuario pueda indicar previamente la cantidad de nombres que ingresará a continuación.
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
 

int main(){
    int cantidadNombres = 0;

    printf("Porfavor ingresa el numero de nombres \r\n");
    do
    {
        printf("Recuerda, debe ser mayor a '0' \n");
        scanf("%d", &cantidadNombres);

    }while(cantidadNombres < 0);
    
    while(getchar()!='\n'); 
    char *Nombres[cantidadNombres];

    for (int i = 0; i < cantidadNombres; i++)
    {
        Nombres[i]=(char *) malloc(100*sizeof(char));
    }
    for (int i = 0; i < cantidadNombres; i++)
    {
        printf("Escribe el nombre en la posicion %d", i);
        gets(Nombres[i]);
        printf("\r\n");
    }


    for (int i = 0; i < cantidadNombres; i++)
    {
        for (int j = 0; Nombres[i][j]!='\0'; j++)
        {
            printf("-%c",Nombres[i][j]);
        }
        printf("\r\n");
    }
    for (int t = 0; t < t; t++)
    {
        free(Nombres[t]);
    }
       
}