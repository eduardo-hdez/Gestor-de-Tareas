#include "GestorTareas.h"
#include <iostream>
using namespace std;

int main() {
  GestorTareas gestor;

  int opcion = -1;  // Inicializó un valor que no sea 0 ni 1 ni 2 por seguridad
    while (opcion != 0) {
      //Menú
      cout << "¡Bienvenido al Gestor de Tareas!\n";
      cout << "¿Qué deseas realizar?\n";
      cout << endl;
      cout << "\n--- Menú ---\n";
      cout << "1. Agregar Tarea\n";
      cout << "2. Mostrar Tareas\n";
      cout << "3. Eliminar Tarea\n";
      cout << "0. Salir\n";
      cout << endl;
      cout << "Selecciona una opción: ";
      cin >> opcion;
  
      if (opcion == 1) { 
        string desc, fecha;
        int prioridad;

        cout << "Introduce la descripción de la tarea: ";
        getline(cin >> ws, desc);

        cout << "Introduce la fecha a terminar la tarea (DD-MM-AAAA): ";
        cin >> fecha;

        cout << "¿Es una tarea de prioridad? (1: Sí, 0: No): ";
        cin >> prioridad;

        Tarea nuevaTarea(desc, prioridad, fecha);
          if (prioridad == 1) {
            nuevaTarea.marcarPrioridad();
          }

          gestor.agregarTarea(nuevaTarea);
        
      } 
      else if (opcion == 2) {
        cout << "\n--- Tareas ---\n";
        gestor.mostrarTareas();
      } 
      else if (opcion == 3) {
        int indice;
        cout << endl;
        cout << "*Recuerda que las tareas se guardan en una lista, por lo que el índice de la tarea es el número de posición que ocupa en la lista*\n";
        cout << endl;
        cout << "Introduce el índice de la tarea que deseas eliminar: ";
        cin >> indice;

        gestor.eliminarTarea(indice);
      } 
      else if (opcion == 0) {
        cout << "¡Hasta luego!";
      } 
      else {
        cout << "Opción no válida. Inténtalo de nuevo.\n";
      }
    }
  
    return 0;
}