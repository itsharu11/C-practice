#include<iostream>
using namespace std;
class student
{
		private:
			char name[20];
			int marks;
			int no;
		public:
			void getdata();
			void putdata();

};
void student::getdata()
{
		cout<<"\n Enter Name,marks,no";
		cin>>name>>marks>>no;
}
void student::putdata()
{
		cout<<"Name : "<<name<<"\n Marks :"<<marks<<"\n no"<<no;
}
int main()
{
		student s1;
		s1.getdata();
		s1.putdata();
		return 0;
}
