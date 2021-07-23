#include<iostream>

int fibonacci(int n){
    if (n==1){
        return 0;
    } else {
        int i=0; int j=1;int m;
        for(int k=2;k<n;k++){
            m=i+j;
            i=j;
            j=m;
        }
        return m;
    }
}




int main(){
    int n=0;
    std::cout << "Ingrese un número: " << std::endl;
    std::cin >> n;
    int fibo = fibonacci(n);
    if (n<1){
        std::cout << "El número ingresado debe ser natural.";
    } else {
        std::cout << "El " << n << "-ésimo número de fibonacci es " << fibo << std::endl;
    }
    return 0;
}
