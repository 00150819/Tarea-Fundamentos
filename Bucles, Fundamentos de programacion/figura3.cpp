#include <iostream>
using namespace std;

int main() {
    int filas;
    
    cout << "Ingrese el numero de filas para la piramide: ";
    cin >> filas;
    
    for(int i = 1; i <= filas; i++) {
        for(int espacio = 1; espacio <= filas - i; espacio++) {
            cout << " ";
        }
        for(int puntos = 1; puntos <= i; puntos++) {
            cout << "."<<" ";
        }
        
        cout << endl;
    }
    
    return 0;
}