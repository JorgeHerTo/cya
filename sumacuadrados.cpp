#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    
    int n = 0;
    
    if (argv[1] == NULL) {
        cout << "ERROR: Introduzca un valor n" << endl;
        return 1;
    }
    n = atoi(argv[1]);


    // Algoritmo para saber si 'n' es la suma de dos números cuadrados perfectos.ç

    int cont = 0, vari = 0, varj = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if ( ( (i*i) + (j*j) ) == n) {
                cont++;
                vari = i;
                varj = j;
            }
        }
    }
    
    if (cont >= 1 ) {
        cout << "n es el cuadrado perfecto de dos números" << endl;
        cout << "Estos números son: " << vari << " y " << varj << endl;
    }
}
