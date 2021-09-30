//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int x, t, e, b, c;
//	char y;
//
//	cin >> x;
//
//	t = e = b = c = 0;
//
//	/*
//	* (t)-> toys
//	* (e)-> electronics
//	* (b)-> books
//	* (c)-> CDs
//	*/
//
//	for (int i = 0; i < x; i++) {
//		cin >> y;
//
//		switch (y) {
//		case 't':
//			t++;
//			break;
//
//		case 'e':
//			e++;
//			break;
//
//		case 'b':
//			b++;
//			break;
//
//		case 'c':
//			c++;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	cout << t << ' ' << e << ' ' << b << ' ' << c << endl;
//
//	return 0;
//}