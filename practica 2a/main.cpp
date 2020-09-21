#include <iostream>

using namespace std;

int main()
{
    //Ejercicio 1
    int a=1000000;
    int suma =0 ;
    for (int i=1 ; i<a; i++){
        if((i%3==0)||(i%5==0)){
            suma= suma+i;
        }
    }
    cout << "La suma es : " << suma;
    // Ejercicio 2
    int n;
    cout << "Ingrese un numero :" ;
    cin >> n;
    for (int i=1 ; i<= n ;i++){
        if (i%2!=0){
            cout << i << " ; " ;
        }
    }

    return 0;
}
