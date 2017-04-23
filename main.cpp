//
//  main.cpp
//  Prime number
//
//  Created by 刘子轩 on 2017/4/23.
//  Copyright © 2017年 刘子轩. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int i,n,signal=1;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            signal=0;
        break;
    }
    switch(signal)
    {
        case 1: cout<<"This is a prime number"<<endl; break;
        case 0: cout<<"This is not a prime number"<<endl;break;
        default: cout<<"error"<<endl;
    }
}
