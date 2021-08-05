//#include <iostream>
//#include <fstream>
//#include <cstdio>
//#include <string>
//#include <cstring>
//#include <sstream>
//#include <cmath>
//#include <iomanip>
//#include <algorithm>
//#include <random>
//#include <vector>
//#include <ctime>
//#include <stack>
//#include <queue>
//#include <exception>
//
//using namespace std;
//
//struct node {
//	int data;
//	node* next;
//};
//
//node* head = NULL;
//
//void Add(int value) {
//	node* newNode = new node;
//	newNode->data = value;
//
//	if (head == NULL) {
//		head = newNode;
//		newNode->next = NULL;
//	}
//
//	else {
//		node* lastNode = head;
//
//		while (lastNode->next != NULL) {
//			lastNode = lastNode->next;
//		}
//
//		lastNode->next = newNode;
//		newNode->next = NULL;
//	}
//}
//
//void Delete(int value) {
//	node* current = head, * previous = head;
//
//	if (current->data == value) {
//		head = current->next;
//		free(current);
//		return;
//	}
//
//	while (current->data != value) {
//		previous = current;
//		current = current->next;
//	}
//
//	previous->next = current->next;
//	free(current);
//}
//
//void Display() {
//	node* currentNode = head;
//
//	if (head == NULL)
//		cout << "\t\tLinked List is Empty\n";
//
//	else {
//		cout << "\t->[ ";
//
//		while (currentNode != NULL) {
//			cout << currentNode->data;
//			currentNode = currentNode->next;
//
//			if (currentNode != NULL) cout << ", ";
//		}
//
//		cout << " ]<-\n";
//	}
//
//	cout << "\n\n -> Returning in (5)sec <-\n";
//	_sleep(5000);
//}
//
//int main() {
//	int option, var;
//
//	do {
//		system("cls");
//		var = NULL;
//
//		cout
//			<< "\n\n\tChoose an Operation\n"
//			<< "\n\t\t-> [1] to Add"
//			<< "\n\t\t-> [2] to Delete"
//			<< "\n\t\t-> [3] to Display"
//			<< "\n\t\t-> [0] to Exit"
//			<< "\n\n\tYour Choise is: ";
//		cin >> option;
//
//		if (option == 1) {
//			system("cls");
//			cout << "\n\n\tEnter Item you want to Add: ";
//			cin >> var;
//			Add(var);
//		}
//
//		else if (option == 2) {
//			system("cls");
//			cout << "\n\n\tEnter Item you want to Delete: ";
//			cin >> var;
//			Delete(var);
//		}
//
//		else if (option == 3) {
//			system("cls");
//			cout << "\n\n\tDisplay Linked-List Items\n\n";
//			Display();
//		}
//	} while (option != 0);
//
//	cout << "\n\n -> Program Ends in (3)sec <-\n";
//	_sleep(3000);
//	system("cls");
//
//	return 0;
//}