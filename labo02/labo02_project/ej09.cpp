#include <iostream>
using namespace std;

void division (int &dividendo, int &divisor){
    int cociente=0; int resto=dividendo;
    while(resto>=divisor){
        resto = resto -divisor;
        cociente = cociente + 1;
    }
    dividendo=cociente;
    divisor=resto;
}


int main(){
    int dividendo=0;int divisor=0;
    cout << "Dividendo: ";
    cin >> dividendo;
    cout << "Divisor: ";
    cin >> divisor;
    division(dividendo,divisor);
    cout << "Cociente: " << dividendo << ", Resto: " << divisor;
    return 0;
}
