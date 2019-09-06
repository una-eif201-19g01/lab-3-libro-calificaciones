/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
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

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

LibroCalificaciones::LibroCalificaciones() {}

LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int arregloCalificaciones[][EXAMENES]) {
    setNombreCurso(nombreCurso);

    // copiar notas del arreglo
    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
        }
    }
}

int LibroCalificaciones::obtenerNotaMinima() {
    int notaMinima = 100;

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            if (calificaciones[estudiante][examen] < notaMinima) {
                notaMinima = calificaciones[estudiante][examen];
            }
        }
    }

    return notaMinima;
}

int LibroCalificaciones::obtenerNotaMaxima() {
    int notaMaxima = 0;

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
        for (int examen = 0; examen < EXAMENES; ++examen) {
            if (calificaciones[estudiante][examen] > notaMaxima) {
                notaMaxima = calificaciones[estudiante][examen];
            }
        }
    }

    return notaMaxima;
}

double LibroCalificaciones::obtenerPromedio(const int listaNotas[], const int notas) {
    int total = 0;
    double promedio;

    for (int nota = 0; nota < notas; ++nota) {
        total += listaNotas[nota];
    }

    promedio = static_cast<double>(total) / static_cast<double>(notas) ;

    return promedio;
}

std::string LibroCalificaciones::obtenerReporteNotas() {
    std::string reporte;

    reporte = "\nLas siguientes son las notas del curso [" + getNombreCurso() + "]: \n\t\t\t";

    for (int examen = 0; examen < EXAMENES; ++examen) {
        reporte += "\tExamen " + std::to_string(examen + 1);
    }

    reporte += "\tPromedio";

    for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {

        reporte += "\nEstudiante [" + std::to_string(estudiante + 1) + "]\t";

        for (int examen = 0; examen < EXAMENES; ++examen) {
            reporte += std::to_string(calificaciones[estudiante][examen]) + "\t\t\t";
        }

        double promedio = obtenerPromedio(calificaciones[estudiante], EXAMENES);
        reporte += std::to_string(promedio);
    }

    return reporte;
}

std::string LibroCalificaciones::obtenerReporteNotasMaxMin() {
    std::string reporte;

    reporte = "\nLa nota mínima es: [" + std::to_string(obtenerNotaMinima()) + "]\n";
    reporte += "La nota máxima es: [" + std::to_string(obtenerNotaMaxima()) + "]\n";

    return reporte;
}

const std::string &LibroCalificaciones::getNombreCurso() const {
    return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(const std::string &nombreCurso) {
    LibroCalificaciones::nombreCurso = nombreCurso;
}


