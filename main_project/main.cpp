#include "students.h"
//void show(Student st) {
//	cout << "Name: " << st.name << endl;
//	cout << "Age: " << st.age << endl;
//	cout << "Mark: " << st.mark << endl;
//	cout << "Alive: " << (st.alive ? "Yes" : "No") << endl;
//}

void change(Student& student) {
	student.name = "Dimka";
	student.age = 58;
	student.mark = 2.3;
	student.alive = false;
}


int main() {
	Student* st1 = new Student;

	st1->name = "Vlad";
	st1->age = 0;
	st1->mark = 9.9;
	st1->alive = true;

	Student* st2 = st1;

	cout << "Before: " << endl;
	cout << st1->getString() << endl;

	st2->name = "Matvey";

	cout << "After: " << endl;
	cout << st1->getString() << endl;
	return 0;
}