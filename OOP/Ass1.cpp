#include<iostream>
using namespace std;

class complex
{
	private:
	float real;
	float imag;

	public:
	complex()			//default consturctor
	{
	   real=0;
	   imag=0;	
	}
	
	friend istream &operator>>(istream&in,complex&c);
	friend ostream &operator<<(ostream&out,complex&c);

	complex operator+(complex t);
	complex operator*(complex t);
};

istream &operator>>(istream&in,complex&c)
{
	cout<<"\n ENTER REAL AND IMAGINARY PARTS OF NUMBER:";
	in>>c.real>>c.imag;
}

ostream &operator<<(ostream&out,complex&c)
{
	cout<<"\n DISPLAY THE COMPLEX NUMBER:";
	out<<c.real<<"+"<<c.imag<<"i";			//IT WILL DISPLAY THE COMPLEX NUMBER IN A+iB FORM
}

complex complex::operator+(complex t)
{
	complex temp;
	temp.real=real+t.real;
	temp.imag=imag+t.imag;
	return temp;
}

complex complex::operator*(complex t)
{
	complex temp;
	temp.real=(real*t.real)-(imag*t.imag);
	temp.imag=(real*t.imag)+(t.real*imag);
	return temp;
}

int main()
{
	complex c1,c2,c3;
	
	cout<<"\n FOR 1ST COMPLEX NUMBER";
	cin>>c1;
	cout<<"first complex number is:"<<c1;

	cout<<"\n FOR SECOND COMPLEX NUMBER";
	cin>>c2;
	cout<<" second complex number is:"<<c2;
	
	int choice;
	
	cout<<"\n ENTER THE OPERATION WHICH IS TO BE PERFORMED:\n 1.ADDITION \n 2.MULTIPLICATION";
	cin>>choice;

	switch(choice)
	{
		case 1:cout<<"\n PERFORMING c1+ c2";
			c3=c1+c2;
			cout<<c3;
			break;
		case 2:cout<<"\n PERFORMING c1*c2";
			c3=c1*c2;
			cout<<c3;
			break;
		default: cout<<"INVALID CHOICE";
	}
}


/*

 FOR 1ST COMPLEX NUMBER
 ENTER REAL AND IMAGINARY PARTS OF NUMBER:5 5
 first complex number is:
 DISPLAY THE COMPLEX NUMBER:5+5i
 
 FOR SECOND COMPLEX NUMBER
 ENTER REAL AND IMAGINARY PARTS OF NUMBER:5 4
 second complex number is:
 DISPLAY THE COMPLEX NUMBER:5+4i
 
 ENTER THE OPERATION WHICH IS TO BE PERFORMED:
 1.ADDITION
 2.MULTIPLICATION    
 
 1

 PERFORMING c1+ c2
 DISPLAY THE COMPLEX NUMBER:10+9i
--------------------------------
Process exited after 31.06 seconds with return value 0
Press any key to continue . . .


*/

