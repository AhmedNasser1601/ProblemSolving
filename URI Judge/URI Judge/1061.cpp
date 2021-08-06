//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <string>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	string rubbish;
//	int di, hi, mi, si, df, hf, mf, sf;
//	int d_out = 0, h_out = 0, m_out = 0, s_out = 0;
//	bool h_ver = false, m_ver = false, s_ver = false;
//
//	cin >> rubbish >> di;
//	cin >> hi >> rubbish >> mi >> rubbish >> si;
//	cin >> rubbish >> df;
//	cin >> hf >> rubbish >> mf >> rubbish >> sf;
//
//	if (hi > hf)
//		h_ver = true;
//	if (mi > mf)
//		m_ver = true;
//	if (si > sf)
//		s_ver = true;
//
//	while (di != df)
//	{
//		d_out++;
//		di++;
//	}
//	while (hi != hf)
//	{
//		h_out++;
//		hi++;
//
//		if (hi == 25)
//			hi = 1;
//	}
//	while (mi != mf)
//	{
//		m_out++;
//		mi++;
//
//		if (mi == 61)
//			mi = 1;
//	}
//	while (si != sf)
//	{
//		s_out++;
//		si++;
//
//		if (si == 61)
//			si = 1;
//	}
//
//	if (h_ver == true)
//		d_out--;
//	if (m_ver == true)
//		h_out--;
//	if (s_ver == true)
//		m_out--;
//
//	cout << d_out << " dia(s)\n";
//	cout << h_out << " hora(s)\n";
//	cout << m_out << " minuto(s)\n";
//	cout << s_out << " segundo(s)\n";
//
//	return 0;
//}