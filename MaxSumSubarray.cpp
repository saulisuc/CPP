#include<iostream>
#include<cmath>
using namespace std;
int maxSumSubarray(int arr[], int n) {
	int maxend = arr[0];
	int res = arr[0];
	for (int i = 1; i < n; i++) {
		maxend = max((maxend + arr[i]), arr[i]);
		res = max(maxend, res);
	}
	return res;
}
int main() {
	int arr[] = { 1, -2, 3, -1, 2 }, n = 5;
	cout << maxSumSubarray(arr, n);
}