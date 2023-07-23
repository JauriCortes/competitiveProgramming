#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y ,a;
        cin >> x >> y >> a;

        if (a >= x && a < y) {
            cout << "YES"<< "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}