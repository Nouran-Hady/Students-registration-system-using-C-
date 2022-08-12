#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;

class CStudent{
 		
	private:
 	string student_name;
    int student_ID;
    string student_email_username;
    string student_major;
    float student_grades[5] = {0, 0, 0, 0, 0};
    float student_score;
    string student_email_password;
 	
 	public:
 		CStudent();
 		void setStudentName(string name);
		string getStudentName(); 
		 
		void setStudent_ID(int ID); 
		int getStudent_ID(); 
		
		void setStudent_email_username(string email);
		string getStudent_email_username();
		
		void setStudent_major(string major);
		string getStudent_major();
		
		void setStudent_grades();
		float getStudent_grades();

		void setStudent_score(float score);
		float getStudent_score();
		
		void setStudent_email_password(string password);
		string getStudent_email_password();
		
		void registerStudent();
		void getStudentInfo(); 
		float claculateGPA();
		
		
		~CStudent();
	
 };
 
 class CPG_Student : public  CStudent{
	private:
	string pg_student_job_title;
	
	public:
		CPG_Student();
		void set_pg_student_job_title();
		string get_pg_student_job_title();
		~CPG_Student();
	
};

class ccourse
{
private:
    string course_name ;
    string course_code;
    float course_cost;

public:
    void    setaddcourse(string c);
    string  getaddcourse();
    void    setcoursecode(string v);
    string  getcoursecode();
    void  setcoursecost(float b);
	float  getcoursecost();	
    void    setcourseinfo();
     int    getcourseinfo();


    ccourse(){
    	course_name = "shape";
    	course_code = "CSCI";
    	course_cost = 0;
    	
	}
    ~ccourse(){
    		cout<< "The courses has been added" << endl;
    	
	}


  
};