//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a, b, c, d, e, f, g, h, i, j, N, p, q, r;
//
//	cin >> N;
//
//	while (N != 0) {
//
//		int M[100][100];
//
//		j = 1;
//		p = 0;
//		q = 0;
//
//		i = N;
//
//		if (N % 2 == 0)
//			r = N / 2;
//
//		else if (N % 2 == 1)
//			r = (N / 2) + 1;
//
//		for (c = 1; c <= r; c++) {
//			for (a = p; a < i; a++)
//				for (b = q; b < i; b++)
//					M[a][b] = j;
//
//			j++;
//			p++;
//			q++;
//			i--;
//		}
//
//		for (g = 0; g < N; g++) {
//			for (h = 0; h < N; h++) {
//				if (h == 0)
//					printf("%3d", M[g][h]);
//
//				else
//					printf(" %3d", M[g][h]);
//			}
//
//			cout << endl;
//		}
//
//		cout << endl;
//
//		cin >> N;
//	}
//
//	return 0;
//}