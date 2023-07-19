
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    int vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int size = sizeof(vowels) / sizeof(vowels[0]);
    int* end = vowels+size;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        string word;
        string statement = "YES";

        cin >> m;
        cin >> word;

        int k = 0;
        for (int j = 0; j < m; j++) {
            int w = word[j];

            int* f = std::find(vowels, end, w);
            if ( f == end) {
                k = k + 1;
            } else {
                k = 0;
            }

            if( k >= 4) {
                statement = "NO";
                break;
            }
            
        }
    cout << statement << '\n';
    }
	return 0;
}
