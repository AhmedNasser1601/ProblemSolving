////LCM number
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int LCM(int x, int y) {
//	int z = (x > y) ? x : y;
//
//	do {
//		if (z % x == 0 && z % y == 0)
//			return z;
//		else
//			z++;
//	} while (true);
//}
//
//int main() {
//	cout << "Enter two numbers: ";
//	int x, y;
//	cin >> x >> y;
//
//	cout << LCM(x, y) << endl;
//
//	return 0;
//}