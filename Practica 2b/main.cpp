#include <iostream>

using namespace std;

int main()
{
    //EJERCICIO 3
    int numero ;
    cout << " Ingrese un numero : ";
    cin >> numero;
    for (int i=2 ; i<= numero ;i++){
        int q=0 ;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                q = q+1;
            }
       }
        if(q==1){
            cout << i << " " ;
        }

    }
    // EJERCICIO 4

    int n ;
    cout << "Ingrese un numero : ";
    cin >> n;

    int i,suma=0;
    for(i=1;i<n;i++){
        if(n%i==0){
        suma=suma+i;}
    }
    if (n==suma){
        cout << n << " es un numero perfecto ";
    }
    else cout << "No es un numero perfecto ";


    //EJERCICIO 5
    int x ;
    cout << " Ingrese un numero : ";
    cin >> x;
    for (int n=1 ; n <=x ;n++){
        int suma=0;
        for(int i=1;i<n;i++){
            if(n%i==0){
            suma=suma+i;
            }
        }
        if (n==suma){
            cout << n << " " ;
        }
    }

    return 0;
}

