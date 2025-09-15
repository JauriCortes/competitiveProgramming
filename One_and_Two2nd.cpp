#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int t; //numero de casos
    cin >> t;
    //itera por cada caso

    
    for (int i = 0; i < t; i++) {
        
        int n; //numero de elementos
        cin >> n;
        
        //cuenta cuantos 2's hay en cada caso
        int counter = 0;
        int elemArr[n];

        for (int j = 0; j < n; j++) {
            
            int elem; //elemento
            cin >> elem;

            elemArr[j] = elem;
            if (elem == 2) {
                counter++;
            }
        }

        if (counter == 0) {
            cout << "1" << endl;
        }
        else if (counter % 2 != 0) {
            
            cout << "-1" << endl;
        }
        else {

            int mitad = counter / 2;
            int final_counter = 0;
            for (int u = 0; u < n; u++) {
               if (elemArr[u] == 2){

                final_counter++;
               }
               
               if (final_counter == mitad){
                    cout << u+1 << endl;
               }
            }
        }

    }
    return 0;
}