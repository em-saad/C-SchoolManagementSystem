#include<iostream>
using namespace std;

class person{
	protected:
		string name;
		int age;
		string adress;
		public:
			void getInfo(string n,int a,string add){
				name=n;
				age=a;
				adress=add;
			}
};
class student:public person{
	private:
		float gpa;
		string grade;
		int rollnumber;
		int courseNum;
		int credits;
	public:
	
	void getStudent(float g,string gra,int r,int c,int cred){
		gpa=g;
		grade=gra;
		rollnumber=r;
		courseNum=c;
		credits=cred;
	}	
		
void displayStudent(){
	cout<<"--------------------"<<endl<<"Students Data:"<<endl;
	cout<<"Name:"<<name<<" Age:"<<age<<" City:"<<adress<<endl;
	cout<<" Roll number:"<<rollnumber<<" Registered Courses:"<<courseNum<<" Total Credits:"<<credits;
	cout<<"--------------------"<<endl;
}		
};
class teacher:public person{
	private:
	float salary;
	int coursesoftecher;
	int teacherID;
	string subject;
	string department;
public:
	void getTeacher(float sal,int courseT,int TID,string sub,string dept){
		salary=sal;
		coursesoftecher=courseT;
		teacherID=TID;
		subject=sub;
		department=dept;
		
	}
	void displayTeachers(){
		cout<<"--------------------"<<endl<<"Teacher Details:"<<endl;
		cout<<"Name:"<<name<<" Age:"<<age<<" Address:"<<adress<<endl;
		cout<<"Teacher ID:"<<teacherID<<" Course:"<<coursesoftecher<<" Subject:"<<subject<<" Department:"<<department<<" Salary:"<<salary;
		cout<<"--------------------"<<endl;
	}
		
		
};
class staff:public person{
	private:
		float salary;
		int staffID;
		string rank;
public:
	void getStaff(float salar,int SID,string ran){
		salary=salar;
		staffID=SID;
		rank=ran;
		
	}
	void displayStaff(){
		cout<<"--------------------"<<endl<<"Staff  Details"<<endl;
		cout<<"Name:"<<name<<" Age:"<<age<<" Address:"<<adress<<endl;
		cout<<"Staff ID:"<<staffID<<" Rank:"<<rank<<" Salary:"<<salary;
		cout<<"--------------------"<<endl;
	}
};
int main()
{
	// Students Data
	student s1;
	teacher t1;
	staff S1;
	s1.getInfo("Saad",23,"FSD");
	s1.getStudent(3.00,"A+",34,6,18);
	s1.displayStudent();
	
	// Teachers Data
	t1.getInfo("Dr Fayyaz",30,"FSD");
	t1.getTeacher(20.00,1,1234,"OOP","CS");
	t1.displayTeachers();
	
	//Staff Data
	S1.getInfo("Temp",20,"FSD");
	S1.getStaff(10.00,124,"Admin");
	S1.displayStaff();
	
}

