//Author: Raj Kaur
#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using namespace std;

int main()
{

        int first=0;
        int second=0;
        int biggest;
       

  std::cout<<"Please enter a whole number:";
  std::cin>>first;

  std::cout<<"Please enter another whole number:";
  std::cin>>second;

  if (first>=second)
  { 
          first=biggest;
}
 
if (second>=first)
{                       
        second=biggest;
  }
  std::cout<<"Of those two numbers, the biggest is: "<< biggest ;
  cout<<"Thank you for playing.";
  
  return 0;
}
