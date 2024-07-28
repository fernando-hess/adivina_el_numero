#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numeroSecreto, intento, intentos = 0;

    // Inicializar la semilla de generación de números aleatorios
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;  // Número aleatorio entre 1 y 100

    printf("¡Bienvenido al juego de Adivina el Número!\n");
    printf("He escogido un número entre 1 y 100.\n");
    printf("¿Puedes adivinar cuál es?\n");

    do {
        printf("Introduce tu intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < numeroSecreto) {
            printf("El número secreto es mayor.\n");
        } else if (intento > numeroSecreto) {
            printf("El número secreto es menor.\n");
        } else {
            printf("¡Felicidades! El número secreto es %d. Adivinaste el número en %d intentos.\n", numeroSecreto, intentos);
        }
    } while (intento != numeroSecreto);

    return 0;
}

