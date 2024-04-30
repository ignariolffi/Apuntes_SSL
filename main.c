#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void imprimirTablaGrados() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1lf\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

void copia_de_archivos() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

void conteo_de_caracteres() {
    long nc;
    nc = 0;
    while (getchar() != EOF) {
        nc++;
        printf("%ld\n", nc);
    }
}

void conteo_de_lineas() {
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("%d\n", nl);
}

int main() {
    //imprimirTablaGrados();
    //copia_de_archivos();
    //conteo_de_caracteres();
    //conteo_de_lineas();
    //puts("Puta"); imprimir una cadena pero sin formato, mas simple y agrega el \n solo
    //cout y cin son variables que representan un flujo
    //fprintf es una version mas generica del printf solo que este ultimo imprime en consola y fprintf nos permite elegir
    //en que flujo imprimir
    //fputs() version generica de puts
    //los flujos de e/s son variables y pueden ser modficados y alterados
    //DECLRACION DE UN FLUJO FILE* unFlujo;
    //la estrcutura file cuenta con las herramientas necesarias para la manipulacion de flujos de e/s
    //para conectar un flujo de datos podemos usar la funcion FOPEN("origenFlujo";"r"); la r simboliza lectura (reading)
    //

}
