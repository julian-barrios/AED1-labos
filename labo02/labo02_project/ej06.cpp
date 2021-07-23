#include<iostream>
using namespace std;

void triplicarPorValor(int cuenta){
     cuenta = 3*cuenta;
}

void triplicarPorReferencia(int &cuenta){
    cuenta = 3*cuenta;
}

int main(){
    int cuenta=3;
    triplicarPorValor(cuenta);
    cout << "Triplica por valor: " << cuenta << endl;
    triplicarPorReferencia(cuenta);
    cout << "Triplica por referencia: " << cuenta << endl;
    return 0;
}
