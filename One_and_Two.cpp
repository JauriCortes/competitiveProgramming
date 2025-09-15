#include <iostream>
#include <vector>

using namespace std;
int comparar_productos(int k, int n, int arrElementos[]);
int get_posicion(int k, int n, int arrElementos[]);

int main() {
    
    int t; //numero de casos
    cin >> t;
    //itera por cada caso
    for (int i = 0; i < t; i++) {

        int n; //numero de elementos
        cin >> n;

        int arrElementos[n];//array para guardar los elementos

        //itera por cada elemento y lo guarda en una array
        for (int j = 0; j < n; j++) {
            
            int elem; //elemento
            cin >> elem;

            arrElementos[j] = elem;
        }

        //ANALIZA EL ARRAY Y DETECTA DONDE SON IGUALES SUS PRODUCTOS

        //devuelve la posicion en la que los dos productos son iguales
        //sino detecta igualdad devuelve -1 y avanza a la siguiente posicion
        bool found_k = false;
        for (int k = 1; k < n; k++) {

            int igualdad = comparar_productos(k, n, arrElementos);
            //si detecta igualdad imprime la posicion 
            if (igualdad) {
                //al detectar una igualdad no sigue buscando

                found_k = true;
                cout << k << endl;
                break;
            }
        }
        
        //si se encontró una k va al siguiente caso
        if (found_k) {
            continue;
        }
        else {
            //si no encuentra ninguna igualdad devuelve -1 y sigue con su vida
            cout << -1 << endl;
        }

    }
}

int comparar_productos(int k, int n, int arrElementos[]) {
    
    //producto del lado izquierdo
    long long prodIzq = 1;
    for (int izq = 0; izq < k; izq++) {
        //obtener numeros del lado izquierdo
        prodIzq = prodIzq * arrElementos[izq];
    }
    
    //producto del lado derecho
    long long prodDer = 1;
    for (int der = k; der < n; der++) {
        //obtener numeros del lado derecho
        prodDer = prodDer * arrElementos[der];
    }

    return (prodIzq == prodDer);
    
}
