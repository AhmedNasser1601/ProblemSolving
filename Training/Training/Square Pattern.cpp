//#include <iostream>
//
//using namespace std;
//
//char a;
//int b = 50, x = 1, y = 1;
//
//void vertical() {
//	for (x = 1; x <= b; x++)
//		cout << endl;
//}
//
//void Horizontal() {
//	for (x = 1; x <= b * 2; x++)
//		cout << " ";
//}
//
//void Pattern() {
//	system("Color 46");
//
//	for (x = 1; x <= b; x++)
//		cout << a;
//
//	cout << endl;
//}
//
//int main() {
//	do {
//		system("Color F0");
//
//		cout << "Enter the Pattern: ";
//		cin >> a;
//
//		system("cls");
//
//		if (a == '0') {
//			system("Color 4F");
//
//			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tThank You, Good Bye\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
//			break;
//		}
//
//		vertical();
//
//		for (y = 1; y <= b; y++) {
//			Horizontal();
//			Pattern();
//		}
//
//		vertical();
//	} while (true);
//
//	system("pause");
//	return 0;
//}