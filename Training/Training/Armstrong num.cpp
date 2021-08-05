////Armstrong Number
//
//#include <iostream>
//
//using namespace std;
//
//void isArmstrong(int n) {
//    int originalNum, remainder, result = 0;
//    originalNum = n;
//
//    while (originalNum != 0) {
//        remainder = originalNum % 10;
//        result += remainder * remainder * remainder;
//        originalNum /= 10;
//    }
//
//    if (result == n)
//        cout << n << " is an Armstrong number.\n";
//    else
//        cout << n << " is not an Armstrong number.\n";
//}
//
//int main() {
//    cout << "Enter a positive integer: ";
//    int n; cin >> n;
//
//    isArmstrong(n);
//
//    return 0;
//}