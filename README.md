# Laboratorio 3 -Libro de Calificaciones-

El siguiente ejercicio es para desarrollar los conocimientos en:

- Clase y Objetos
- Casting de objetos
- Archivos de implementación y encabezado
- UML
- Condicionales
- Ciclos
- Manejo de Strings
- CONSTANTES
- Arreglos
- Matrices

## Diagrama UML

![](https://www.lucidchart.com/publicSegments/view/9a539482-5aad-483c-887c-0a91cad3f855/image.png)

## Objetivo

Desarrollar una aplicación que muestre en pantalla las notas de los estudiantes y su promedio.

### Métodos

- `obtenerNotaMinima()` permite obtener la nota mínima de un conjunto de notas
- `obtenerNotaMaxima()` permite obtener la nota máxima de un conjunto de notas
- `obtenerReporteNotas() ` permite obtener un string con el reporte de notas. El string concatenado debe ser similar a este:

```c++
"\nLas siguientes son las notas del curso [Curso Progra I]: \n\t\t\t\tExamen 1\tExamen 2\tExamen 3\tPromedio\nEstudiante [1]\t87\t\t\t96\t\t\t70\t\t\t84.333333\nEstudiante [2]\t68\t\t\t87\t\t\t90\t\t\t81.666667\nEstudiante [3]\t94\t\t\t100\t\t\t90\t\t\t94.666667\nEstudiante [4]\t100\t\t\t81\t\t\t82\t\t\t87.666667\nEstudiante [5]\t83\t\t\t65\t\t\t85\t\t\t77.666667\nEstudiante [6]\t78\t\t\t87\t\t\t65\t\t\t76.666667\nEstudiante [7]\t85\t\t\t75\t\t\t83\t\t\t81.000000\nEstudiante [8]\t91\t\t\t94\t\t\t100\t\t\t95.000000\nEstudiante [9]\t76\t\t\t72\t\t\t84\t\t\t77.333333\nEstudiante [10]\t87\t\t\t93\t\t\t73\t\t\t84.333333"
```

- `obtenerReporteNotasMaxMin()` permite obtener un string con el reporte de las notas máximas y mínimas. El string concatenado debe de ser similar a este:

```c++
"\nLa nota mínima es: [65]\nLa nota máxima es: [100]\n"
```

- El arreglo de entrada de las notas para los estudiantes debe ser:

  - Nombre del curso: `Curso Progra I`
  - Notas de los estudiantes:

  ```c++
  {87, 96, 70}, {68, 87, 90}, {94, 100, 90}, {100, 81, 82}, {83, 65, 85},
  {78, 87, 65}, {85, 75, 83}, {91, 94, 100}, {76, 72, 84},  {87, 93, 73}
  ```

### Ejemplo de resultado en pantalla

```c++
Las siguientes son las notas del curso [Curso Progra I]: 
				Examen 1	Examen 2	Examen 3	Promedio
Estudiante [1]	87			96			70			84.333333
Estudiante [2]	68			87			90			81.666667
Estudiante [3]	94			100			90			94.666667
Estudiante [4]	100			81			82			87.666667
Estudiante [5]	83			65			85			77.666667
Estudiante [6]	78			87			65			76.666667
Estudiante [7]	85			75			83			81.000000
Estudiante [8]	91			94			100			95.000000
Estudiante [9]	76			72			84			77.333333
Estudiante [10]	87			93			73			84.333333

La nota mínima es: [65]
La nota máxima es: [100]
```

------

[Página de Inicio](https://github.com/mikeguzman/EIF201-Progra-I)

