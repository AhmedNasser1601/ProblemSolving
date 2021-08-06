//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	char x = ' ';
//	float y[12][12] = {}, sum = 0, avg = 0;
//
//	cin >> x;
//
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 12; j++) {
//			cin >> y[i][j];
//		}
//	}
//
//	switch (x) {
//	case 'S':
//		for (int i = 0; i < 12; i++)
//			for (int j = 0; j < 12; j++)
//				if (i != j && j < i)
//					sum += y[i][j];
//		cout << fixed << setprecision(1) << sum << endl;
//		break;
//
//	case 'M':
//		for (int i = 0; i < 12; i++)
//			for (int j = 0; j < 12; j++)
//				if (i != j && j < i)
//					avg += y[i][j];
//		cout << fixed << setprecision(1) << avg / 66 << endl;
//		break;
//	}
//
//	return 0;
//}