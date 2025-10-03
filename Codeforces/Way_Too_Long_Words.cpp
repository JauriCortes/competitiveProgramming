#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {

        string word;
        cin >> word;
    
        if(word.length() > 10) {
    
            string new_word = "";
            new_word = new_word + word[0];
    
            string len = to_string(word.length()-2);
    
            new_word = new_word + len + word[word.length()-1];
            
            cout << new_word << endl;
        }
        else {
            
            cout << word << endl;
        }
    }
}