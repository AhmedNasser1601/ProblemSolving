//#include<iostream>
//
//using namespace std;
//
//int add(int x, int y) {
//	return x + y;
//}
//
//int sub(int x, int y) {
//	return x - y;
//}
//
//int prod(int x, int y) {
//	return x * y;
//}
//
//int main() {
//	long a, b, c, d;
//	cin >> a >> b >> c >> d;
//
//	if ((d >= pow(10, -18) && d <= pow(10, 18)) && ((a >= pow(10, -9) && b >= pow(10, -9) && c >= pow(10, -9)) && (a <= pow(10, 9) && b <= pow(10, 9) && c <= pow(10, 9)))) {
//		if (prod(add(a, b), c) == d) {
//			cout << "YES\n";
//		}
//		else if (prod(a, add(b, c)) == d) {
//			cout << "YES\n";
//		}
//
//		else if (prod(sub(a, b), c) == d) {
//			cout << "YES\n";
//		}
//		else if (prod(a, sub(b, c)) == d) {
//			cout << "YES\n";
//		}
//
//
//		else if (add(prod(a, b), c) == d) {
//			cout << "YES\n";
//		}
//		else if (add(a, prod(b, c)) == d) {
//			cout << "YES\n";
//		}
//
//		else if (add(sub(a, b), c) == d) {
//			cout << "YES\n";
//		}
//		else if (add(a, sub(b, c)) == d) {
//			cout << "YES\n";
//		}
//
//
//		else if (sub(prod(a, b), c) == d) {
//			cout << "YES\n";
//		}
//		else if (sub(a, prod(b, c)) == d) {
//			cout << "YES\n";
//		}
//
//		else if (sub(add(a, b), c) == d) {
//			cout << "YES\n";
//		}
//		else if (sub(a, add(b, c)) == d) {
//			cout << "YES\n";
//		}
//
//
//		else {
//			cout << "NO\n";
//		}
//	}
//
//	else {
//		cout << "NO\n";
//	}
//
//	return 0;
//}