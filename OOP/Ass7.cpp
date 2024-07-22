#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;

int main()
{
	map<string,int>poplMap;
	string state_name, name;
	int number, n;
	char ans;
	cout<<"\n How many states's population you want to enter? ";
	cin>>n;

	cout<<"\n Enter State Name and Population: \n";
	for(int i=0; i<n; i++)
	{
		cin>>name>>number;
		poplMap[name]=number;
	}
	
	poplMap.insert(pair<string, int>("Maharashtra",100000));
	map<string,int>::iterator iter;
	cout<<"\n-------Population of state---------\n";
	cout<<"\n Size of Population Map: "<<poplMap.size()<<"\n";
	
	for(iter=poplMap.begin(); iter!=poplMap.end(); iter++)
	{
		cout<<iter->first<<" : "<<iter->second<<"\n";
	} 
	
	do{

		cout<<"\n Enter the name of state : ";
		cin>>state_name;
		iter = poplMap.find(state_name);

		if(iter!=poplMap.end())
		{
			cout<<state_name<<" 's population is "<<iter->second<<endl;
			cout<<"Doyou want to continue (y/n): ";
			cin>>ans;
		}
		else
		{
			cout<<"Key is not present in poplMap"<<"\n";
		}
		poplMap.clear();
	
	}while(ans='y');

	return 0;
	
}	


/*

 How many states's population you want to enter? 3

 Enter State Name and Population:
Goa 20000
Delhi 50000
Assam 40000

-------Population of state---------

 Size of Population Map: 4
Assam : 40000
Delhi : 50000
Goa : 20000
Maharashtra : 100000

 Enter the name of state : Goa
Goa 's population is 20000
Doyou want to continue (y/n): y

 Enter the name of state : MP
Key is not present in poplMap


*/
