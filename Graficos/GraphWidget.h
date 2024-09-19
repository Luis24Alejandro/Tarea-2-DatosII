#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <gtkmm/drawingarea.h>

// Clase para manejar el area de dibujo del grafico
class GraphWidget : public Gtk::DrawingArea {
public:
    // Constructor
    GraphWidget();
    // Destructor
    virtual ~GraphWidget();

    // Métodos para cambiar la función
    void set_function(int function_type); // 0: lineal, 1: exponencial, etc.


protected:
    // Metodo llamado al dibujar
    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;

private:
    // Metodo que contiene la logica de dibujo
    void do_drawing(const Cairo::RefPtr<Cairo::Context>& cr);
    int m_function_type; // Almacena el tipo de funcion actual
};

#endif // GRAPHWIDGET_H





