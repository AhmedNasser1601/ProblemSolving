//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a, b, c, x, y, z;
//	cin >> a >> b >> c;
//
//	x = a; y = b; z = c;
//
//	if (a < b && a < c) {
//		if (b < c) {
//			x = a;
//			y = b;
//			z = c;
//		}
//
//		else if (c < b) {
//			x = a;
//			y = c;
//			z = b;
//		}
//	}
//
//	else if (b < a && b < c) {
//		if (a < c) {
//			x = b;
//			y = a;
//			z = c;
//		}
//
//		else if (c < a) {
//			x = b;
//			y = c;
//			z = a;
//		}
//	}
//
//	else if (c < a && c < b) {
//		if (a < b) {
//			x = c;
//			y = a;
//			z = b;
//		}
//
//		else if (b < a) {
//			x = c;
//			y = b;
//			z = a;
//		}
//	}
//
//	cout << x << " " << y << " " << z;
//
//	return 0;
//}