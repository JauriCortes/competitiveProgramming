#include <iostream>
using namespace std;
int main() {
    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {

        int t,n,s;
        cin >>t>>n>>s;
        int sum = 0;
        
        while (s && t) {
         int sus = min(s, n);
         s -= sus;
         sum += sus*sus;
         t--;
        }
        cout << sum << endl;
    }
	return 0;
}