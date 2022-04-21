//se deberan obtener 5 nombres , en los cuales todos se deben obtener de manera dinamica
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
 

int main(){
    char *Nombres[5];

    for (int i = 0; i < 5; i++)
    {
        Nombres[i]=(char *) malloc(100*sizeof(char));//cada elemento tendrá un espacio reserNombresado de 100 caracteres
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Escribe el nombre en la posicion %d", (i+1));
        gets(Nombres[i]);// cada elemento tendra un nombre
        printf("\n");
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; Nombres[i][j]!='\0'; j++)
        {
            printf("-%c",Nombres[i][j]);
        }
        printf("\n");
    }
    for (int t = 0; t < t; t++)
    {
        free(Nombres[t]);
    }
       
}