#ifndef LINKEDLIST_H
#define LINKEDLIST_H


//Definir el nodo
struct listNode {
    // Valor del nodo
    int data;
    // Puntero al siguiente nodo
    listNode* next;

    listNode(int value) : data(value), next(nullptr) {}
};

// Definde la clase de la lista enlazada
class LinkedList {
public:
    // Constructor de la lista
    LinkedList();
    // Destructor de la lista
    ~LinkedList();

    // Metodo para agregar un nodo
    void append(int value);
    // Metodo para obtener el valor del nodo
    int get(int index);

private:
    // Puntero al primer nodo
    listNode* head;

};



#endif //LINKEDLIST_H
