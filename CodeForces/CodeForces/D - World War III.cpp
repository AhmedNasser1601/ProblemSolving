//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n, r, a, b, c, tmp;
//	cin >> n >> r;
//
//	a = b = c = 0;
//
//	if (n < 1 && r < 0) {
//		cout << "−1\n";
//		return 0;
//	}
//
//	for (int i = 0; i < n; i++) {
//		cin >> tmp;
//
//		if (a == 0 && tmp == r) {
//			a = 1 + i;
//			b = a;
//		}
//
//		if (b != 0 && tmp == r) {
//			b = 1 + i;
//		}
//
//		if (tmp == r) {
//			c++;
//		}
//	}
//
//	cout << a << ' ' << b << ' ' << c << endl;
//
//	return 0;
//}