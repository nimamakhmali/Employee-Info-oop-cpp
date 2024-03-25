//**************************************************
//     Nima Makhmali  -----> Buali sina university
//**************************************************
#include <iostream>
 #include <string>
 using namespace std;

 class Employee
 {
  private:
    int employeeId;
    string employeeName;
  public:
    void inputBasicInfo()
    {
      cout<<" INPUT EMPLOYEE ID : ";
      cin>>employeeId;
      cout<<" INPUT EMPLOYEE NAME : ";
      cin.ignore();
      getline(cin,employeeName); 
    }
    void displayInfo()const
    {
      cout<<" ----------INFORMATION---------- ";
      cout<<"Employee Name : "<<employeeName<<endl;
      cout<<"Employee ID : "<<employeeId<<endl;
    }
     virtual void inputInfo()=0;
     virtual void displayInfo()const=0;
 };

 class visitingEmployee :public Employee
 {
  private:
   int numberofDays;
   float dailyWages;
  public:
   void inputInfo()
   {
    cout<<"Entry daily wages : ";
    cin>>dailyWages;
    cout<<"Enter Number of DAys : ";
    cin>>numberofDays;
   }
   void calculateSalary() const
   {
   	 float salary = dailyWages*numberofDays;
   	  cout<<"Salary : "<<salary<<endl;
   }
 };