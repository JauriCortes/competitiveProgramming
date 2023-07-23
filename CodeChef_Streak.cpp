#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;
    
    while (i--) {
        int j;
        cin >> j;

        int om_count = 0;
        int c = 0;
        for (int n = 0; n < j; n++) {
            int x;
            cin >> x;


            if(x == 0) {
                if (c > om_count) {
                    om_count = c;
                }
                c = 0;
            } else {
                c++;
            }
        }

        int d = 0;
        int addy_count = 0;
        for (int m = 0; m < j; m++) {
            int x;
            cin >> x;


            if(x == 0) {
                if (d > addy_count) {
                    addy_count = d;
                }
                d = 0;
            } else {
                d++;
            }
        }

        string output = "Draw";
        if (addy_count > om_count) {
            output = "Addy";
        } else if (om_count > addy_count) {
            output = "Om";
        }

        cout << output << endl;
    }
	return 0;
}
