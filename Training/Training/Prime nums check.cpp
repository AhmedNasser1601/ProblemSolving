////Prime numbers check
//
//#include <iostream>
//
//using namespace std;
//
//bool Prime(int x) {
//	for (int i = 2; i <= x / 2; ++i) {
//		if (x % i == 0) {
//			return false;
//			break;
//		}
//	}
//}
//
//int main() {
//	int x; char stop = 'a';
//
//	while (stop != 's') {
//		cout << "**************************************\n";
//
//		cout << "Enter a Number...\n";
//		cout << "   ---> "; cin >> x;
//
//		if (Prime(x))
//			cout << x << " is a prime number\n";
//		else
//			cout << x << "is not a prime number\n";
//
//		cout << "\n**************************************\n";
//		cout << "Enter << S >> to Stop ---> "; cin >> stop;
//	}
//
//	return 0;
//}