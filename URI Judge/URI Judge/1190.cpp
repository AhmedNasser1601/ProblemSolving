//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <stdio.h>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	float M[12][12], SUM = 0;
//	char operation;
//
//	cin >> operation;
//
//	for (int i = 0; i < 12; i++)
//		for (int j = 0; j < 12; j++) {
//			cin >> M[i][j];
//
//			if (j > (11 - i) && j > i)
//				SUM += M[i][j];
//		}
//
//	if (operation == 'S')
//		cout << fixed << setprecision(1) << SUM << endl;
//
//	else if (operation == 'M')
//		cout << fixed << setprecision(1) << (SUM / 30) << endl;
//
//	return 0;
//}