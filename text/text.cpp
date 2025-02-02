#include <iostream>
using namespace std;

int main() {

    string s = "";
    char c = 'a';

    int n, k;
    cin >> n >> k;
    int t = k;
    int counter = 0;

    for (int i = 0; i < n; i++) {

        if (counter == k) {
            counter = 0;
            c = 'a';
        }
        s += c;
        c++;
        counter++;

    }
    cout << s;
    return 0;
}