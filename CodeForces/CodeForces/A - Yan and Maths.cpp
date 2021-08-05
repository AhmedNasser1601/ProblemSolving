//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//stack<int> numSplit;
//
//void massSplit(long long num) {
//	int temp;
//
//	while (num != 0) {
//		temp = num % 10;
//		num /= 10;
//		numSplit.push(temp);
//	}
//}
//
//void checkEvenOdd(long long& x, long long& y) {
//	while (!numSplit.empty()) {
//		if (numSplit.top() % 2 == 0) x++;
//		else y++;
//
//		numSplit.pop();
//	}
//}
//
//int main() {
//	long long x = 0, y = 0, z;
//	cin >> z;
//
//	massSplit(z);
//	checkEvenOdd(x, y);
//
//	cout << "Even : " << x << "\nOdd : " << y << endl;
//
//	return 0;
//}