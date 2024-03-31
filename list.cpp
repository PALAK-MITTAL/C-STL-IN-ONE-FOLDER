#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// it is implemented in a way of doubly linked list
// list<type>name_of_list;          


int main(){

list<int>l1;

//insertion
l1.push_back(10);
l1.push_front(20);
l1.push_front(30);
l1.push_front(40);
l1.push_front(50);

//removing
l1.pop_front();
l1.pop_back();

//accsessing
cout<<l1.front()<<endl;
cout<<l1.back()<<endl;

//size
cout<<l1.size()<<endl;

//check if empty
cout<<l1.empty()<<endl;

//for iteration over the list 
// l.begin() => stores the first(front) element of list
// l.end()  =>stores the element next to the last element of list 
// if we dont know what type of data is stored inside list so for iteration we use auto keyword
// we cannot use it<=l1.end instead of this we use it!=l1.end
for(auto it=l1.begin(); it!=l1.end(); it++) // here auto = list<int>::iterator
{
  cout<<*it<<" ";
}
cout<<endl;

//for iteration over the list but in reverse order that is from last to front
// we cannot use it<=l1.end instead of this we use it!=l1.end
// rbegin= reverse begin     ,   rend= reverse end
for(auto it=l1.rbegin(); it!=l1.rend(); it++) // here auto = list<int>::iterator
{
  cout<<*it<<" ";
}
cout<<endl;

return 0;
}