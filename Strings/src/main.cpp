#include<iostream>
#include<vector>
using namespace std;


void mostrarVector1(vector<string> v){
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
void mostrarVector(vector<vector<string> > v){
    cout << "[";
    for(int i=0; i<v.size();i++){
        cout << "[";
        if(i!=v.size()-1){
            for(int j=0; j<v[i].size();j++){
	            if (j!=v[i].size()-1){
	                cout << v[i][j] << ", ";
	            } else {
	                cout << v[i][j];
	            }
	        }
	        cout << "], ";
        } else {
            for(int j=0; j<v[i].size();j++){
	            if (j!=v[i].size()-1){
	                cout << v[i][j] << ", ";
	            } else {
	                cout << v[i][j];
	            }
	        }
	        cout << "]";
        }
    }
    cout << "]";
}


vector<string> split(string s, char delim){
    vector<string> v;
    int i=0;
    string palabra;
    char caracter=s[0];
    while(i<s.size()){
        while(i<s.size() && s[i]!=delim){
            palabra.push_back(s[i]);
            i++;
        }
        if(s[i-1]!=delim && caracter != delim){
            v.push_back(palabra);
            palabra.clear();
        } else {
            caracter='a';
        }
        i++;
    }
    return v;
}

string darVueltaPalabra(string s){
    string res;
    int i=s.size()-1;
    int j=s.size()-1;
    int k;
    char delim=' ';
    while(i>=0){
        while(i>=0 && s[i]!=delim){
            i--;
        }
        k=i;
        while(i<j){
            res.push_back(s[i+1]);
            i++;
        }
        if(k>1 && s[i]!=delim){
            res.push_back(delim);
        }
        k--;
        i=k;
        j=k;
    }
    return res;
}

// Decidir si s1 es substring o subsecuencia de s2
bool subsecuencia(string s1, string s2) {
    int i = 0; int j = 0;
    bool res = true;
    while(i < s1.size() && res){
        while(j < s2.size() && s1[i] != s2[j]){
            j++;
        }
        res = j < s2.size();
        i++;
        j++;
    }
    return res;
}


bool mismasLetras (string a, string b){
    int i=0;int j=0; int res=true;
    while(i<a.size() && res){
        while(j<b.size() && a[i]!=b[j]){
            j++;
        }
        res = j<b.size();
        j=0;
        i++;
    }
    return res;
}
void ponerjEniMask (vector<string> &v, int j, int iMask){
    v[j]=v[iMask];
}

void correrValoresALaDerecha(vector<string> &v, string s, int desde, int hasta){
    vector<string>w=v;
    if(hasta>=desde){
        v[desde]=s;
        for(int l=hasta;l>desde;l--){
            v[l]=w[l-1];
        }
    }
}



vector<vector<string> > agruparAnagramas(vector<string> v){
    vector<vector<string> > res;
    int k=0;
    for(int i=0; i<v.size(); i=i+k){
        k=0;
        vector<string> letrasIguales;
        for(int j=i; j<v.size(); j++){
            if(mismasLetras(v[i],v[j])){
                letrasIguales.push_back(v[j]);
                string valorGuardado=v[i+k];
                ponerjEniMask(v,i+k,j);
                correrValoresALaDerecha(v,valorGuardado,i+k+1,j);
                k++;
            }
        }
        res.push_back(letrasIguales);
    }
    return res;
}


bool esPalindromo(string s){
    int i;
    for(i=0; i<s.size()/2 && s[i]==s[s.size()-1-i];i++){
    }
    return i==s.size()/2;
}


bool tieneRepetidos(string s){
    bool distinto = false; int i=0; int j=i+1;
    while(i<s.size() && !distinto){
        while(j<s.size() && s[i]!=s[j]){
            j++;
        }
        distinto=j<s.size();
        i++;
        j=i+1;
    }
    return distinto;
}


string rotar(string s, int k){
    string res = s;
    int i = 0; 
    while(i < k){
        int j = 0;
        while(j < s.size() - 2){
            res [j + 1] = s[j];
            j++;
        }
        res[0] = s[s.size() - 1];
        res[s.size() - 1] = s[s.size() - 2];
        s = res;
        i++;
    }
    return res;
}

string substring(string s, int i, int j){
    string t;
    for(int k=i; k<j; k++){
        t.push_back(s[k]);
    }
    return t;
}

string darVuelta(string s){
    string t;
    for(int i=0; i<s.size(); i++){
        t.push_back(s[s.size()-1-i]);
    }
    return t;
}


string concat (string s, string t){
    string u;
    for(int i=0; i<s.size(); i++){
        u.push_back(s[i]);
    }
    for(int j=0; j<t.size(); j++){
        u.push_back(t[j]);
    }
    return u;
}


string darVueltaK(string s, int k){
    string res;
    for(int i=0; i<s.size(); i=i+k){
        if(i+k<=s.size()){
            res = concat(res, darVuelta(substring(s,i,i+k)));
        } else {
            res = concat(res, darVuelta(substring(s,i,s.size())));
        }
    }
    return res;
}



string abueloLaino(string s){
    string res; int i;
    for(i=0;i<s.size()-1 && s[i]!='i';i++){
    }
    if(s[i]=='i'){
        res='N';
    } else {
        res='S';
    }
    return res;
}


string juntarStrings (vector<string> v){
    string res;
    for(int i=0; i<v.size();i++){
        res = concat(res,v[i]);
    }
    return res;
}



void swap(string &s, int i, int j){
    char aux;
    aux=s[i];
    s[i]=s[j];
    s[j]=aux;
}


string ordenarStringDR (string s){
    int i=0; int j=0; string t=s;
    while(i<s.size()){
        while(i<s.size() && t[i]!='D'){
            i++;
        }
        swap(t,j,i);
        j++;
        while(i<s.size() && t[i]!='R'){
            i++;
        }
        swap(t,j,i);
        i++;
        j++;
    }
    return t;
}



int cantidadDeFelicitaciones(vector<string> v){
    string stringJuntos = juntarStrings(v);
    string juntosOrdenados = ordenarStringDR(stringJuntos);
    int i=0; int res=0;
    while(i<juntosOrdenados.size()){
        while(i<juntosOrdenados.size() && juntosOrdenados[i]!='D'){
            i++;
        }
        while(i<juntosOrdenados.size() && juntosOrdenados[i]!='R'){
            i++;
        }
        if(i<juntosOrdenados.size()){
            res++;
            i++;
        } else {
            i++;
        }
    }
    return res;
}





int main(){
    vector<string> v = {"DDD","RRR","DRDR","RDRD"};
    string s="DDDRRRDRDRRDRD";
    cout << cantidadDeFelicitaciones(v);
   // cout << ordenarStringDR("DDDRRRDRDRRDRD");
   // cout << cantidadDeFelicitaciones(v);

}





