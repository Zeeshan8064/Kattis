#include <iostream>
using namespace std;

int main()
{
	int n=0,temp=0,count=0;
	do{
		cin >> n;
		if (n > 0 && n <= 100) 
			break;
		else
			cin >> n;
	}while (true);
	
	for (int x = 0; x < n; x++){
		cin >> temp;
		if (temp < 0)
			count += 1;
	}
	cout << count;
	return 0;
}
