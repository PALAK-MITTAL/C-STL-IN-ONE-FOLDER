#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// duplicates can be present in set
//sorted order me hoga
// avl,red-black se implementation hoti hai


int main()
{

multiset<int>s;
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);
s.insert(20);


s.erase(20);  //isme wo sab bhi erase ho jate hai jo duplicate hote hai

for(auto it=s.begin(); it!=s.end(); it++)
{
  cout<<*it<<" ";
}
cout<<endl;


  return 0;
}