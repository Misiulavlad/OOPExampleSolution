#include "Teacher.h"

int main() {
	Student* list = nullptr;
	int size;

	cout << "Input numbers of students: ";
	cin >> size;

	list = new Student[size];

	cout << "Input data of student"<<endl;

	for (int i = 0; i < size; i++) {
		cout << "name: ";
		cin >> list[i].name;

		cout << "age: ";
		cin >> list[i].age;

		cout << "average mark: ";
		cin >> list[i].mark;

		cout << "is alive (y/n): ";
		char answer;
		cin >> answer;
		list[i].alive = islower(answer) == 'y';

	}

	Teacher teacher;
	Student res = teacher.getAllBestStudents(list, size);
	string msg = res.alive ? res.name : "No best studets";
	cout << msg;
	return 0;
}