#include<iostream>
using namespace std;
int main () {
  int money;
  cout<< "enter the money  ";
  cin>>money;
  int notes;
  cin>>notes;
  switch(notes){
      case 100:cout<<"NO of 100 Notes ="<<(money/100)<<endl;
              
      case 50:cout <<"NO of 50 NOtes ="<<((money%100)/50)<<endl;
            
      case 20:cout <<"NO of 20 Notes ="<<((money%50)/20)<<endl;
          
      case 1:cout <<"NO of 1 Notes  ="<<(money%50)%20<<endl;
           
          default:cout<<"enter valid money";

}
}