#include<iostream>


int sumaNotas(int n){
    float nota=0; float suma=0;float promedio=0;float aprobado=0;float reprobado=0;
    if (n<6){
        std::cout << "El número de notas debe ser mayor a 6 " << std::endl;
    } else {
        for (int i=0; i<n;i++){
            std::cout << "Ingrese una nota: ";
            std::cin >> nota;
            suma=suma+nota;
            if (nota>6){
                aprobado=aprobado+1;
            } else {
                reprobado=reprobado+1;
        }
    }
        promedio = suma/n;
        std::cout << "La suma de las notas es " << suma << " y el promedio " << promedio << std::endl;
        std::cout << "La cantidad de alumnos aprobados es " << aprobado << " y desaprobados " << reprobado << std::endl;
        if (reprobado > (2/3)*n){
            std::cout << "Además, como la cantidad de alumnos desaprobados supera dos tercios del total, se debe aumentar el número de plazas del curso" << std::endl;
        }
    }
    return 0;
}


int main() {
    int n = 0;
    std::cout << "Ingrese el número de notas que quiere sumar ";
    std::cin >> n;
    int notas = sumaNotas(n);
    std::cout << notas << std::endl;
    return 0;
}









