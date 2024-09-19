#include <iostream>
#include "Sorting Algorithms/Headers/BubbleSort.h"
#include "Sorting Algorithms/Headers/SelectionSort.h"
#include "Sorting Algorithms/Headers/MergeSort.h"


#include "Data Structures/LinkedList/LinkedList.h"
#include "Data Structures/BinaryTree/BinaryTree.h"


#include <gtkmm.h>
#include "Graficos/GraphWidget.h"


#include "Time.h"



int main(int argc, char *argv[]) {

    // Inicializa la aplicación GTK
    auto app = Gtk::Application::create(argc, argv, "app.de.graficos");

    // Crea la ventana principal
    Gtk::Window window;
    window.set_title("Graficos");
    window.set_default_size(500, 500);
    window.set_size_request(450, 440);

    // Crea un VBox para organizar los widgets
    Gtk::Box vbox(Gtk::ORIENTATION_VERTICAL);
    window.add(vbox);

    // Crea un ComboBox para seleccionar la función
    Gtk::ComboBoxText function_selector;
    function_selector.append("Grafica de BubbleSort");
    function_selector.append("Grafica de MergeSort");
    function_selector.append("Grafica de SelectionSort");
    function_selector.append("Grafica de BinaryTree");
    function_selector.append("Grafica de LinkedList");


    // Agrega más opciones aquí
    function_selector.set_active(0); // Selecciona la primera opción por defecto
    vbox.pack_start(function_selector, Gtk::PACK_SHRINK);


    // Crea el widget de gráfico
    GraphWidget graph_widget;
    vbox.pack_start(graph_widget);

    // Conecta la señal de cambio de selección
    function_selector.signal_changed().connect([&]() {
        int selected_index = function_selector.get_active_row_number();
        graph_widget.set_function(selected_index); // Cambia la función a graficar
    });




    //------------ Bubble Sort ------------
    // Crea el array que se va a ordenar
    int arrayB[] = {64, 34, 25, 12, 22, 11, 90};
    // Determina el tamaño del array
    int lBS = sizeof(arrayB) / sizeof(arrayB[0]);

    // Llama a bubbleSort para ordenar arrayB
    bubbleSort(arrayB, lBS);

    // Imprime arrayB
    std::cout << "ArrayB ordenado: \n";
    for (int i = 0; i < lBS; i++)
        // Imprime los elementos de arrayB
        std::cout << arrayB[i] << " ";
    // Mete un salto de linea al final
    std::cout << std::endl;
    //------------ Bubble Sort ------------



    //------------ Selection Sort ------------
    // Crea el array que se va a ordenar
    int arrayS[] = {64, 25, 12, 22, 11, 17, 76};
    // Determina el tamaño del arry
    int lSS = sizeof(arrayS) / sizeof(arrayS[0]);

    // Llama a selectionSort para ordenar el arrayS
    selectionSort(arrayS, lSS);

    // Imprime el arrayS
    std::cout << "ArrayS ordenado: \n";
    for (int i = 0; i < lSS; i++)
        // Imprime los elementos de arrayS
        std::cout << arrayS[i] << " ";
    // Mete un salto de linea al final
    std::cout << std::endl;
    //------------ Selection Sort ------------


    //------------ Merge Sort ------------
    // Crea el array que se va a ordenar
    int arrayM[] = {38, 27, 43, 3, 9, 82, 10};
    // Determina el tamaño que va a tener el array
    int lMs = sizeof(arrayM) / sizeof(arrayM[0]);

    // Llama a mergeSort para ordenar el arrayM
    mergeSort(arrayM, 0, lMs - 1);

    // Imprime el arrayM
    std::cout << "ArrayM ordenado: \n";
    for (int i = 0; i < lMs; i++)
        // Imprime los elementos del arrayM
        std::cout << arrayM[i] << " ";
    // Mete un salto de linea al final
    std::cout << std::endl;
    //------------ Merge Sort ------------


    //------------ Linked List ------------
    //Crea una nueva lista enlazada
    LinkedList listaPrueba;

    // Agrega nodos a la lista
    listaPrueba.append(10);
    listaPrueba.append(20);
    listaPrueba.append(30);
    listaPrueba.append(40);

    // Obtener valores en x posicion
    try {
        std::cout <<"Valor del indice 0: " <<listaPrueba.get(0) << std::endl;
        std::cout <<"Valor del indice 3: " <<listaPrueba.get(3) << std::endl;
        std::cout <<"Valor del indice 1: " <<listaPrueba.get(1) << std::endl;
        std::cout <<"Valor del indice 2: " <<listaPrueba.get(2) << std::endl;
        std::cout <<"Valor del indice 4: " <<listaPrueba.get(4) << std::endl;
        std::cout << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
    //------------ Linked List ------------

    //------------ Binary Tree ------------

    std::cout << std::endl;
    std::cout << "Binary Tree: ";

    BinaryTree biTree; // Crea un nuevo árbol binario

    // Insertar nodos en el árbol
    biTree.insert(5);
    biTree.insert(3);
    biTree.insert(8);
    biTree.insert(1);
    biTree.insert(4);
    biTree.insert(7);
    biTree.insert(9);

    // Mostrar los recorridos
    std::cout << "Reccorrido: ";
    biTree.inorder(); // Muestra en orden

    //------------ Binary Tree ------------

    // Muestra el gráfico
    graph_widget.show();

    vbox.show_all();

//Ejecuta GTK
return app->run(window);

}