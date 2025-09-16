#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int test_n;
    cin >> test_n;

    for (int t = 0; t < test_n; t++) {

        int n;
        cin >> n;

        bool flag = false;
        for (int x = 1; x <= n; x++) {
            for (int y = 1; y <= n; y++) {

                int resultado = (pow(x,y)*y) + (pow(y,x)*x);
                cout << "Resultado = " << resultado << " x: " << x << " y: " << y << endl;
                
                if (resultado == n) {

                    cout << "Resultado encontrado";
                    flag = true;
                    break;
                }
            }
            if(flag) {
                break;
            }
        }

        cout << -1 << endl;
    }
}