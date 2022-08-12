#include "student.h"
#include <iostream>
using namespace std;
 
 
int to_registeration();
void to_CStudent();
void Exit();
 
int main ()
{
    int choise=0;
    cout<<" **************************************\n";
    cout<<" * Choose The Operation You Want To Do*\n";
    cout<<" **************************************\n";
    cout<<" \n\n";
    cout<<"1) Registeration and Courses \n2) Students\n3)Exit\n ";
    cin>>choise;
    switch(choise){
        case 1:
        to_registeration();
        break;
        case 2:
        to_CStudent();
        break;
        case 3:
Exit();
break;
        default :
   cout<<"Your choise is invalid please choose again";
   to_registeration();
     return 0;
    }
}
 
void Exit(){
exit(1);
}
 
int to_registeration()
{
 
int choise;
 
do{
cout<<"1 Enter the student's information that you want to be added" <<endl;
cout<<"2 Enter the pos student's information that you want to be added " <<endl;
cout<<"3 Enter the Number of courses you want to be added " << endl;
cout<<"4 To Exit " << endl;
cin >> choise;
switch (choise)
{
 
 case 1 :
CStudent *student;
 
int n_students,i;
cout<<" Enter the Number of students to be registered in the system: \n ";
cin>> n_students;
student = new CStudent[n_students];
for(i=0;i<n_students;i++){
student[i].registerStudent();
cout << " ... ... ... ... ... ... " << endl;
}
for(i=0;i<n_students;i++){
student[i].getStudentInfo();
cout << " ... ... ... ... ... ... " << endl; }
 
delete[] student;
break;
 
 case 2 :
CPG_Student *x_student;
 
 int pos_students,v;
cout<<" Enter the Number of students to be registered in the system: \n ";
cin>> pos_students;
x_student = new CPG_Student[pos_students];
for(v=0;v<pos_students;v++){
x_student[v].registerStudent();
x_student[v].set_pg_student_job_title();
cout << " ... ... ... ... ... ... " << endl;
}
for(v=0;v<pos_students;v++){
x_student[v].getStudentInfo();
x_student[v].get_pg_student_job_title();
cout << " ... ... ... ... ... ... " << endl;
}
 
delete[] x_student;
break;
 
 case 3:
ccourse *n;
int n_courses;
cout << " Enter number of courses you want to be added: ";
cin >> n_courses;
n = new ccourse[n_courses];
for(int x = 0; x< n_courses; x++){
n[x].setaddcourse(" Name " + to_string(x+1));
cout << n[x].getaddcourse() << endl;
cout << " ... ... ... ... ... ...." << endl;
n[x].setcourseinfo();
}
for(int x = 0; x< n_courses; x++){
cout << " ... ... ... ... ... ... " << endl;
n[x].getcourseinfo();
}
delete[] n;
break;
case 4:
Exit();
break;
 
default :
   cout<<"Your choise is invalid please choose again";
   to_registeration();
}
}
 
while(choise!=0);
return 0;
 
}
 
     
 
void to_CStudent(){
    int choise=0,id;
    string namestudent;
    CStudent student1;
    do{
cout<<"1) Change Student  Name " <<endl;
cout<<"2) Change Student ID " <<endl;
cout<<"3) Change Student Major\n4) Enter  Student grades and claculate GPA\n";
cout<<"5) To Exit: " <<endl;
cin >> choise;
 
switch (choise)
    {
 
   case 1 :
   cout<<"Enter the new name \n";
   cin>>namestudent;
   student1.setStudentName(namestudent);
   break;
   case 2 :
   cout<<"Enter the new ID \n";
   cin>>id;
   student1.setStudent_ID(id);
   break;
   case 3 :
   cout<<"Enter the new Major \n";
   cin>>namestudent;
   student1.setStudent_major(namestudent);
   break;
   case 4 : 
   student1.setStudent_grades();
   student1.claculateGPA();
   break;
   case 5:
   Exit();
   break;
   default :
   cout<<"Your choise is invalid please choose again \n";
   to_CStudent();}
    }
   while(choise!=0);
}