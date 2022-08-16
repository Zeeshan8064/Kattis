#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    char letter = 'a';
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            for (i; i < word.length(); i++)
                cout << word[i];
        }
    }
}
