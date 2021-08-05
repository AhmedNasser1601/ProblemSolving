////Duplicate function
//#include<iostream>
//using namespace std;
//#define size 10
//void input(int arr[], int multiply_num)
//{
//	cout << "Enter (" << size << ") Numbers..\n";
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t--(" << i+1 << ")--> ";
//		cin >> arr[i];
//	}
//	cout << "\n\n";
//}
//void duplicate(int arr[], int multiply_num)
//{
//	for (int i = 0; i < size; i++)
//		arr[i] = arr[i] * multiply_num;
//}
//void display(int arr[])
//{
//	for (int i = 0; i < size; i++)
//		cout << "\t" << arr[i];
//	cout << "\n\n\n";
//}
//int main()
//{
//	cout << "\nEnter The Multiply Number:";
//	int multiply_num = 0;
//	cout << " ---> "; cin >> multiply_num;
//	int arr[size] = {};
//	input(arr, multiply_num);
//	display(arr);
//	for (int i = 0; i < size - 1; i++)
//	{
//		duplicate(arr, multiply_num);
//		display(arr);
//	}
//	system("pause");
//	return 0;
//}