#include <iostream>
#include <math.h>
using namespace std;

int binarioADecimal(int n){
    int decimal = 0;
    for (int i=0; n>0; i++){
        decimal = decimal+pow(2,i)*(n%10);
        n = n/10;
    }
    return decimal;
}

int main(){
    int n=0;
    cout << "Ingrese un número binario"<< endl;
    cin >> n;
    int decimal = binarioADecimal(n);
    cout << "El número " << n << " en decimal es " << decimal << endl;
    return 0;
}
