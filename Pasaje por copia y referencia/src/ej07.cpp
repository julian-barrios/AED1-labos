#include <iostream>
using namespace std;


void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a=0; int b=0;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    swap(b,a);
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}


