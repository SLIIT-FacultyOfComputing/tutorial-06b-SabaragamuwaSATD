#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails() {
  studentId=pstudentId;
  strcpy_s(name,pname);//destination array and sourse array
}

// Display StudentId and Name
void Student::display() {
  cout << "student id is:" << studentId << endl;
  cout << "Name is:" <<name << endl;
}
