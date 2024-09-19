#include "Headers/SelectionSort.h"
#include <algorithm>


// Implementacion de la funcion selectionSort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Define una variable en la que se guarda el indice del ultimo numero de la parte ordenada del areglo
        int ultNumOrden = i;
        // Va comparando un numero de la parte ordenada del arreglo con otro de la parte desordenada
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[ultNumOrden]) {
                ultNumOrden = j;
            }
        }
        // Cambia el numero menor con el numero que se estaba comparando
        std::swap(arr[i], arr[ultNumOrden]);
    }
}