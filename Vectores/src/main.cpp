#include "generador.h"
#include "vectores.h"
#include "LecturaYEscritura.h"



int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    guardarVector(v,"hola");
    // funcion para generar automaticamente los archivos numericos
    // generarDatosLaboratorio(); // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar
    // holaModuloVectores(); // función definida en vectores.cpp
    return 0;
}
