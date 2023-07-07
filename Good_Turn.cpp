#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cout << "";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        int y;

        cin >> x;
        cin >> y;

        int z = x + y;
        if (z > 6) {
            cout << "YES" << "\n";
        }
        else {

            cout << "NO" << "\n";
        }
    }
	return 0;
}
