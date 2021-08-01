#include<iostream>
#include<cmath>
using namespace std;
int maxConseOnes(int arr[], int n) {
	int curr=0;
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			curr = 0;
		}
		else {
			curr++;
			res = max(curr, res);
		}
	}
	return res;
}
int main()
{
	int arr[] = { 1,0,1,1,0,0,1,1,1 }, n = 9;
	cout << maxConseOnes(arr, n);
}