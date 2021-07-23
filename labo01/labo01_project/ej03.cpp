# include <iostream>


int f (int x, int y){
    if (x>y){
        return x+y;
    } else {
        return x*y;
    }
}


int main () {
std :: cout << "El resultado es: " << f (10,20) << std :: endl ;
return 0;
}

