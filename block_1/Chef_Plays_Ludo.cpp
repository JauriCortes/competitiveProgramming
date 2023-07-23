#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x == 6) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
	return 0;
}
