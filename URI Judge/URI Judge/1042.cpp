//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	int original[3] = { 0 }, ascending[3] = { 0 };
//
//
//	//INPUT
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> original[i];
//		ascending[i] = original[i];
//	}
//
//
//	//PROCESSING
//	if (original[0] > original[1] && original[0] > original[2])
//	{
//		ascending[0] = original[0];
//
//		if (original[1] > original[2])
//		{
//			ascending[1] = original[1];
//			ascending[2] = original[2];
//		}
//		if (original[2] > original[1])
//		{
//			ascending[1] = original[2];
//			ascending[2] = original[1];
//		}
//	}
//
//	else if (original[1] > original[0] && original[1] > original[2])
//	{
//		ascending[0] = original[1];
//
//		if (original[0] > original[2])
//		{
//			ascending[1] = original[0];
//			ascending[2] = original[2];
//		}
//		if (original[2] > original[0])
//		{
//			ascending[1] = original[2];
//			ascending[2] = original[0];
//		}
//	}
//
//	else if (original[2] > original[0] && original[2] > original[1])
//	{
//		ascending[0] = original[2];
//
//		if (original[0] > original[1])
//		{
//			ascending[1] = original[0];
//			ascending[2] = original[1];
//		}
//		if (original[1] > original[0])
//		{
//			ascending[1] = original[1];
//			ascending[2] = original[0];
//		}
//	}
//
//
//	//OUTPUT
//	for (int i = 2; i >= 0; i--)
//		cout << ascending[i] << endl;
//
//	cout << endl;
//
//	for (int i = 0; i < 3; i++)
//		cout << original[i] << endl;
//
//	return 0;
//}