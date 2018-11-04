//including library
#include<iostream> 
//namespace
using namespace std;   

		int main()
		{
			//variable declaration
			char name[50],*chptr;
			chptr=name;
			//asks user to enter his/her name
			cout<<"Enter your name: "<<endl;
			cin>>name;
			//displays the user's name 
			//normal index method
			cout<<"Normal index method: "<<endl;
			for(int i=0;name[i]!='\0';i++)
			{
				cout<<name[i];
			}
		 
			cout<<endl;

			//pointer method
			cout<<"Pointer method: "<<endl;
			while(*chptr!='\0')
			{
				cout<<*chptr;
				chptr++;
			}
			cout<<endl;

	//return statement
	return 0;
}
