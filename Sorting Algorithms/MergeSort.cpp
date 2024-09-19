#include "Headers/MergeSort.h"

// Función para combinar dos mitades
void merge(int arr[], int left, int mid, int right) {
    // Tamaño del primer subarray
    int n1 = mid - left + 1;
    // Tamaño del segundo subarray
    int n2 = right - mid;

    // Crear los arrays temporales
    int* L = new int[n1];
    int* R = new int[n2];

    // Va copiar datos a los arrays temporales
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];


    // Índice del primer subarreglo
    int i = 0;
    // Índice del segundo subarreglo
    int j = 0;
    // Índice para el arreglo combinado
    int k = left;

    // Combina los arrays temporales de nuevo en array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia los elementos que quedaron de L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia los elementos que quedaron de R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Libera la memoria de los arreglos temporales
    delete[] L;
    delete[] R;
}

// Función principal de Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Encuentra el punto medio del array
        int mid = left + (right - left) / 2;

        // Ordena las mitades por separado
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Combina las mitades ya ordenadas
        merge(arr, left, mid, right);
    }
}
