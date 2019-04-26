//Pascal Triangle using OOPS

#include<iostream.h>
#include<conio.h>

class pas                        //Creating Class
{
 int n;                          //Creating private variable
 public:
 void rows();
 void pattern();
 long fact(int n);
};

void pas::rows()
{
 cout<<"Enter the degree"<<endl; //Taking degree of n from the user
 cin>>n;
}

void pas::pattern()
{
 int i,j,k,c=n+1;               //Number of rows in n+1
 for(i=0;i<n+1;i++)
 {
  for(j=1;j<c;j++)              //Managing spaces
  {
   cout<<" ";
  }
   for(k=0;k<=i;k++)            //Printing the nCr values
   {
    cout<<fact(i)/(fact(k)*fact(i-k))<<" ";
   }
    cout<<endl;
    c--;
 }
}

long pas::fact(int a)          //Function to calculate nCr values
{
  int i;
  long f=1;
  for(i=1;i<=a;i++)
  {
   f=f*i;
  }
  return f;
}

void main()
{
 pas m;
 clrscr();
 m.rows();
 m.pattern();
 getch();
}
/*
Output:
Enter the degree
4
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
