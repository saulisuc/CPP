#include<iostream>
#include<cmath>
using namespace std;
int maxlenevenodd(int arr[], int n) {
	int res = 1;
	int count = 1;
	for (int i = 1; i < n; i++) {
		if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
			count++;
			res = max(res, count);
		}
		else {
			count = 1;
		}
	}
	return res;
}
int main() {
	int arr[] = { 5, 10, 20, 6, 3, 8 }, n = 6;
	cout << maxlenevenodd(arr, n);
}