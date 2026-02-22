#include <stdio.h>
#include <math.h>

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();

int main(void) {
    ejercicio8();
    return 0;
}

void ejercicio1() {
    // Realizar un programa que imprima en pantalla los números del 1 al 30.
    for (int i = 0; i < 30; i++) {
        printf("%d ", i+1);
    }
    printf("\n");
}

void ejercicio2() {
    int multCinco = 0;
    int multTres = 0;
    int multTresYCinco = 0;
    int num = 0;

    for (int i = 0; i < 10; i++) {
        printf("(%d/10)Ingrese un entero: ", i+1);
        scanf("%d", &num);

        int esMultiplo3 = (num % 3 == 0);
        int esMultiplo5 = (num % 5 == 0);

        if (esMultiplo3 && esMultiplo5) {
            multTresYCinco += 1;
        } else if (esMultiplo3) {
            multTres += 1;
        } else if (esMultiplo5){
            multCinco += 1;
        }
    }

    printf("\nMultiplos de 3 ingresados: %d\n", multTres);
    printf("Multiplos de 5 ingresados: %d\n", multCinco);
    printf("Multiplos de 3 Y 5 ingresados: %d\n", multTresYCinco);
}

void ejercicio3() {
    // Leer 10 números, obtener su cubo, y mostrar los resultados por pantalla.
    int num = 0;

    for (int i = 0; i < 10; i++) {
        printf("(%d/10)Ingrese un entero: ", i+1);
        scanf("%d", &num);

        printf("El cubo de %d es: %.0f\n", num, pow(num, 3));
    }
}

void ejercicio4() {
    int num = 0;

    for (int i = 0; i < 10; i++) {
        printf("(%d/10)Ingrese un entero: ", i+1);
        scanf("%d", &num);

        if (num > 0) {
            printf("%d\n", num);
        }
    }
}

void ejercicio5() {
    // Desarrollar un algoritmo que permita la carga de 7 notas por teclado y nos muestre
    // posteriormente su promedio.

    float nota = 0;
    float acumuladorNotas = 0;
    float promedio = 0;

    for (int i = 0; i < 7; i++) {
        printf("(%d/7)Ingrese una nota del 1 al 10: ", i+1);
        scanf("%f", &nota);

        acumuladorNotas += nota;
    }

    promedio = acumuladorNotas / 7;
    printf("\nPromedio: %.2f\n", promedio);
}

void ejercicio6() {
    // Escribir un programa que lea 8 notas de alumnos y nos informe
    // cuántos aprobaron (notas mayores o iguales a 6)
    // y cuántos desaprobaron (notas menores a 6).

    float nota = 0;
    int aprobaron = 0;
    int desaprobaron = 0;

    for (int i = 0; i < 8; i++) {
        printf("(%d/8)Ingrese una nota del 1 al 10: ", i+1);
        scanf("%f", &nota);

        if (nota >= 6) {
            aprobaron += 1;
        } else {
            desaprobaron += 1;
        }
    }

    printf("\nCantidad de alumnos que aprobaron: %d\n", aprobaron);
    printf("Cantidad de alumnos que desaprobaron: %d\n", desaprobaron);
}

void ejercicio7() {
    // Leer 15 números negativos, convertirlos a positivos, e imprimir dichos números.

    int numero = 0;
    int numeroPositivo = 0;

    for (int i = 0; i < 15; i++) {
        printf("(%d/15) Ingrese un numero negativo: ", i+1);
        scanf("%d", &numero);

        numeroPositivo = numero * -1;

        printf("Numero convertido a positivo: %d\n", numeroPositivo);
    }
}

void ejercicio8() {
    // Calcular e imprimir la tabla de multiplicar de un número a elección del usuario.
    // Imprimir el multiplicando (numero elegido), el multiplicador (x1, x2, etc)
    // y el producto (resultado).

    int numero = 0;
    int resultado = 0;

    printf("Ingrese un numero para ver su tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("\nTabla de multiplicar del %d:\n\n", numero);

    for (int i = 0; i < 10; i++) {
        resultado = numero * (i + 1);
        printf("%2d x %2d = %3d\n", numero, (i + 1), resultado);
    }
}
