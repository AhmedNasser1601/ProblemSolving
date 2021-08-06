//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <string>
//#include <math.h>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//    int n;
//    int c, m;
//    int a, b;
//    double ac, bc;
//
//    cin >> n;
//
//    for (m = 1; m <= n; m++) {
//        c = 0;
//
//        cin >> a >> b >> ac >> bc;
//
//        while (a <= b) {
//            a *= (ac / 100.0) + 1.0;
//            b *= (bc / 100.0) + 1.0;
//
//            c++;
//
//            if (c > 100) {
//                cout << "Mais de 1 seculo.\n";
//                break;
//            }
//        }
//
//        if (c <= 100)
//            cout << c << " anos.\n";
//    }
//
//    return 0;
//}