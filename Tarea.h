#ifndef TAREA_H
#define TAREA_H

#include <iostream>
using namespace std;

class Tarea {
private:
    string descripcion;
    int prioridad;
    string fechaVencimiento;

public:
    Tarea();  // Constructor por defalut
    Tarea(const string& desc, int prio, const string& fecha);

  // Getters
  string getDescripcion() const;
  int getPrioridad() const;
  string getFechaVencimiento() const;

  // Setters
  void setDescripcion(const string& desc);
  void setPrioridad(int prio);
  void setFechaVencimiento(const string& fecha);
  void marcarPrioridad();
};

#endif