#include <iostream>
#include <vector>
using namespace std;


int main() {

	vector<int> speed;
	vector<int> time;
	int n=0,count=1,sum=0;

	do{
			cout << "n:";
			cin >> n;
			if (n == -1)
				break;
			else
				if (n > 10 || n == 0)
					cout << "Re-enter n between 1-10."<<endl;
				else
					break;
	} while (true);

	cout << "Enter speed and time:";
	for (count = 1; count <= n; count++)
		cin >> speed[count] >> time[count];
	int x = count - 1;
	sum += (speed[count]*(time[count] - time[x]));
	cout << sum;
}