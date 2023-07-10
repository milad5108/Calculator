#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int num1,num2;
void GetNumber();
int sum();
int mul();
int min();
double mydiv();
int Fibonacci(int a);

int Factorial(int n)
{
    if(n==0)return 1;
    else
    return n * Factorial(n -1);
}




int main()
{
   char ch;
   while(1)
   {
       cout<<"\n Get = g    Sum = +      Min = -      Mul = *      Div = /    Fibonacci = b    Factorial = f      Exit = x \n\n";
       cin>>ch;
       switch (ch)
       {
         case 'x':exit(0);
         break;
         case 'g':GetNumber();
         break;
         case '+':
         {
             int m;
             m=sum();
             cout<<"Sum Is ="<<m;
         }break;
         case '*':
         {
           double m;
           m=mul();
           cout<<"Mul Is ="<<m;
         }break;
         case '-':
         {
           int m;
           m=min();
           cout<<"Min Is ="<<m;
         }break;
         case '/':
         {
           double m;
           m=mydiv();
           cout<<"My Div ="<<m;
         }break;
         case'f':
         {
            int n;
            cout<<"Enter number :";
            cin>>n;
            cout<<"Factorial(n) is :"<<Factorial(n);
         }break;
         case 'b':
         {
           int a;
           cout<<"Enter number :";
           cin>>a;
           cout<<"Fibonacci(a) is :"<<Fibonacci(a);
           
         }break;
         
         
         
         
       }
   }
   
    return 0;
}

void GetNumber()
{
    
    cout<<"Enter First Number :";
    cin>>num1;
    cout<<"Enter second Number :";
    cin>>num2;
    
}

int sum()
{
    return  (num1+num2);
    
}

int mul()
{
    return (num1*num2);
}

int min()
{
    return (num1-num2);
}

double mydiv()
{
    return (num1/(double)num2);
}

int Fibonacci(int a)
{
    if(a>2)
    {
        return Fibonacci(a-1)+Fibonacci(a-2);
    }
    
    else
    {
        return 1;
    }
}










