//
//  main.cpp
//  big_no
//
//  Created by Ankit on 09/10/19.
//  Copyright © 2019 Ankit. All rights reserved.
//
#include<iostream>
using namespace std;
int multiply(int* a,int &n,int no)
{
    int carry=0;
    for(int i=0;i<n;i++)
    {
        int product=a[i]*no+carry;
        a[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        a[n]=carry%10;
        carry=carry/10;
        n++;
    }
    return 0;
}

void big_factorial(int number)
{
    int *a = new int[1000]{0};
    a[0]=1;
    int n=1;
    for(int i=2;i<=number;i++)
    {
        multiply(a,n,i);
    }
    
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter a number\n";
    cout<<endl;
    cin>>n;
    big_factorial(n);
}
