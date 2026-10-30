//Q2. Employee Payroll Management System
//Company: Infosys
//OOP concepts: Inheritance, classes, member functions.
#include<iostream>
using namespace std;
class employee
{
    public:
    int empid;
    string name;
    float salary;
    void getdata()
    {
    	cout<<"\nenter employee id:";
    	cin>>empid;
    	cout<<"\nenter employee name:";
    	cin>>name;
    	cout<<"\nenter basic salary:";
    	cin>>salary;
	}
	void display()
	{
		cout<<"\n employee id:"<<empid<<endl;
		cout<<"\n employee name:"<<name<<endl;
		cout<<"\n basic salary:"<<salary<<endl;
	}
    
};
//derived class
class payroll: public employee
{
	public:
		float pai, mi, total;
		void calculate()
		{
			hra= salary*0.20;
			da= salary*0.10;
			total= salary+hra+da;
		}
		void display()
		{
			cout<<"\n hra:"<<hra;
			cout<<"\n da:"<<da;
			cout<<"\n total salary:"<<total<<endl;
		}
};
int main()
{
	payroll p;
	cout<<"employee payroll management system\n";
	
	p.getdata();
	p.calculate();
	
	cout<<"payslip\n";
	
	p.display();
	return 0;
}

