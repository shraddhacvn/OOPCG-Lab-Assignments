#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Item
{
    public:
    char name[20];
    int quantity;
    int cost;
    int code;
    bool operator==(const Item &i1)
    {
        if(code==i1.code)
            return 1;
        else
            return 0;
    }
    bool operator<(Item &i1)
    {
    if(code<i1.code)
        return 1;
    else
    	return 0;
    }
};
vector<Item>v1;
void print(Item &i1);
void display();
void search();
void insert();
void dlt();
int main()
{
    int ch;
    do
    {
        cout<<"\n*****MENU*****"<<endl;
        cout<<"1.INSERT"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.SEARCH"<<endl;
        cout<<"4.SORT"<<endl;
        cout<<"5.DELETE"<<endl;
        cout<<"6.EXIT"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                sort(v1.begin(),v1.end());
                cout<<"Sorted items are :";
                display();
                break;
            case 5:
                dlt();
                display();
                break;
            case 6:
                exit(0);
        }
               
    }while(ch!=7);
    return 0;
}
void insert()
{
        Item i1;
        cout<<"Enter the Name:";
        cin>>i1.name;
        cout<<"Enter the Quantity:";
        cin>>i1.quantity;
        cout<<"Enter cost:";
        cin>>i1.cost;
        cout<<"Enter code:";
        cin>>i1.code;
        v1.push_back(i1);
}
void display()
{
        for_each(v1.begin(),v1.end(),print);
}
void print(Item &i1)
{
        cout<<"\nName :"<<i1.name;
        cout<<"\nQuantity :"<<i1.quantity;
        cout<<"\nCost :"<<i1.cost;
        cout<<"\nCode :"<<i1.code;
}
void search()
{
        vector<Item>::iterator a;
        Item i1;
        cout<<"\nEnter Item code to be search:";
        cin>>i1.code;
        a=find(v1.begin(),v1.end(),i1);
        if(a!=v1.end())
            cout<<"Item code is Found";
        else
            cout<<"not Found";
}
void dlt()
{
        vector<Item>::iterator a;
        Item i1;
        cout<<"\nEnter Item code to be deleted:";
        cin>>i1.code;
        a=find(v1.begin(),v1.end(),i1);
        if(a!=v1.end())
        {
            v1.erase(a);
            cout<<"Item deleted";
        }
        else
        {
            cout<<"\nNot found";
        }
}


/*

*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:1
Enter the Name:Oil
Enter the Quantity:4
Enter cost:150
Enter code:111

*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:1
Enter the Name:Sugar
Enter the Quantity:5
Enter cost:80
Enter code:222

*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:1
Enter the Name:Soap
Enter the Quantity:10
Enter cost:40
Enter code:333

*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:2

Name :Oil
Quantity :4
Cost :150
Code :111
Name :Sugar
Quantity :5
Cost :80
Code :222
Name :Soap
Quantity :10
Cost :40
Code :333
*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:3

Enter Item code to be search:222
Item code is Found
*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:4
Sorted items are :
Name :Oil
Quantity :4
Cost :150
Code :111
Name :Sugar
Quantity :5
Cost :80
Code :222
Name :Soap
Quantity :10
Cost :40
Code :333
*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:5

Enter Item code to be deleted:111
Item deleted
Name :Sugar
Quantity :5
Cost :80
Code :222
Name :Soap
Quantity :10
Cost :40
Code :333
*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:2

Name :Sugar
Quantity :5
Cost :80
Code :222
Name :Soap
Quantity :10
Cost :40
Code :333
*****MENU*****
1.INSERT
2.DISPLAY
3.SEARCH
4.SORT
5.DELETE
6.EXIT
Enter your choice:6

--------------------------------
Process exited after 112.9 seconds with return value 0
Press any key to continue . . .




*/


    
	


