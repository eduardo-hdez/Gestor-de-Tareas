#ifndef GESTORTAREAS_H
#define GESTORTAREAS_H

#include "Tarea.h"
#include <iostream>
using namespace std;

class GestorTareas {
private:
  static const int MAX_TAREAS = 100; // Tamaño máximo de la lista
  Tarea tareas[MAX_TAREAS];
  int numTareas;

public:
  GestorTareas(); 

  void agregarTarea(const Tarea& tarea);
  void eliminarTarea(int indice);
  void mostrarTareas() const;
};

#endif