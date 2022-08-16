#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int K=0, Q=0, R=0, B=0, KN=0, P=0;
    
    cin >> K >> Q >> R >> B >> KN >> P;
    
    cout << 1 - K << " " << 1 - Q<< " " << 2 - R <<" " << 2 - B << " " << 2 - KN << " " << 8 - P;
}
