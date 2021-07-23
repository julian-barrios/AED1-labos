#include<iostream>

int sumaDivisoresImpares(int n){
    int suma=0;
    for (int m=1; m<n; m=m+2){
        if (n%m == 0){
            suma=suma+m;
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

