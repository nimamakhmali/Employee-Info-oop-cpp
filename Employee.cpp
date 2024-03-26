//*************************************************************
//     Nima Makhmali  -----> Buali sina university of IRAN❤️
//*************************************************************
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
    virtual void calculateSalary()=0;
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
 class paramentEmp :public Employee
 {
  private:
   int monthlySalary;
  public:
   void inputInfo()
   {
    cout<<"Enter Monthly Salary : ";
    cin>>monthlySalary;
   }
   void calculateSalary() const
   {
     cout<<"Salray : "<<monthlySalary<<" per month"<<endl;
   }
 };
main() 
{
 	Employee *employee;
  int choice;
  do
  {
   cout<<"-----Main Menu----------\n";
   cout<<"1. Create Visiting Employee \n";
   cout<<"2. Create Parmanent Employee \n";
   cout<<"0. Exit Program \n";
   cout<<"Enter Your Choice : \n";
   cin>>choice;
   switch (choice)
   {
   case 1:
      	employee = new visitingEmployee();
    break;
   case 2:
    employee = new paramentEmp();
    break;
    case 0:
     cout<<"Exit program \n";
     break;
     default:
     cout<<"Invalid Number  Plz Enter Correct Number \n";
     continue;
   }
   if(choice !=0)
   {
    employee->inputInfo();
    employee->inputInfo();
    cout<<"\n";
    employee->displayInfo();
    employee->calculateSalary();
    delete employee; 
   }
  }while (choice !=0);
 }