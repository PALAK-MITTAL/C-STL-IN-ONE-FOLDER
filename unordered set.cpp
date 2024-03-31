#include<iostream>
using namespace std;
#include<unordered_set>
#include<bits/stdc++.h>

// not necessary that elements stored in it are in sorted order or not
//stores unique elements

//but if we want to have duplicates present in the set then syntax is  

  //                       unordered_multiset<int>s;

//access karte time bhi kisi bhi  order me nikal skte hai
//search,insert,delete time complexity is O(1) on an average constant time complexity
//implementation is using hashing

int main()
{

unordered_set<int>s;
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);
s.insert(10);

s.erase(20);

for(auto it=s.begin(); it!=s.end(); it++)
{
  cout<<*it<<" ";
}

cout<<endl;

unordered_multiset<int>s2;

s2.insert(10);
s2.insert(30);
s2.insert(20);
s2.insert(40);
s2.insert(10);

s2.erase(20);

for(auto it=s2.begin(); it!=s2.end(); it++)
{
  cout<<*it<<" ";
}







return 0;
}