//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	int x;
//	char y = ' ';
//	float z[12][12] = {};
//	float sum = 0, avg = 0;
//
//	cin >> x >> y;
//
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 12; j++) {
//			cin >> z[i][j];
//		}
//	}
//
//	switch (y) {
//	case 'S':
//		for (int i = 0; i < 12; i++)
//			sum += z[i][x];
//		cout << fixed << setprecision(1) << sum << endl;
//		break;
//
//	case 'M':
//		for (int i = 0; i < 12; i++)
//			avg += z[i][x];
//		cout << fixed << setprecision(1) << avg / 12 << endl;
//		break;
//	}
//
//	return 0;
//}