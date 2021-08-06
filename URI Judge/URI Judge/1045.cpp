//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	double A, B, C, temp;
//	cin >> A >> B >> C;
//
//	if (A < B)
//	{
//		temp = A;
//		A = B;
//		B = temp;
//	}
//
//	if (B < C)
//	{
//		temp = B;
//		B = C;
//		C = temp;
//	}
//
//	if (A < B)
//	{
//		temp = A;
//		A = B;
//		B = temp;
//	}
//
//	if (A > 0 && B > 0 && C > 0)
//	{
//		if (A >= B + C)
//			cout << "NAO FORMA TRIANGULO\n";
//		else if ((A * A) == (B * B) + (C * C))
//			cout << "TRIANGULO RETANGULO\n";
//		else if ((A * A) > ((B * B) + (C * C)))
//			cout << "TRIANGULO OBTUSANGULO\n";
//		else if ((A * A) < ((B * B) + (C * C)))
//			cout << "TRIANGULO ACUTANGULO\n";
//		if (A == B && B == C)
//			cout << "TRIANGULO EQUILATERO\n";
//		else if ((A == B && A != C) || (B == C && B != A) || (C == A && C != B))
//			cout << "TRIANGULO ISOSCELES\n";
//	}
//
//	return 0;
//}