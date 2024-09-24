#include <stdio.h>
#include <stdlib.h> //Importar random

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar arr[j] por arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[30];  // Arreglo de 30 posiciones
    int n = sizeof(arr) / sizeof(arr[0]);

    // Llenar el arreglo con números aleatorios entre 0 y 99
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    printf("Arreglo original: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    // Ordenar el arreglo
    bubbleSort(arr, n);
    
    printf("Arreglo ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}
