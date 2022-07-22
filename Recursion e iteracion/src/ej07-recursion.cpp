#include<iostream>



int sumaDivisoresHasta(int n, int m){
    if (m==1){
        return 1;
    } if (n%m==0){
        return m+sumaDivisoresHasta(n,m-1);
    } else {
        return sumaDivisoresHasta(n,m-1);
    }
}


int sumaDivisores(int n){
    return sumaDivisoresHasta(n,n);
}


int main(){
    int n=0;
    std::cout << "Ingrese un número: " << std::endl;
    std::cin >> n;
    int suma=sumaDivisores(n);
    std::cout << "La suma de los divisores de " << n << " es " << suma << std::endl;
    return 0;
}

