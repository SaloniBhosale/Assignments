#include<iostream>
using namespace std;
class employee
{
 int empID;
 string empName;
 int empsalary;
 public:
 employee()
 {
    this->empID=empID;
    this->empName=empName;
    this->empsalary=empsalary;
 }
 void accept()
 {
  cout<<"emp name is";
  cin>>empName;
  cout<<"Emp id is";
  cin>>empID;
  cout<<"emp salary is";
  cin>>empsalary;
 }
 void display()
 {
    cout<<empName<<endl;
    cout<<empID<<endl;
    cout<<empsalary<<endl;
 }
};
int main()
{
    employee e1;
    e1.accept();
    e1.display();
}
