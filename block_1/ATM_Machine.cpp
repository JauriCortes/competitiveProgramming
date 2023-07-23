#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m, money;

        cin >> m;
        cin >>  money;

        for (int j = 0; j < m; j++) {
            int k, r;
            cin >> k;

            r = money - k;
            if (r >= 0) {
                money = r;
                cout << 1;
            } else {
                cout << 0;
            }
        }
                cout << endl;
    }
	return 0;
}
