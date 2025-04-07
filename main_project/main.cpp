#include "students.h"
//void show(Student st) {
//	cout << "Name: " << st.name << endl;
//	cout << "Age: " << st.age << endl;
//	cout << "Mark: " << st.mark << endl;
//	cout << "Alive: " << (st.alive ? "Yes" : "No") << endl;
//}

int main() {
	Student st1, st2;
	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 7;
	st1.alive = true;

	st2.name = "Ivan";
	st2.age = 15;
	st2.mark = 9.2;
	st2.alive = true; 

	cout<<st1.getString()<<endl;
	cout<<st2.getString()<<endl;

	//string name = st1.mark > st2.mark ? st1.name : st2.name;
	/*Student t= st1.mark > st2.mark ? st1 : st2;
	cout << "Best student name is " << t.name << endl;*/
	return 0;
}