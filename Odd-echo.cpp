#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        if (i % 2 == 0) {
            cout << word << endl;
        }
    }
}