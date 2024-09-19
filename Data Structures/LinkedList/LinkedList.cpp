#include "LinkedList.h"
#include <iostream>

// Constructor
LinkedList::LinkedList() : head(nullptr) {}

//Destructor
LinkedList::~LinkedList() {
    listNode* current = head;
    while (current != nullptr) {
        // Guarda la referencia del siguiente nodo
        listNode* nextNode = current->next;
        // Elimina el nodo actual
        delete current;
        // Avanza al siguiente nodo
        current = nextNode;
    }
}

// Metodo para agregar un nodo a la lista
void LinkedList::append(int value) {
    // Crea el nuevo nodo
    listNode* newNode = new listNode(value);

    if (head == nullptr) {
        // Si esta vacia la lista, pone este nodo como la cabeza
        head = newNode;
        return;
    }

    listNode* current = head;
    while (current->next != nullptr) {
        // Avanza al final de la lista
        current = current->next;
    }
    // Agrega el nuevo nodo al final de la lista enlazada
    current->next = newNode;
}

// Metodo para tener el valor de un nodo
int LinkedList::get(int index) {
    //  Comienza en la cabeza
    listNode* current = head;
    // Cuentador de nodos por los que ha pasado
    int count = 0;

    while (current != nullptr) {
        if (count == index) {
            return current->data;
        }
        // Suma 1 al contador
        count++;
        // Avanza al nodo que sigue
        current = current->next;
    }

    // Mensaje de que el indice que se dio no esta dentro del rango que tiene la lista
    throw std::out_of_range("Index out of range");
}



