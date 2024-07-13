#include<iostream>
using namespace std;
void fillAndPrintArr(int *arr,int k){
	for (int i = 0; i < k; i++) {
		arr[i] = rand() % 10 - 5;
		cout << arr[i] << " ";
	}
}
void findElem(int* arr, int k,int &count) {
	for (int i = 0; i < k; i++) {
		if (arr[i] < 0 && i % 2 != 0) {
			count++;
		}
	}
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int n, x = 0, i;
	cout << "n = ";
	cin >> n;
	int* a = new int[n];
	fillAndPrintArr(a, n);
	findElem(a, n, x);
	cout << endl << "x = " << x;
	delete[] a;

}