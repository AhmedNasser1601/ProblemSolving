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
//	double M[12][12];
//	double SUM = 0;
//	char operation;
//	int x = 1, y = 10;
//
//	cin >> operation;
//
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 12; j++) {
//			cin >> M[i][j];
//		}
//	}
//
//	for (int i = 0; i <= 4; i++) {
//		for (int j = x; j <= y; j++) {
//			SUM += M[i][j];
//		}
//
//		x++;
//		y--;
//	}
//
//	if (operation == 'S')
//		cout << fixed << setprecision(1) << SUM << endl;
//
//	else if (operation == 'M')
//		cout << fixed << setprecision(1) << (SUM / 30) << endl;
//
//	return 0;
//}