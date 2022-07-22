#include "ejercicios.h"

// Ejercicio 1

vector<vector<int> > productoVectorial(vector<int> u, vector<int> v){
	vector<vector<int> > res(u.size(),vector<int>(v.size()));
	int i=0; int j=0;
	while(i<u.size()){
	    while(j<v.size()){
	       res[i][j]=u[i]*v[j];
	       j++;
	    }
	    i++;
	    j=0;
	}
	return res;
}


// Ejercicio 2

void trasponer(vector<vector<int> > &m) {
    int i = 0;
    vector<vector<int> > w = m;
    while(i < w.size()){
        int j = 0;
        while(j < w.size()){
            m[i][j] = w[j][i];
            j++;
        }
        i++;
    }
}

// Ejercicio 3

vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
	vector<vector<int> > res(m1.size(),vector<int>(m2[0].size()));
	int i=0; int j=0; int k=0;int sum=0;
	while(i<m1.size()){
	    while(j<m2[0].size()){
	        while(k<m2.size()){
	            sum=sum+m1[i][k]*m2[k][j];
	            k++;
	        }
	        res[i][j]=sum;
	        sum=0;
            k=0;
	        j++;
	    }
	    j=0;
	    i++;
	}
	return res;
}


// Ejercicio 4


bool enRango(vector<vector<int> > m, int a, int b){
    return 0<=a && a<m.size() && 0<=b && b<m[0].size(); 
}



int cantidadVecinos(vector<vector<int> > m, int i, int j){
    int a=i-1; int b=j-1; int suma=0;
    while(a<=i+1){
        while(b<=j+1){
            if(enRango(m,a,b)){
                suma=suma+1;
            }
            b++;
        }
        a++;
        b=j-1;
    }
    return suma;
}


int sumaVecinos(vector<vector<int> > m, int i, int j){
    int a=i-1; int b=j-1; int suma=0;
    while(a<=i+1){
        while(b<=j+1){
            if(enRango(m,a,b)){
                suma=suma+m[a][b];
            }
            b++;
        }
        a++;
        b=j-1;
    }
    return suma;
}


int promedioVecinos(vector<vector<int> > m, int i, int j){
    return sumaVecinos(m,i,j)/cantidadVecinos(m,i,j);
}




vector<vector<int> > promediar(vector<vector<int> > m){
	vector<vector<int> > res(m.size(),vector<int>(m[0].size()));
	int i=0;int j=0;
	while(i<res.size()){
	    while(j<res[i].size()){
	        res[i][j]=promedioVecinos(m,i,j);
	        j++;
	    }
	    i++;
	    j=0;
	}
	return res;
}



// Ejercicio 5



bool esPico(vector<vector<int> > m, int i, int j){
    int a=i-1; int b=j-1;bool res=true;
    while(a<=i+1){
        while(b<=j+1){
            if ((a!=i || b!=j) && enRango(m,a,b)){
                if(m[i][j]>m[a][b]){
                    res=res && true;
                } else {
                    res=false;
                }
            }
            b++;
        }
        a++;
        b=j-1;
    }
    return res;
}


int contarPicos(vector<vector<int> > m){
	int i=0; int j=0;int picos=0;
	vector<vector<int> > n=m;
	while (i<m.size()){
	    while(j<m[i].size()){
	        if(esPico(m,i,j)){
	            picos=picos+1;
	        }
	        j++;
	    }
	    i++;
	    j=0;
	}
	return picos;
}

// Ejercicio 6


bool esTriangularInferior(vector<vector<int> > m){
    int i = 0;                          
    bool res = true;                      
    while (i < m.size() && res){
        int j = i + 1;
        while (j < m.size() && m[i][j] == 0){  
            j = j + 1;                  
        }
        res = j == m.size();                   
        i = i + 1;                      
    }        
    return res;
}




bool esTriangularSuperior(vector<vector<int> > m){
    int i = 1;                          
    bool res = true;                      
    while (i < m.size() && res){
        int j = 0;
        while (j < i && m[i][j] == 0){  
            j = j + 1;                  
        }
        res = j == i;                   
        i = i + 1;                      
    }        
    return res;
}



bool esTriangular(vector<vector<int> > m){
    return esTriangularInferior(m) || esTriangularSuperior(m); 
}



// Ejercicio 7


bool seAmenazan (int i,int j,int k,int l){
    return (i!=k || j!=l) && (i==k || j==l || abs(i-k)==abs(j-l));
}


bool amenazaAlguna (vector<vector<int> > m, int i, int j){
    int k=0; int l=0; bool amenaza=false;
    while(k<m.size()){
        while(l<m[i].size()){
            if(m[k][l]==1 && seAmenazan(i,j,k,l)){
                amenaza=true;
                break;
            }
            l++;
        }
        k++;
        l=0;
    }
    return amenaza;
}


bool existeAmenaza(vector<vector<int> > m){
    int i=0; int j=0; bool amenaza=false;
    while(i<m.size()){
        while(j<m[i].size()){
            if(m[i][j]==1 && amenazaAlguna(m,i,j)){
                amenaza=true;
                break;
            }
            j++;
        }
        i++;
        j=0;
    }
    return amenaza;
}



bool hayAmenaza(vector<vector<int> > m){
	return existeAmenaza(m);
}



// Ejercicio 8


int sumaDiagonal1(vector<vector<int> > m){
    int i=0; int j=0; int suma=0;
    while (i<m.size()){
        suma=suma+m[i][j];
        i++;
        j++;
    }
    return suma;
}

int sumaDiagonal2(vector<vector<int> > m){
    int i=0; int j=m.size()-1; int suma=0;
    while (i<m.size()){
        suma=suma+m[i][j];
        i++;
        j--;
    }
    return suma;
}



int diferenciaDiagonales(vector<vector<int> > m) {
    return abs(sumaDiagonal1(m)-sumaDiagonal2(m));
}