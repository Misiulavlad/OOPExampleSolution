#include "students.h"
//void show(Student st) {
//	cout << "Name: " << st.name << endl;
//	cout << "Age: " << st.age << endl;
//	cout << "Mark: " << st.mark << endl;
//	cout << "Alive: " << (st.alive ? "Yes" : "No") << endl;
//}

void change(Student &student) {
	student.name = "Dimka";
	student.age = 58;
	student.mark = 2.3;
	student.alive = false;
}


int main() {
	Student st1, temp;
	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 7;
	st1.alive = true;

	temp = st1;

	st1.name = "Vovan";

	cout << "Before:" << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;

	change(st1);

	cout << "After:" << endl;
	cout << st1.getString() << endl;
	

	//string name = st1.mark > st2.mark ? st1.name : st2.name;
	//student t= st1.mark > st2.mark ? st1 : st2;
	//cout << "best student name is " << t.name << endl;
	return 0;
}