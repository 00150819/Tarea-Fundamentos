#include <iostream>
using namespace std;

int main() {
    int filas;
    
    cout << "Ingrese el número de filas para el rombo (>= 5): ";
    cin >> filas;
    
    if(filas < 5) {
        cout << "El número debe ser mayor o igual a 5" << endl;
        return 1;
    }
    for(int i = 1; i <= filas; i++) {
        for(int espacio = 1; espacio <= filas - i; espacio++) {
            cout << " ";
        }
        for(int puntos = 1; puntos <= i; puntos++) {
            cout << ". ";
        }
        cout << endl;
    }
    for(int i = filas-1; i >= 1; i--) {
       
        for(int espacio = 1; espacio <= filas - i; espacio++) {
            cout << " ";
        }
        for(int puntos = 1; puntos <= i; puntos++) {
            cout << ". ";
        }
        cout << endl;
    }
    
    return 0;
}