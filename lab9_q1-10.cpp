Question 1)
	
1.S
	
2.T
	
3.6940
	
4.S
	
5.9772



Question 2)
	
D.*p=75;



Question 3)
	
c is a character 
	
*p is double
	'
so *p cant point to a character which is of smaller size.



Question 4) 
	
temp = blocks[0]; 		// A
	
temp = *(blocks + 2);		// C
	
temp = *(ptr + 1);		// B
	
temp = *ptr;			// A

	
ptr = blocks + 1;		//4435
	
temp = *ptr;			// B
	
temp = *(ptr + 1);		// C

	
ptr = blocks;			// 4434
	
temp = *++ptr;			// B
	
temp = ++*ptr;			// C
	
temp = *ptr++;			// C
	
temp = *ptr;			// C


Question 5)
  cptr=s;
  while(*cptr!='\0')
  cptr++;
  while(cptr!=s[0])
   {if(*cptr!='\0')
     cout<<*cptr;}
  cout<<*cptr;
  
Question6)
  int countEven(int a[],int n)
  { int e; 
   for(int i=0;i<n;i++)
    if(a[i]%2==0)
     e+=1;
    return e;
  }

Question 7)
   double *maximum(double a[],int size)
  {double *d,max=0;
   if(size==0)
    {d=NULL;
    return d;}
   for(int i=0;i<size;i++)
   { if(a[i]>max)
    { max=a[i];d=&a[i]}}
   return d;
  }

Question8)
   void myStrLen(char a[])
   {char *p;int n=0;
    p=a;
    while(*p!='\0')
    {n++;p++;}
   return n;
  }

Question9)
	int fstrchr(char a[],char c)
  {
    char *p;
    p=a;
    while(*p!='\0')
    {
        if(*p==c)
        return 1;
        p++;
        
    }
    return 0;
  }

Question 10)
    void revstring(char a[])
   {
    char *p,*m;int i=0;
    while(a[i]!='\0')
    i++;
    m=&a[i-1];
    while(*m!=a[0])
    {    
        cout<<*m;
        m--;
    }
    cout<<" "<<*m;
    cout<<"\n";
    return 0;
}
