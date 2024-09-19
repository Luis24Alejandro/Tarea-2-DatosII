#include "Headers/BubbleSort.h"
#include <algorithm>

// Implementacion de la funcion bubbleSort
void bubbleSort(int arr[], int large) {
    for (int i = 0; i < large - 1; i++) {
        // Va comparando dos numeros seguidos en un arreglo
        for (int j = 0; j < large - i - 1; j++) {
            // Se intercambian si el elemento es mayor que el siguiente
            if (arr[j] > arr[j + 1]) {
                // swap los intercambia de posicion en el array
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}