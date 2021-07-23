#include<iostream>


int sumaNotas(int n){
    float nota=0; float suma=0;float promedio=0;
    for (int i=0; i<n;i++){
        std::cout << "Ingrese una nota: ";
        std::cin >> nota;
        suma = suma+nota;
    }
    promedio = suma/n;
    std::cout << "La suma de las notas es " << suma << " y el promedio " << promedio << std::endl;
}


int main() {
    int n = 0;
    std::cout << "Ingrese el número de notas que quiere sumar ";
    std::cin >> n;
    int notas = sumaNotas(n);
    std::cout << notas << std::endl;
    return 0;
}
