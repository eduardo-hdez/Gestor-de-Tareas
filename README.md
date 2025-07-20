# Gestor de Tareas

Este proyecto es una aplicación de gestión de tareas simple basada en consola, implementada en **C++**. Permite a los usuarios agregar, visualizar y eliminar tareas, ayudando a organizar sus pendientes con descripciones, prioridades y fechas de vencimiento.

## Características

- **Agregar Tareas:** Permite añadir nuevas tareas con una descripción, nivel de prioridad y fecha de vencimiento.
- **Mostrar Tareas:** Lista todas las tareas actualmente guardadas, mostrando sus detalles.
- **Eliminar Tareas:** Permite eliminar tareas específicas de la lista por su índice.
- **Prioridad:** Las tareas pueden marcarse como de prioridad para una mejor organización.

## Estructura del Proyecto

El proyecto se compone de las siguientes clases principales:

### `Tarea`
Representa una tarea individual.

- **Variables de estado:**
  - `descripcion` (`string`)
  - `prioridad` (`int`)
  - `fechaVencimiento` (`string`)

- **Métodos:**
  - Constructores
  - Getters y setters para los atributos
  - Método para marcar la tarea como prioritaria

### `GestorTareas`
Administra la colección de tareas.

- **Variables de estado:**
  - Arreglo de objetos `Tarea` (`tareas`)
  - Contador de tareas (`numTareas`)
  - Constante `MAX_TAREAS` para el límite del arreglo

- **Métodos:**
  - `agregarTarea()`
  - `eliminarTarea()`
  - `mostrarTareas()`

### `main.cpp`
Contiene la lógica principal del programa y la interfaz de usuario.

## Créditos

Este proyecto fue desarrollado como parte de la materia de Pensamiento Computacional Orientada a Objetos del Tecnológico de Monterrey.
