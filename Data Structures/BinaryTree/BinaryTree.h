#ifndef BINARYTREE_H
#define BINARYTREE_H


// Definir el nodo
struct treeNode {
    // Valor del nodo
    int data;
    // Puntero al hijo de la izquierda
    treeNode* left;
    // Puntero al hijo de la derecha
    treeNode* right;

    // Constructor del nodo
    treeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Definir la clase del BinaryTree
class BinaryTree {
public:
    // Constructor
    BinaryTree();
    // Destructor
    ~BinaryTree();

    // Metodo para agregar un nodo
    void insert(int value);
    // Metodo para recorrer en orden
    void inorder();


private:
    // Puntero a la raiz del arbol
    treeNode* root;

    // Metodo  auxiliar para liberar memoria
    void destroy(treeNode* node);
    // Metodo auxiliar para insertar
    void insert(treeNode*& node, int value);
    // Metodo auxiliar para recorrer en orden
    void inorder(treeNode* node);


};



#endif //BINARYTREE_H
