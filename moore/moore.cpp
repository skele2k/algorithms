#include <bits/stdc++.h>
using namespace std;
/*
 * Given an array size of n, find the majority element.
 * The majority element is the element that appears
 * more than n/2 times.
 * You may assume that the array is non-empty and the
 * majority element always exist in the array.
 */
int main()
{
	int N;
	cout << "Input the size of array: ";
	cin >> N;
	vector<int> v(N);
	cout << "Input the array" << endl;
	for (int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	int candidate = 0;
	int vote = 0;
	for (int &num: v){
		if (vote == 0){
			candidate = num;
			vote = 1;
		}
		else if (candidate == num){
			vote++;
		}
		else{
			vote--;
		}
	}
	cout << "The winner of the election is: " << candidate << endl;
}
