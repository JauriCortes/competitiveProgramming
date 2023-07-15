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

        int p = x/10;
        int s = p * y;
        cout << s << '\n';
    }
	return 0;
}
