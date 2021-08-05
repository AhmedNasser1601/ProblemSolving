//#include <iostream>
//#include <stdio.h>
//#include <cstdio>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void simplest_img(int x, int y)
//{
//	while (x % 2 == 0 && y % 2 == 0)
//	{
//		x = x / 2;
//		y = y / 2;
//
//		if (x <= 2 || y <= 2)
//			break;
//	}
//
//	while (x % 3 == 0 && y % 3 == 0)
//	{
//		x = x / 3;
//		y = y / 3;
//
//		if (x <= 2 || y <= 2)
//			break;
//	}
//
//	cout << " = " << x << "/" << y << endl;
//}
//
//void SUM(double N1, double N2, double D1, double D2)
//{
//	double x = N1*D2 + N2*D1;
//	double y = N2*D2;
//
//	cout << x << "/" << y;
//
//	simplest_img(x, y);
//}
//
//void SUB(double N1, double N2, double D1, double D2)
//{
//	double x = N1*D2 - N2*D1;
//	double y = N2*D2;
//
//	cout << x << "/" << y;
//
//	simplest_img(x, y);
//}
//
//void MULTI(double N1, double N2, double D1, double D2)
//{
//	double x = N1*D1;
//	double y = N2*D2;
//
//	cout << x << "/" << y;
//
//	simplest_img(x, y);
//}
//
//void DIV(double N1, double N2, double D1, double D2)
//{
//	double x = N1*D2;
//	double y = N2*D1;
//
//	cout << x << "/" << y;
//
//	simplest_img(x, y);
//}
//
//int main()
//{
//	double size;
//	cin >> size;
//
//	char operation, rubbish;
//
//	if (size >= 1 && size <= 10000)
//	{
//		double a1, a2, b1, b2;
//
//		for (double i = 0; i < size; i++)
//		{
//			cin >> a1 >> rubbish >> a2 >> operation >> b1 >> rubbish >> b2;
//
//			if (a1 >= 1 && a2 >= 1 && b1 >= 1 && b2 >= 1)
//			{
//				if (a1 <= 1000 && a2 <= 1000 && b1 <= 1000 && b2 <= 1000)
//				{
//					switch (operation)
//					{
//					case '+':
//						SUM(a1, a2, b1, b2);
//						break;
//
//					case '-':
//						SUB(a1, a2, b1, b2);
//						break;
//
//					case '*':
//						MULTI(a1, a2, b1, b2);
//						break;
//
//					case '/':
//						DIV(a1, a2, b1, b2);
//						break;
//					}
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}