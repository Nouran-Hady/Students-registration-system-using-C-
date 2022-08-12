#include "student.h"
#include <iostream>


CStudent::CStudent()
{
}
void CStudent:: setStudentName(string name){
	student_name=name;
} 
void CStudent:: setStudent_ID(int ID){
	student_ID=ID;
}

void CStudent:: setStudent_email_username(string email){
	student_email_username= email;
	
}
void CStudent:: setStudent_major(string major){
	student_major=major;
}
void CStudent:: setStudent_grades(){
	int i=0;
	for (;i<5;i++){
		cout<<"Enter Grade Number "<<i+1<<"\n";
		cin>>student_grades[i];
	}
}
void CStudent:: setStudent_score(float score){
	student_score=score;
}
void CStudent:: setStudent_email_password(string password){
	student_email_password=password;
}


string CStudent::getStudentName()
{
    return student_name;
}

int CStudent::getStudent_ID()
{
    return student_ID;
}

string CStudent::getStudent_email_username()
{
    return student_email_username;
}

string CStudent::getStudent_major()
{
    return student_major;
}

float CStudent::getStudent_grades()
{
	int i=0;
	cout<<"Grades are "<<"\n";
	for (;i<5;i++){
		cout<<student_grades[i]<<"\t";
	}
}

float CStudent::getStudent_score()
{
    return student_score;
}

string CStudent::getStudent_email_password()
{
	return student_email_password;
}


void CStudent::registerStudent(){
	cout<<" ****************\n";
	cout<<" * STUDENT REGISTRATION AND MARK LIST SYSTEM *\n";
	cout<<" ****************\n";
	cout<<" \n";
	cout<<"Enter Student Name: "<<"\n";
	cin>>student_name;

	cout<<"Enter Student ID: "<<"\n";
	cin>>student_ID;
	
	cout<<"Enter Student Email Username: "<<"\n";
	cin>> student_email_username;
	
	cout<<"Enter Student Major: "<<"\n";
	cin>>student_major;
	
	cout<<"Enter Student Email Password: "<<"\n";
	cin>>student_email_password;

	cout<<"Student Regestered successfully "<<"\n";

}
void CStudent::getStudentInfo(){
cout << "Student details:\n";
cout << "Name:"<< student_name <<"\n"
<< "student ID:" << student_ID << "\n"
<<"student email username:" << student_email_username << "\n"
<<"student major:" << student_major << "\n"
<<"student grades:" << student_grades << "\n"
<<"student score:" << student_score << "\n"
<<"student email password:" << student_email_password << "\n";
}
	
float CStudent::claculateGPA(){
	float grade_sum=0;
	int i;
	for (i=0;i<5;i++){
		grade_sum=grade_sum+ student_grades[i];
	}
	student_score=(grade_sum/100);
	cout<<"Student GPA "<<student_score<<"\n";
	}

CStudent::~CStudent(){
}
CPG_Student::CPG_Student(){
}

void CPG_Student::set_pg_student_job_title(){
	cout<<"Enter the title of the pos student: "<<"\n";
	cin>>pg_student_job_title; 
	cin.clear();

}
string CPG_Student::get_pg_student_job_title(){
	
	cout<< "the job title is:  " << pg_student_job_title;
}
CPG_Student::~CPG_Student(){
}





void ccourse::setaddcourse(string c)
{

	course_name = c;

}
string ccourse::getaddcourse()
{
	return course_name;


}

void ccourse::setcoursecode(string v)
{

	course_code = v;

}
string ccourse::getcoursecode()
{
	return course_code;


}
void ccourse::setcoursecost(float b)
{
	   
	   course_cost = b;

}
float ccourse::getcoursecost(){
	return course_cost;
}

void ccourse::setcourseinfo(){
	
		cout << "Enter name of course: ";
     	cin >> course_name;
		cout << "Enter code of course: ";
	    cin >> course_code;
	    cout << "Enter cost of course: ";
	    cin>> course_cost;
	

	
}
int ccourse::getcourseinfo(){
	cout << "Course name: " << course_name << endl;
	cout << "Course code: " << course_code << endl;
	cout << "Course cost: " << course_cost << endl;
	cout <<"................................."<< endl;
	
	
}