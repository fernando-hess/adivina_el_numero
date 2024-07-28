#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numeroSecreto, intento, intentos = 0;

    // Inicializar la semilla de generaci�n de n�meros aleatorios
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;  // N�mero aleatorio entre 1 y 100

    printf("�Bienvenido al juego de Adivina el N�mero!\n");
    printf("He escogido un n�mero entre 1 y 100.\n");
    printf("�Puedes adivinar cu�l es?\n");

    do {
        printf("Introduce tu intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < numeroSecreto) {
            printf("El n�mero secreto es mayor.\n");
        } else if (intento > numeroSecreto) {
            printf("El n�mero secreto es menor.\n");
        } else {
            printf("�Felicidades! El n�mero secreto es %d. Adivinaste el n�mero en %d intentos.\n", numeroSecreto, intentos);
        }
    } while (intento != numeroSecreto);

    return 0;
}

