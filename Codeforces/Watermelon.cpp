#include <iostream>
using namespace std;

int main() {

    int weigh;
    cin >> weigh;

    if(weigh == 2) {cout << "NO";}

    else if(weigh%2 == 0) {cout << "YES";}
    else {cout << "NO";}
}