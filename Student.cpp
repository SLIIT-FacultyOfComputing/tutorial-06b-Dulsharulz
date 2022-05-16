#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int sid,const char sname[]) {
  sid=studentId;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"ÏD is"<<studentId<<endl;
  cout<<"Nmae is"<<name<<endl;
}
