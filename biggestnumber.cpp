//Author: Raj Kaur
#include<iostream>
#include<string> 

using std::cin;
using std::cout;
using std::endl;

int main()
{
        int number1;
        int number2;
       

  cout<<"Please enter a whole number:";
  cin>>number1;

 
  cout<<"Please enter another whole number:";
  cin>>number2;

 if (number1>number2)
  { 
        cout<<"Of those two numbers, the biggest is: "<<number1; 
}
         
else 

{                       
        cout<<"Of those two numbers, the biggest is: "<<number2;
  }
  
  std::cout<<std::endl<< "Thank you for playing.";
  
  return 0;
}
