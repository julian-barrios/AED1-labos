#include<iostream>



int sumaImparesMenores (int n){
    int suma=0;
    for (int m=1; m<n; m=m+2){
        suma=suma+m;
    }
    return suma;
}


int main(){
    int n=0;
    std::cout << "Ingrese un número: " << std::endl;
    std::cin >> n;
    int suma=sumaImparesMenores(n);
    std::cout << "La suma de los números impares menores que " << n << " es " << suma << std::endl;
    return 0;
}
