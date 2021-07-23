#include<iostream>

int sumaDivisoresImpares(int n){
    int m=1;int suma=0;
    while (m<n){
        if (n%m == 0){
            suma=suma+m;
            m=m+2;
        } else {
            m=m+2;
        }
    }
    return suma;
}


int main(){
    int n=0;
    std::cout << "Ingrese un número: " << std::endl;
    std::cin >> n;
    int suma=sumaDivisoresImpares(n);
    std::cout << "La suma de divisores impares menores que " << n << " es " << sumaDivisoresImpares(n) << std::endl;
    return 0;
}

