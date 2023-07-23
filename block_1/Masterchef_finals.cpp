#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;

    for (int i = 0; i<n; i++) {
        int x;
        cin >> x;

        if (x > 10) {
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << "\n";
        }
    }
	return 0;
}
