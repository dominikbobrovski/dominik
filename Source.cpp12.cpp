#include<iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	const int n = 12;
	int arr[n];
	int temp;
	srand(time(0));
	for (int i = 0; i < n; i++) arr[i] = rand() % 101 - 50;
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	cout << endl;

	for (int i = 0; i < n; i++) {
		int max = arr[i];
		int p = i;
		for (int j = i; j < n; j++) {
			if (arr[j] > max) {
				max = arr[j];
				p = j;
			}
		}
		swap(arr[i], arr[p]);
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;



}


