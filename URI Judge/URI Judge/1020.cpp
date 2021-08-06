//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int num, d, m, y;
//	cin >> num;
//
//	d = m = y = 0;
//
//	while (num >= 365) {
//		y++;
//		num = num - 365;
//	}
//
//	while (num >= 30) {
//		m++;
//		num = num - 30;
//	}
//
//	d = num;
//
//	cout << y << " ano(s)\n" << m << " mes(es)\n" << d << " dia(s)\n";
//
//	return 0;
//}