#include "Student.h"
#include <iostream>
using namespace std;

void Student::assign_Details(int s_id,const char* n) {
	student_id = s_id;
	name = n;
}

void Student::display() {
	cout << student_id<<endl;
	cout << name<<endl;
}
