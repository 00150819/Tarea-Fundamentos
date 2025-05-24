#include <iostream>
using namespace std;

int main() {
    int filas;
    
    cout << "Introduce el número de filas: ";
    cin >> filas;
    
    for(int i = filas; i >= 1; i--) {  
        for(int espacio = 0; espacio < filas - i; espacio++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << ". ";
        }
        cout << endl;
    }
    
    return 0;
}