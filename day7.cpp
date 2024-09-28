//whether the number is prime or not using while loop
#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int i=2;

   while(i<n)
  {
    if (n%i==0)
    {
    cout<<"not prime no "<<endl;
    break;
    }
    else{
      cout<<"prime no  "<<endl;
    break;
    }
    i=i+1;
  }
  
  

}