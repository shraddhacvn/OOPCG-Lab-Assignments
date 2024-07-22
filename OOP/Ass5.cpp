#include<iostream>
using namespace std;

template <class T>
class sort
{
	public:	
	
		T a[100], temp;
		int n,i;
		void read();
		void display();
		void selectionsort();
};

template <class T>
void sort<T> :: read()
{
	cout<<"Enter the no. of elements: \n";
	cin>>n;
	
	cout<<"Enter elements of array: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
}

template <class T>
void sort<T> :: display()
{
	
	cout<<" \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

template <class T>
void sort<T> :: selectionsort()
{
	int i,j,min;
	for(i=0; i<n;i++)
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

int main()
{
	int len,i,ch;
	
	sort <int> i1;
	sort <float> f1;
	sort <char> c1;
	sort <string> s1[100];
	
	do
	{
		cout<<"\n\t\t\t----------Menu---------";
		cout<<"\n\t\t1.Integer Array";
		cout<<"\n\t\t2.Float Array"; 
		cout<<"\n\t\t3.Character Array"; 
		cout<<"\n\t\t4.String Array"; 
		cout<<"\n\t\t5.Exit"; 
		
		cout<<"\nEnter your choice: "; 
		cin>>ch;
	
		
	switch(ch)
	{
		case 1: cout<<"\n------Integer Array-------"<<endl;
			i1.read();
			cout<<"\n Initial Array is: "<<endl;
			i1.display();
			i1.selectionsort();
			cout<<"\n Sorted Array is: "<<endl;
			i1.display();
			cout<<"\n"<<endl;
			break;


		case 2: cout<<"\n------Float Array-------"<<endl;
			f1.read();
			cout<<"\n Initial Array is: "<<endl;
			f1.display();
			f1.selectionsort();
			cout<<"\n Sorted Array is: "<<endl;
			f1.display();
			cout<<"\n"<<endl;
			break;

		case 3: cout<<"\n------Character Array-------"<<endl;
			c1.read();
			cout<<"\n Initial Array is: "<<endl;
			c1.display();
			c1.selectionsort();
			cout<<"\n Sorted Array is: "<<endl;
			c1.display();
			cout<<"\n"<<endl;
			break;

		case 4: cout<<"\n------String Array-------"<<endl;
			cout<<"Enter length of string: "<<endl;
			cin>>len;
			s1[i].read();
			s1[i].display();
			cout<<"\n Sorted String is: "<<endl;
			for(i=0; i<len;i++)
			{
				s1[i].selectionsort();
				s1[i].display();
			}
			cout<<"\n"<<endl;
			break;
		
		default:cout<<"Exit";
			break;

	}
	}while(ch!=5);

	return 0;
}

/*


                        ----------Menu---------
                1.Integer Array
                2.Float Array
                3.Character Array
                4.String Array
                5.Exit
Enter your choice: 1

------Integer Array-------
Enter the no. of elements:
5
Enter elements of array:
99
67
-7
6
23


 Initial Array is:

99      67      -7      6       23
 Sorted Array is:

-7      6       23      67      99


                        ----------Menu---------
                1.Integer Array
                2.Float Array
                3.Character Array
                4.String Array
                5.Exit
Enter your choice: 2

------Float Array-------
Enter the no. of elements:
3
Enter elements of array:
9.0
15.3
6.4


 Initial Array is:

9       15.3    6.4
 Sorted Array is:

6.4     9       15.3


                        ----------Menu---------
                1.Integer Array
                2.Float Array
                3.Character Array
                4.String Array
                5.Exit
Enter your choice: 3

------Character Array-------
Enter the no. of elements:
4
Enter elements of array:
z
t
b
e


 Initial Array is:

z       t       b       e
 Sorted Array is:

b       e       t       z


                        ----------Menu---------
                1.Integer Array
                2.Float Array
                3.Character Array
                4.String Array
                5.Exit
Enter your choice: 5
Exit
--------------------------------
Process exited after 154.9 seconds with return value 0
Press any key to continue . . .



*/




