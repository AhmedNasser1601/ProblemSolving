////Minimum & Maximum function
//#include<iostream>
//using namespace std;
//float Minimum(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float RemMin = 0)
//{
//	if (a <= b && a <= c && a <= d && a <= e && a <= f && a <= g && a <= h && a <= i && a <= j)
//		RemMin = a;
//	if (b <= a && b <= c && b <= d && b <= e && b <= f && b <= g && b <= h && b <= i && b <= j)
//		RemMin = b;
//	if (c <= a && c <= b && c <= d && c <= e && c <= f && c <= g && c <= h && c <= i && c <= j)
//		RemMin = c;
//	if (d <= a && d <= b && d <= c && d <= e && d <= f && d <= g && d <= h && d <= i && d <= j)
//		RemMin = d;
//	if (e <= a && e <= b && e <= c && e <= d && e <= f && e <= g && e <= h && e <= i && e <= j)
//		RemMin = e;
//	if (f <= a && f <= b && f <= c && f <= d && f <= e && f <= g && f <= h && f <= i && f <= j)
//		RemMin = f;
//	if (g <= a && g <= b && g <= c && g <= d && g <= e && g <= f && g <= h && g <= i && g <= j)
//		RemMin = g;
//	if (h <= a && h <= b && h <= c && h <= d && h <= e && h <= f && h <= g && h <= i && h <= j)
//		RemMin = h;
//	if (i <= a && i <= b && i <= c && i <= d && i <= e && i <= f && i <= g && i <= h && i <= j)
//		RemMin = i;
//	if (j <= a && j <= b && j <= c && j <= d && j <= e && j <= f && j <= g && j <= h && j <= i)
//		RemMin = j;
//	return RemMin;
//}
//float Maximum(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float RemMax = 0)
//{
//	if (a >= b && a >= c && a >= d && a >= e && a >= f && a >= g && a >= h && a >= i && a >= j)
//		RemMax = a;
//	if (b >= a && b >= c && b >= d && b >= e && b >= f && b >= g && b >= h && b >= i && b >= j)
//		RemMax = b;
//	if (c >= a && c >= b && c >= d && c >= e && c >= f && c >= g && c >= h && c >= i && c >= j)
//		RemMax = c;
//	if (d >= a && d >= b && d >= c && d >= e && d >= f && d >= g && d >= h && d >= i && d >= j)
//		RemMax = d;
//	if (e >= a && e >= b && e >= c && e >= d && e >= f && e >= g && e >= h && e >= i && e >= j)
//		RemMax = e;
//	if (f >= a && f >= b && f >= c && f >= d && f >= e && f >= g && f >= h && f >= i && f >= j)
//		RemMax = f;
//	if (g >= a && g >= b && g >= c && g >= d && g >= e && g >= f && g >= h && g >= i && g >= j)
//		RemMax = g;
//	if (h >= a && h >= b && h >= c && h >= d && h >= e && h >= f && h >= g && h >= i && h >= j)
//		RemMax = h;
//	if (i >= a && i >= b && i >= c && i >= d && i >= e && i >= f && i >= g && i >= h && i >= j)
//		RemMax = i;
//	if (j >= a && j >= b && j >= c && j >= d && j >= e && j >= f && j >= g && j >= h && j >= i)
//		RemMax = j;
//	return RemMax;
//}
//void main()
//{
//	float a, b, c, d, e, f, g, h, i, j;
//	while (true)
//	{
//		cout << "\n********************************************\n";
//		cout << "Please,, Enter (10) Numbers ...\n";
//		cout << "\t--->\t"; cin >> a;
//		cout << "\t--->\t"; cin >> b;
//		cout << "\t--->\t"; cin >> c;
//		cout << "\t--->\t"; cin >> d;
//		cout << "\t--->\t"; cin >> e;
//		cout << "\t--->\t"; cin >> f;
//		cout << "\t--->\t"; cin >> g;
//		cout << "\t--->\t"; cin >> h;
//		cout << "\t--->\t"; cin >> i;
//		cout << "\t--->\t"; cin >> j;
//		float Result_Min = Minimum(a, b, c, d, e, f, g, h, i, j);
//		cout << "The Minimum Number is ... [ " << Result_Min << " ]\n";
//		float Result_Max = Maximum(a, b, c, d, e, f, g, h, i, j);
//		cout << "The Maximum Number is ... [ " << Result_Max << " ]\n";
//	}
//}