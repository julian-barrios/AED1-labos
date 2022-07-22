#include "vectores.h"

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}


//Ejercicio
bool divide(vector<int> v, int a){
    int divide=0;
	for (int i=0; i<v.size() && divide==0;i++){
	    divide=v[i]%a;
	}
	return divide == 0;
}

//Ejercicio
int mayor(vector<int> v){
    int i=0;
	for (int j=1;j<v.size();j++){
	    if(v[i]>=v[j]){
	    } else {
	        i=j;
	    }
	}
	return v[i];
}

//Ejercicio
vector<int> reverso(vector<int> v){
	vector<int>w;
	for(int i=v.size()-1;i>=0;i--){
	    w.push_back(v[i]);
	}
	return w;
}

//Ejercicio
vector<int> rotar(vector<int> v, int k){
    vector<int> w; int j=-k;
	for(int i=0; i<v.size();i++){
	    if(i+k<v.size()){
	        w.push_back(v[i+k]);
	    } else {
	        w.push_back(v[j+k]);
	        j++;
	    }
	}
	return w;
}

bool estaOrdenado(vector<int>v){
    bool res=true;
    if(v[0]<v[1]){
        for (int i=1; i<v.size()-1 && res;i++){
            res = v[i]<=v[i+1];
        }
    } else {
        for (int i=1; i<v.size()-1 && res;i++){
            res = v[i]>=v[i+1];
        }
    }
    return res;
}



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

//Ejercicio
vector<int> factoresPrimos(int n){
    vector<int> w;
	for (int i=2; i<=n; i++){
	    if(esPrimo(i) && n%i==0){
	        w.push_back(i);
	    }
	}
	return w;
}

//Ejercicio
void mostrarVector(vector<int> v){
    cout << "[";
	for(int i=0; i<v.size();i++){
	    if (i!=v.size()-1){
	        cout << v[i] << ", ";
	    } else {
	        cout << v[i];
	    }
	}
	cout << "]";
}
