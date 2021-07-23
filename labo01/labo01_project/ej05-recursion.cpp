#include<iostream>

int fibonacci(int n){
    if (n==1){
        return 0;
    } if (n==2) {
        return 1;
    } else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}


int main(){
    int n=0;
    std::cout << "Ingrese un número: " << std::endl;
    std::cin >> n;
    if (n<1){
        std::cout << "El número ingresado debe ser natural.";
    } else {
        int fibo = fibonacci(n);
        std::cout << "El " << n << "-ésimo número de fibonacci es " << fibo << std::endl;
    }
    return 0;
}

