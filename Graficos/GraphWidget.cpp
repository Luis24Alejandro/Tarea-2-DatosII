#include "GraphWidget.h"
#include <cmath> // Para usar exp()

GraphWidget::GraphWidget() {
    signal_draw().connect(sigc::mem_fun(*this, &GraphWidget::on_draw));
}

GraphWidget::~GraphWidget() {}

void GraphWidget::set_function(int function_type) {
    m_function_type = function_type; // Actualiza el tipo de función
    queue_draw(); // Solicita redibujar el widget
}


bool GraphWidget::on_draw(const Cairo::RefPtr<Cairo::Context>& cr) {
    do_drawing(cr);
    return true;
}

void GraphWidget::do_drawing(const Cairo::RefPtr<Cairo::Context>& cr) {
    // Limpia el área de dibujo
    cr->set_source_rgb(1, 1, 1); // Color blanco
    cr->paint();

    // Dibuja ejes
    cr->set_source_rgb(0, 0, 0); // Color negro
    cr->move_to(10, 150); // Eje X
    cr->line_to(390, 150);
    cr->stroke();

    cr->move_to(200, 10); // Eje Y
    cr->line_to(200, 290);
    cr->stroke();

    // Dibuja la función lineal: y = mx + b (ej. y = 0.5x + 50)
    if (m_function_type == 0) {
        cr->set_source_rgb(1, 0, 0); // Color rojo
        cr->set_line_width(2);
        for (int x = 0; x <= 400; x++) {
            double y = 0.5 * x + 50; // Cambia esto para ajustar la función
            if (x == 0)
                cr->move_to(x + 10, 150 - y);
            else
                cr->line_to(x + 10, 150 - y);
        }
        cr->stroke();
    } else if (m_function_type == 1) {
        // Dibuja la función exponencial: y = a * exp(b * x) (ej. y = 10 * exp(0.01 * x))
        cr->set_source_rgb(0, 0, 1); // Color azul
        cr->set_line_width(2);
        for (int x = 0; x <= 200; x++) {
            double y = 10 * exp(0.01 * x); // Cambia esto para ajustar la función
            if (x == 0)
                cr->move_to(x + 10, 150 - y);
            else
                cr->line_to(x + 10, 150 - y);
        }
        cr->stroke();
    }
}