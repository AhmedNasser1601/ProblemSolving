//#include <iostream>
//
//using namespace std;
//
//const int MAXIMUM = 100;
//
//template <class t>
//
//class Stack {
//private:
//	int top;
//	t item[MAXIMUM];
//
//public:
//	Stack() :top(-1) {}
//
//	void push() {
//		system("cls");
//
//		t Element;
//		cout << "Enter The Number you want to Push: ";
//		cin >> Element;
//
//		if (top >= MAXIMUM - 1)
//			cout << "Stack Full on Push\n";
//
//		else {
//			top++;
//			item[top] = Element;
//		}
//	}
//
//	bool isEmpty() { return top < 0; }
//
//	void pull() {
//		system("cls");
//
//		if (isEmpty())
//			cout << "Stack Empty on Pull\n";
//
//		else {
//			top--;
//			cout << "Pulled Successfully\n";
//		}
//	}
//
//	void getTop() {
//		system("cls");
//
//		if (isEmpty())
//			cout << "Stack Empty on getTop\n";
//
//		else
//			cout << "The Top Element is: " << item[top] << endl;
//	}
//
//	void printNormal() {
//		system("cls");
//
//		cout << "\t-> Normal <-\n[";
//
//		for (int i = 0; i <= top; i++) {
//			cout << item[i];
//
//			if (i != top)
//				cout << ", ";
//		}
//		cout << "]\n";
//	}
//
//	void printReversed() {
//		system("cls");
//
//		cout << "\t-> Reversed <-\n[";
//
//		for (int i = top; i >= 0; i--) {
//			cout << item[i];
//
//			if (i != 0)
//				cout << ", ";
//		}
//		cout << "]\n";
//	}
//};
//
//bool toMain(int toMenu) {
//	do {
//		cout << "\n\n\t-> To go Menu Enter [0]: ";
//		cin >> toMenu;
//
//		if (toMenu == 0)
//			return true;
//	} while (toMenu != 0);
//};
//
//int main() {
//	Stack<int>stack_1;
//	int option, toMenu = 1;
//
//	do {
//		system("cls");
//
//		toMenu = 1;
//
//		cout
//			<< "--> Welcome to Stack <--\n\n"
//			<< "\t-> [1] Push\n"
//			<< "\t-> [2] Pull\n"
//			<< "\t-> [3] Print Normal\n"
//			<< "\t-> [4] Prit Reversed\n"
//			<< "\t-> [5] get Top\n"
//			<< "\t-> [0] Exit\n\n";
//
//		cout << "Your Choise is: ";
//		cin >> option;
//
//		switch (option) {
//		case 1:
//			stack_1.push();
//			toMain(toMenu);
//			break;
//
//		case 2:
//			stack_1.pull();
//			toMain(toMenu);
//			break;
//
//		case 3:
//			stack_1.printNormal();
//			toMain(toMenu);
//			break;
//
//		case 4:
//			stack_1.printReversed();
//			toMain(toMenu);
//			break;
//
//		case 5:
//			stack_1.getTop();
//			toMain(toMenu);
//			break;
//
//		case 0:
//			toMenu = 0;
//			break;
//		}
//	} while (toMenu != 0);
//
//	return 0;
//}