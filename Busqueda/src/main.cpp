#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

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

vector<int> construir_vector(int n, string disposicion){

    vector<int> res;
    srand (time(NULL));
    int numero;

    if (disposicion == "asc"){
        for(int i=0; i < n; i++){
            res.push_back(i);
        }
    }else if(disposicion == "desc"){
        for(int i=n-1; i >= 0; i--){
            res.push_back(i);
        }

    }else if(disposicion == "azar"){
        for(int i=0; i < n; i++){
            numero = rand() % 100;
            res.push_back(numero);
        }
    }else if(disposicion == "iguales"){
        numero = rand() % 100;
        for(int i=0; i < n; i++){
            res.push_back(numero);
        }
    }else{
        cout << "Dispocisión no válida" << endl;
    }

    return res;
}

int busqueda_binaria(vector <int> v, int x){
    if(v.size() == 0){
        return -1;
    } else if (v[v.size() - 1] == x){
        return v.size() - 1;
    } else {
        int i = 0;
        int j = v.size() - 1;
        while(j > i + 1){
            int k = (i + j)/2;
            if(v[k] <= x){
                i = k;
            } else {
                j = k;
            }
        }
        if(v[i] == x){
            return i;
        } else {
            return -1;
        }
    } 
}


int jump_serch(vector <int> v, int x){
    if(v.size() == 0){
        return -1;
    } else {
        int m = sqrt (v.size());
        int i = 0;
        int k = -1;
        while(i < v.size() && v[i] < x){
            i = i + m;
            k++;
        }
        while (i > k*m && v[i] != x){
            i--;
        }
        if(v[i] == x){
            return i;
        } else {
            return -1;
        }    
    }
}

/* 

n = 100, x = 28 -> Búsqueda binaria = 0,000003 
                   Jump Serch = 0,000002
              
   
n = 1000, x = 321 -> Búsqueda binaria = 0,000004
                     Jump Serch = 0,000003
              

n = 10000, x = 7821 -> Búsqueda binaria = 0,000006 
                       Jump Serch = 0,000005
              
              
n = 100000, x = 10 -> Búsqueda binaria = 0.000377
                      Jump Serch = 0.000226
              

*/


int indice_pico(vector <int> v){
    int desde = 0;
    int hasta = v.size() - 1;
    int medio = (desde + hasta)/2;
    while((medio != 0 && v[medio] < v[medio - 1]) || (medio != v.size() - 1 && v[medio] < v[medio + 1] )){
        if (v[medio] < v[medio - 1]){
            hasta = medio - 1;
        } else {
            desde = medio + 1;
        }
        medio = (desde + hasta)/2;
    }
    return medio;
}


int punto_fijo(vector <int> v){
    if(v.size() == 0){
        return -1;
    } else if(v[0] == 0) {
        return 0;
    } else {
        int i = 0;
        int j = v.size() - 1;
        while(j > i + 1){
            int k = (i + j)/2;
            if(v[k] >= k){
                j = k;
            } else {
                i = k;
            }
        }
        if(v[j] == j){
            return j;
        } else {
            return -1;
        }
    }
}




int menorMasGrande(vector <int> v, int x){
    if (x > v[v.size() - 1]){
        return -1;
    } else if (x <= v[1]) {
        return 0;
    } else {
        int desde = 0;
        int hasta = v.size() - 1;
        while(hasta > desde + 1){
            int medio = (desde + hasta)/2;
            if(v[medio] > x){
                hasta = medio;
            } else {
                desde = medio;
            }
        }
        return hasta;
    }
}

int main(){
    vector <int> v = {-3, -2, 5, 9, 13, 15, 16, 17, 23, 15, 30, 40};
    cout << busqueda_binaria(v, -2);
}

























