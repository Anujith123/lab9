//including library
#include<iostream>  
//namespace
using namespace std;    
		//driver function		
		int main()           
		{
		    //variable declaration
		    char str[20],*p;
		    int len=0;
		    p=str;
		    //asks user for the input of a string
		    cout<<"Enter a string less than 15 characters\n";
		    cin>>str;
		    for(int i=0;*(p+i)!='\0';i++)
		    {
			len++;
		    }
		    
		    //displays the length
		    cout<<"The length of the string is "<<len<<endl;
    
    //return 
    return 0;
}
