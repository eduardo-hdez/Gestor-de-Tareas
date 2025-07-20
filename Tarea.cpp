#include "Tarea.h"
#include <iostream>
using namespace std;

Tarea::Tarea() : prioridad(0) {}

Tarea::Tarea(const string& desc, int prio, const string& fecha) : descripcion(desc), prioridad(prio), fechaVencimiento(fecha) {}

string Tarea::getDescripcion() const {
    return descripcion;
}

int Tarea::getPrioridad() const {
    return prioridad;
}

string Tarea::getFechaVencimiento() const {
  return fechaVencimiento;
}

void Tarea::setDescripcion(const string& desc) {
    descripcion = desc;
}

void Tarea::setPrioridad(int prio) {
    prioridad = prio;
}

void Tarea::setFechaVencimiento(const string& fecha) {
    fechaVencimiento = fecha;
}

void Tarea::marcarPrioridad() {
    prioridad = 1;
}