#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
#define max_len 25
using namespace std;
class student
{
public:
	int Roll_no;
	char Name[max_len];
	int srno;
	char Cls[7];
	char Div[3];
	char DOB[10];
	char bldgrp[5];
	long int Contact;
	static int count; //Static data variable
	void getdata();
	friend void display(student & obj);

	student()		//constructor
      { 
		Roll_no:0;
		cout<<"\n Constructor";
		Roll_no=count;
		count++;
      }
	~student()		//destructor
      {
		cout<<"\n Destructor";
		cout<<"\n Destroying the Object";
		count++;
      }
	static void getcount()	//static member fuction
	{
		cout<<"\n count"<<count;
	}
	student(int Roll_no)  //parameterized constructor
	{
		this->Roll_no=Roll_no;
	}
	student(student & obj) // Copy constructor
	{
		Roll_no=obj.Roll_no;
		strcpy(Name,obj.Name);
		strcpy(Cls,obj.Cls);
		strcpy(Div,obj.Div);
		strcpy(DOB,obj.DOB);
		strcpy(bldgrp,obj.bldgrp);
		Contact=obj.Contact;
		srno=count;
		count++;
	}
};	//end of class	

	int student::count=0;//static variable default declaration
	void student::getdata()
{
	cout<<"\nEnter Name:";
	cin>>Name;
	cout<<"Enter Roll No:";
	cin>>Roll_no;
	cout<<"Enter class :";
	cin>>Cls;
	cout<<"Enter Div:";
	cin>>Div;
	cout<<"Enter Date Of Birth:";
	cin>>DOB;
	cout<<"Enter Blood group:";
	cin>>bldgrp;
	cout<<"Enter Contact No:";
	cin>>Contact;
}
	void display(student & obj) //friend Function
{
	cout<<"\n"<<obj.Roll_no;
	cout<<"\t"<<obj.Name;
	cout<<"\t"<<obj.Cls;
	cout<<"\t"<<obj.Div;
	cout<<"\t"<<obj.DOB;
	cout<<"\t"<<obj.Contact;
	cout<<"\t"<<obj.bldgrp;
}

int main()
{
	student s1;
	student s2(s1);  //copy constructor
	cout<<"\n Enter Data for 1st Student:"<<"\n";
	s1.getdata();
	cout<<"All the details are as below:";
	cout<<"\n\nRoll no\tName\tClass\tDiv\tDOB\tContact\tBlood Grp\n";
	display(s1);
	student *s[50];	//array of object
	int i,n;
	cout<<"\nHow many student objects do you want to create?";
	cin>>n;
	
	for (i=0;i<n;i++)
	{	
		s[i]=new student(); 
	}
	
	for(i=0;i<n;i++)
	{
		s[i]-> getdata();
	}
	cout<<"\nRoll no\tName\tClass\tDiv\tDOB\tContact\tBlood Grp\n";
	for (i=0;i<n;i++)
	{
		display(*s[i]);
	}
	for (i=0;i<n;i++)
	{
		delete (s[i]); 
	}
return 0 ;
}

/*

Constructor
Enter Data for 1st Student:

Enter Name:Shraddha
Enter Roll No:75
Enter class :SE-B
Enter Div:B
Enter Date Of Birth:13/01/2001
Enter Blood group:A+
Enter Contact No:7385597810
All the details are as below:

Roll no   Name       Class   Div     DOB     Contact         Blood Grp

75        Shraddha    SE      B    13/01/2001   7385597810       A+         


Roll no Name    Class   Div     DOB     Contact Blood Grp

 Destructor
 Destroying the Object
 Destructor
 Destroying the Object
--------------------------------




*/



