#include "ejercicios.h"

using namespace std;

int main() {
    vector<int> v (100000,9);
    
    double t0 = clock(); 
    int duplicados = hayDuplicados(v);
    double t1 = clock();
    
    double tiempo = (double(t1 - t0)/CLOCKS_PER_SEC);
    
    double t2 = clock(); 
    int binaria = busqueda_binaria(v,9);
    double t3 = clock();
    
    double tiempo1 = (double(t3 - t2)/CLOCKS_PER_SEC);
    
    cout << "O(n^2) -> " << tiempo << "  " << "O(log(n)) -> " << tiempo1;

    return 0;
}

