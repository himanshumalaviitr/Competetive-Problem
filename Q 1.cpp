/*
Given an integer x , return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
  *For example, 121 is a palindrome while 123 is not.
*/

#include<iostream>
using namespace std;

int main()
{
    int x,t,n=0;
    cout<<"Enter no. for check Palindrome: ";
    cin>>x;
    t=x;
    while(t)
    {
        n=n*10+t%10;
        t/=10;
    }
    if(n==x)
        cout<<" palindrome ";
    else
        cout<<" not palindrome ";
    return 0;

}
