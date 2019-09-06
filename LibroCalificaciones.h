/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>

// Constantes
static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

class LibroCalificaciones {
    std::string nombreCurso;
    int calificaciones[ESTUDIANTES][EXAMENES];

    // Métodos
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(const int[], const int);

public:

    // Constructores
    LibroCalificaciones();
    LibroCalificaciones(const std::string &nombreCurso, int [][EXAMENES]);

    // Métodos
    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();

    // Get y Set
    const std::string &getNombreCurso() const;

    void setNombreCurso(const std::string &nombreCurso);
};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
