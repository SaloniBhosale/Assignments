#include<iostream>
using namespace std;
class ttime
{
 public:
 int hr; 
 int min;
 int sec;
 
 ttime()
 {
    this->hr=hr;
    this->min=min;
    this->sec=sec;
 }
 void inittime()
 {
    hr=0;
    min=0;
    sec=0;
 }
 void accept()
 {
   cout<<"enter time"<<endl;
   cin>>hr;
   cin>>min;
   cin>>sec;
 }
 void display()
 {
   cout<<hr;
   cout<<":"<<min;
   cout<<":"<<sec<<endl;
 }
void incrementTime() 
{
 sec++;
  if (sec>= 60) 
  {
    sec = 0;
    min++;
  }
  if (min>=60)
  {
    min= 0;
    hr++;
  }
  if(hr>=24)
  {
    hr=0;
  }
 cout<<"increamented time=";
}
};  
int main()
{
ttime t1;
t1.inittime();
t1.display();
t1.accept();
t1.display();
t1.incrementTime();
t1.display();
}
