#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y ;
        cin >> x;
        cin >> y;

        cout << x-y << '\n';
    }
	return 0;
}