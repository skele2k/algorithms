#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	//size of the list
	cin >> size;
	vector<int> v(size);
	for(int i = 0; i < size; i++){
		cin >> v[i];
	}
	int sum = v[0];
	int max_sum = INT_MIN;
	for (int i = 0; i < size; i++){
		sum = max(v[i],sum + v[i]);
		max_sum = max(max_sum, sum);
	}
	cout << max_sum << endl;
}
