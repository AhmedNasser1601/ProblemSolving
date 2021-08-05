////function to return Sum, Avg, Min, Max of 3 nums
//#include <iostream>
//using namespace std;
//int compute(int, int, int, double&, int&, int&);
//int main()
//{
//	int n1, n2, n3, sum, min, max; double average;
//	cout << "Enter three numbers:\n";
//	cin >> n1 >> n2 >> n3;
//	sum = compute(n1, n2, n3, average, min, max);
//	cout << "\tSum: " << sum << endl;
//	cout << "\tMin: " << min << endl;
//	cout << "\tAvg: " << average << endl;
//	cout << "\tMax: " << max << endl;
//	return 0;
//}
//int compute(int a, int b, int c, double& avg, int& min, int& max)
//{
//	avg = (a + b + c) / 3.0;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			max = a;
//			if (b > c)
//				min = c;
//			else
//				min = b;
//		}
//		else
//			max = c; min = b;
//	}
//	else
//	{
//		if (b > c)
//		{
//			max = b;
//			if (a > c)
//				min = c;
//			else
//				min = a;
//		}
//		else
//		{
//			max = c;
//			min = a;
//		}
//	}
//	return a + b + c;
//}