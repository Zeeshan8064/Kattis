#include <iostream>
#include<string>
using namespace std;

int main()
{
 
    int n = 0,volume=7;
    cin >> n;

    for (int i=0; i <= n; i++) {
        string request;
        getline(cin, request);

        if (request == "Skru op!" && volume < 10)
        {
            volume++;
        }
        else if (request == "Skru ned!" && volume > 0)
        {
            volume--;
        }
    };

        cout << volume;
}

