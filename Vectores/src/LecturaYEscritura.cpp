#include "LecturaYEscritura.h"


vector<int> leerVector(string nombreArchivo){
    ifstream archivoIn;
    archivoIn.open(nombreArchivo,ios::in);
    vector<int>v;
    int x;
    while(not archivoIn.eof()){
        archivoIn >> x;
        v.push_back(x);
    }
    archivoIn.close();
    return v;
}

void guardarVector(vector<int>v, string nombreArchivo){
    ofstream fout;
    fout.open("archivo.in");
    for (int i=0;i<v.size();i++){
        fout << v[i] << ", ";
    }
    fout << endl;
    fout.close();
}

void cantApariciones(string nombreArchivo){
    
}