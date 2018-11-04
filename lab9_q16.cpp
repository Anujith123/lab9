//including library
#include <iostream>    
//namespace
using namespace std;       
		//driver function
		int main()    
		{
		    //variable declaration
		    char str[20], *p;
		    //asks user to enter an array
		    cout<<"Input about 10 characters of string\n";
		    cin>>str;
		    
		    //pointer variable refers to address of string
		    p = str;
		    
		    //show string by shifting top character of string to right
		    while(*p!='\0')
		    {
			p++;
		    }
		    
		    while((p--)!=str)
		    {
			cout<<p<<endl;
		    }
    
    //return statement
    return 0;
}
