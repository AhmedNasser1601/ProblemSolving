//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	float M[12][12];
//	double SUM = 0;
//	int x;
//	char operation;
//
//	cin >> x >> operation;
//
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 12; j++) {
//			cin >> M[i][j];
//
//			if (i == x)
//				SUM += M[x][j];
//		}
//	}
//
//	if (operation == 'S')
//		cout << fixed << setprecision(1) << SUM << endl;
//
//	else if (operation == 'M')
//		cout << fixed << setprecision(1) << (SUM / 12) << endl;
//
//	return 0;
//}