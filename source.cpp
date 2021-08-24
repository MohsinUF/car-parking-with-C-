#include<iostream>
using namespace std;
int main()
{
	int u_input; int amount = 0,count = 0;
	int car = 0,bike = 0,van = 0;
	
while(true){
	cout<<"\n The Menu \n"<<endl;
	cout<<"\t\tPress 1 for Covered Van"<<endl;
	cout<<"\t\tPress 2 for Car"<<endl;
	cout<<"\t\tPress 3 for Bike"<<endl;
	cout<<"\t\tPress 4 for Show Record"<<endl;
	cout<<"\t\tPress 5 for Delete Record"<<endl;
	
	cin>>u_input;
	 if(u_input==1)
	{
		if(count<=50){
		amount = amount + 100 ;
		count = count + 1;
		van = van + 1;
	}
	else
	cout<<"No space left!<<endl";
	}
	else if(u_input==2)
	{
		if(count<=50){
		amount = amount + 200 ;
		count = count + 1;
		car = car + 1;
	}
	else
	cout<<"No space left!<<endl";
	}
	else if(u_input==3)
	{
		if(count<=50){
		amount = amount + 300 ;
		count = count + 1;
		bike = bike+1; 
		}
		else
		cout<<"No space left!"<<endl;
	}
	else if(u_input==4)
	{
		cout<<"*************************************"<<endl;
		cout<<"The total amount = "<<amount<<endl;
		cout<<"The total number of Vehicals Parked = "<<count<<endl;
	    	cout<<"The total number of Cars = "<<car<<endl;
		cout<<"The total number of Bikes = "<<bus<<endl;
		cout<<"The total number of Covered Vans = "<<ricksha<<endl;
		cout<<"*************************************";
	}
	else if(u_input==5)
	{
		cout<<"*************************************"<<endl;
		amount = 0 ;
		count = 0 ;
		car = 0;
		bike = 0;
		van = 0;
		cout<<"*************************************"<<endl;
		cout<<"Record Deleated"<<endl;
		cout<<"*************************************"<<endl;
	}
	else{
       cout<<"Error 404!"<<endl;
   }
}
	return 0;
}
