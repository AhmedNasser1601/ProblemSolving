//#include <iostream>
//
//using namespace std;
//
//int main() {
//	cout << "Enter the number of Elements: ";
//	int* limit = new int; cin >> *limit;
//
//	if (*limit <= 0) {
//		cout << "\n\n\tGood Bye\n\n"; return 0;
//	}
//
//	int* remainder = new int;
//	int* num = new int;
//	int* power = new int;
//	float* temp = new float;
//
//	int* arr1 = new int[*limit];
//	int* arr2 = new int[*limit];
//
//	cout << "Enter " << *limit << " element(s)\n";
//	for (int i = 0; i < *limit; i++) {
//		cin >> arr1[i];
//
//		*num = arr1[i];
//		arr2[i] = 0;
//		*power = 0;
//
//		while (*num >= 1) {
//			*remainder = *num % 2;
//			arr2[i] += *remainder * pow(10, *power);
//			*num /= 2;
//			(*power)++;
//		}
//	}
//
//	cout << "The Binary representation is\n";
//	for (int i = 0; i < *limit; i++)
//		cout << arr1[i] << " --> " << arr2[i] << "\n";
//
//	cout << endl << endl << endl;
//
//	arr1 = NULL;
//	arr2 = NULL;
//	num = NULL;
//	limit = NULL;
//	remainder = NULL;
//	temp = NULL;
//	power = NULL;
//
//	delete[] arr1;
//	delete[] arr2;
//	delete num;
//	delete limit;
//	delete remainder;
//	delete temp;
//	delete power;
//
//	return main();
//}