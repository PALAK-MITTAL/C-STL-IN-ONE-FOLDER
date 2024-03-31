#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// pair<type1,type2>name_of_pair;
//make_pair() is method to assign values to the pair 

int main(){

// method1
cout<<"method1:"<<endl;
pair<string,int>p;
p=make_pair("palak",100);
cout<<p.first<<" "<<p.second<<endl;
cout<<endl;


// method2
cout<<"method2:"<<endl;
pair<string,int>p1;
// p=make_pair("palku",1000);
p1.first="palku";
p1.second=1000;
cout<<p1.first<<" "<<p1.second<<endl;
cout<<endl;



// method3
cout<<"method3:"<<endl;
pair<string,pair<int,int>>p2;
p2.first="palku";
p2.second.first=1000;
p2.second.second=986;
cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
cout<<endl;



// method4
cout<<"method4:"<<endl;
pair<string,pair<int,int>>p3;
p3=make_pair("palak",make_pair(123,4100));
cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
cout<<endl;


// method5
cout<<"method5:"<<endl;
pair<pair<int,int>,string>p4;
p4=make_pair(make_pair(1423,6100),"paplu");
cout<<p4.first.second<<" "<<p4.first.first<<" "<<p4.second<<endl;
cout<<endl;


  return 0;
}