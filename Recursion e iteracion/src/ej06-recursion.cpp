#include<iostream>



int sumaImparesMenores (int n){
    if (n==1){
        return 0;
    } if (n%2==1){
        return n-2+sumaImparesMenores(n-2);
    } else {
        return sumaImparesMenores(n-1);
    }
}


int main(){
    int n=0;
    std::cout << "Ingrese un número: " << std::endl;
    std::cin >> n;
    int suma=sumaImparesMenores(n);
    std::cout << "La suma de los números impares menores que " << n << " es " << suma << std::endl;
    return 0;
}





