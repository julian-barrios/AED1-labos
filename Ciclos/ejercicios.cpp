#include "ejercicios.h"


// Ejercicio 1
bool existePico(vector<int> v){
    int i=1;
    bool res=false;
    while(i<v.size()-1 && !res){
        if(v[i-1]<v[i] && v[i]>v[i+1]){
            res=true;
        } else {
            res=false;
        }
        i++;
    }
	return res;
}

// Ejercicio 2
int mcd(int m, int n){
    int a=m;
    int b=n;
    int resto;
    while(b!=0 && b!=1){
        resto=a%b;
        a=b;
        b=resto;
    }
	if(b==0){
	    return a;
	} else {
	    return 1;
	}
}

// Ejercicio 3
int indiceMinSubsec(vector<int> v, int l, int r){
    int res=l;
    int i=res+1;
    while(i<r){
        if(v[res]<v[i]){
        } else {
            res=i;
        }
        i++;
    }
    return res;
}

// Ejercicio 4
void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

void ordenar1(vector<int>& v){
    int i=v.size();
    int j=0;
    vector <int> w(v.size());
    while(i>0){
        w[j]=(v[indiceMinSubsec(v,0,i)]);
        swap(v[indiceMinSubsec(v,0,i)],v[i-1]);
        i--;
        j++;
    }
    v=w;
}


// Ejercicio 5
void ordenar2(vector<int>& v){
	return;
}

// Ejercicio 6

int maximo(int n, int d){
  if(n<0)
    n=-n;
  if(d<0)
    d=-d;
  if(n>d)
    return n;
  else
    return d;
}

int minimo(int n, int d){
  if(n<0)
    n=-n;
  if(d<0)
    d=-d;
  if(n<d)
    return n;
  else
    return d;
}



tuple<int,int> division(int n, int d){
    int r;
    int q;
    int k=n;
    if(n>=d){
        while(r>d){
           r=k-d;
           q++;
           k=r;
        }
    } else {
        q=0;
        r=n;
    }
    return make_tuple(q,r);
}








