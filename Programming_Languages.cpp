#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int languages[2][2];
        int chef[2];
        
        int size = sizeof(chef) / sizeof(chef[0]);
        int* end = chef+size;

        cin >> chef[0];
        cin >> chef[1];

        for (int c = 0; c < size; c++) {
            for (int v = 0; v < size; v++) {
                cin >> languages[c][v];
            }
        }

        int k = 0;
        int j = 0;

        while (k < size && j < size) {
            int m = languages[j][k];
            int* f = std::find(chef, end, m);

            if (f == end) {
                j++;
                k = 0;
            } else {
                k++;
            }
        }
        if (j == 2) { j = 0; }
        else {j++;}
        cout << j << endl;


    }
	return 0;
}
