#include "GestorTareas.h"
#include <iostream>
using namespace std;

GestorTareas::GestorTareas() : tareas{}, numTareas(0) {}

void GestorTareas::agregarTarea(const Tarea& tarea) {
  if (numTareas < MAX_TAREAS) {
    tareas[numTareas] = tarea;
    numTareas++;
  } 
  else {
    cout << "No se pueden agregar más tareas. Has llegado a la capacidad máxima." << endl;
  }
}

void GestorTareas::eliminarTarea(int indice) {
  if (indice >= 0 && indice < numTareas) {
    for (int i = indice; i < numTareas - 1; ++i) {
      tareas[i] = tareas[i + 1];
    }
    numTareas--;
  } 
  else {
    cout << "Índice de tarea inválido." << endl;
  }
}

void GestorTareas::mostrarTareas() const {
  for (int i = 0; i < numTareas; ++i) {
    cout << "Tarea " << i + 1 << ":\n";
    cout << "Descripción: " << tareas[i].getDescripcion() << "\n";
    cout << "Prioridad: " << tareas[i].getPrioridad() << "\n";
    cout << "Fecha de vencimiento: " << tareas[i].getFechaVencimiento() << "\n\n";
  }
}