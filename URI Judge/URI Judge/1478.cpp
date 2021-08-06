//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int x, y;
//
//	while (cin >> x && x) {
//		for (int i = 1; i <= x; i++) {
//			for (int j = 1; j < x; j++) {
//				y = abs(i - j) + 1;
//
//				if (y < 10)
//					cout << "  " << y << " ";
//
//				else if (y < 100)
//					cout << " " << y << " ";
//
//				else
//					cout << y << " ";
//			}
//
//			y = abs(i - x) + 1;
//
//			if (y < 10)
//				cout << "  " << y << endl;
//
//			else if (y < 100)
//				cout << " " << y << endl;
//
//			else
//				cout << y << endl;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}