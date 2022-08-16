#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N, P;
    string contestant;
    
    cin >> N >> P;
    
    for (int x = 0; x <= N; x++)
        getline(cin, contestant);

    cout << P;
}

