#include<iostream>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct Birthday
{
	string Name, Birth;
	int power;
};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<Birthday>vect;
	vector<Birthday>Answer;
	int N;
	cin >> N;
	cin.ignore();
	const  int y = N;
	Birthday* B;
	B = new Birthday[N];
	for (int i = 0; i < N; i++)
	{
		cin >> B[i].Name;
		cin >> B[i].power;
		cin >> B[i].Birth;
		vect.push_back(B[i]);
	}
	for (int i = 0; i < vect.size() - 1; i++)
	{
		for (int j = i + 1; j < vect.size(); j++)
		{
			if (vect[i].power < vect[j].power)
			{
				swap(vect[i], vect[j]);
			}
		}
	}
	for (int i = 0; i < vect.size() - 1; i++)
	{
		vector<int>ver;
		for (int j = i + 1; j < vect.size(); j++)
		{
			if (vect[i].Birth == vect[j].Birth)
			{
				ver.push_back(j);
			}
		}
		for (auto z : ver)
		{
			vect.erase(vect.begin() + z);
		}
	}
	string str = vect[vect.size()].Birth;
	for (int i = 0; i < vect.size() - 1; i++)
	{
		if (str == vect[i].Birth)
		{
			vect.pop_back();
			break;
		}
	}
	vector<string>ver;
	for (auto x : vect)
	{
		ver.push_back(x.Name);
	}
	sort(ver.begin(), ver.end());
	cout << ver.size() << endl;
	for (auto x : ver)
	{
		cout << x << endl;
	}
	return 0;
}