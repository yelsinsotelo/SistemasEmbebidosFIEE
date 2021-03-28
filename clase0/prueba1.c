/*  Librarias  */
#include <stdio.h>
#include <stdlib.h>
/*   MACROS  */

#define SALUDO "Bienvenido al Curso de Sistemas Embebidos \n"
#define COMPLEMENTO "FIEE CAS UNI"
/* Variables globales */

/* Declaraciones de funciones */

/* Funcion Principal */

int main(){
    system("type nul > Saludo.txt");
    FILE *fp;
    fp = fopen("Saludo.txt","w+");
    fprintf(fp,SALUDO);
    fputs(COMPLEMENTO, fp);
    fclose(fp);
    system("code Saludo.txt");
    return 0;
}