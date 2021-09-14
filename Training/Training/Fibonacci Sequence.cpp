//#include <iostream>
//
//using namespace std;
//
//const int SIZE = 10;
//
//void FIB(long long x[]) {
//	for (int i = 2; i < SIZE; i++) {
//		x[i] = x[i - 1] + x[i - 2];
//	}
//}
//
//void Display(long long x[]) {
//	cout << x[0];
//	for (int i = 1; i < SIZE; i++) {
//		cout << ", " << x[i];
//	}
//	cout << endl;
//}
//
//int main() {
//	long long x[SIZE];
//
//	x[0] = 0;
//	x[1] = 1;
//
//	FIB(x);
//	Display(x);
//
//	return 0;
//}