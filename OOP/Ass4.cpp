#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int roll;
	char name[20];
	char address[50];
	long int number;
	char search[50];
	//write to a file
	ofstream fout("studentInfo.txt"); 
	cout<<"Enter Roll No.: ";
	cin>>roll;
	fout<<roll<<endl;
	
	cout<<"Enter Student's Name: ";
	cin.ignore();
	cin.getline(name,20);
	fout<<name<<endl;
	
	cout<<"Enter Address: ";
	cin.ignore();
	cin.getline(address,50);
	fout<<address<<endl;
	cout<<"studentInfo.txt is created and Info is added !!! ";

	fout.close();

	ifstream inf;
	inf.open("studentInfo.txt");
	inf>>roll;
	inf>>name;
	inf>>address;
	
	inf.close();

	fstream f;
	f.open("studentInfo.txt", ios::app|ios::out);
	cout<<"\n\nstudentInfo.txt is opened !";
	cout<<"\nEnter Mobile Number: ";
	cin>>number;
	f<<number;
	cout<<"\nMobile number is added successfully...";
	f.close();

	
}


/*

Enter Roll No.: 34
Enter Student's Name: Shraddha
Enter Address: Nashik
studentInfo.txt is created and Info is added !!!

studentInfo.txt is opened !
Enter Mobile Number: 7385597810

Mobile number is added successfully...
--------------------------------
Process exited after 21.72 seconds with return value 0
Press any key to continue . . .


*/
