#include <iostream>



bool esPrimo (int n){
    if (n==1){
        return false;
    } else {
        int i=2;
        int m=1;
        while (i<n && m!=0){
            m = n % i;
            i++;
        }
        return (m!=0);
    }
}


int main(){
    std::cout << "El número ingresado " << (esPrimo (100) ? "es primo." : "no es primo.") << std::endl;
    return 0;
}
