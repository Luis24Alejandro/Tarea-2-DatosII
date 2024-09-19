#include "BinaryTree.h"
#include <iostream>

// Constructor del arbol
BinaryTree::BinaryTree() : root(nullptr) {}

// Destructor para liberar memoria
BinaryTree::~BinaryTree() {
    // Elimina la raiz entonces libera los nodos
    destroy(root);
}

// Metodo auxiliar para liberar memoria
void BinaryTree::destroy(treeNode* node) {
    if (node != nullptr) {
        // Libera el subarbol izquierdo
        destroy(node->left);
        // Libera el subarbol derecho
        destroy(node->right);
        // Libera el nodo actual
        delete node;
    }
}

// Metodo para insertar un nodo
void BinaryTree::insert(int value) {
    // Llama al metodo auxiliar
    insert(root, value);
}

// Metodo auxiliar para insertar un nodo
void BinaryTree::insert(treeNode*& node, int value) {
    if (node == nullptr) {
        // Crea un nuevo nodo
        node = new treeNode(value);
    } else if (value < node->data) {
        // Inserta en el subarbol izquierdo
        insert(node->left, value);
    } else {
        // Inserta en el subarbol derecho
        insert(node->right, value);
    }
}

// Metodo para recorrido en orden
void BinaryTree::inorder() {
    // Llama al metodo auxiliar
    inorder(root);
    // Nueva linea despues del recorrido
    std::cout << std::endl;
}

// Metodo auxiliar para recorrido en orden
void BinaryTree::inorder(treeNode* node) {
    if (node != nullptr) {
        // Recorre el subarbol izquierdo
        inorder(node->left);
        // Visita el nodo
        std::cout << node->data << " ";
        // Recorre el subárbol derecho
        inorder(node->right);
    }
}



