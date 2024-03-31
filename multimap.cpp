#include<iostream>
using namespace std;
#include<bits/stdc++.h>


//map stores the value in the form of key-value pairs
//keys not necessarily unique
//values can be duplicate
//search,insert,delete operations are performed in 0(log n) time complexity, making it fast for most use cases
//implementation is using avl tree or red-black tree
// agar jis key ko ham access karna chahte hai woh present hi nhi hai toh uska ans 0 aayega


int main()
{

// syntax     multimap< key_type, value_type >name_of_map;

multimap<int,int>m;

//insert method1
m.insert( make_pair(20,30) );
m.insert( make_pair(10,80) );
m.insert( make_pair(80,90) );
m.insert( make_pair(20,30) );
m.insert( make_pair(20,40) );
m.insert( make_pair(50,10) );

//insert method2 thiis method cannot be used as it gives error in multimap because samemultiple keys are allowed
// m[100]=150;
// m[200]=850;
// m[200]=8520;
// m[300]=950;

for(auto it=m.begin(); it!=m.end(); it++)
{
  cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;


//updation not possible
//m[50]=11235550;

// //accessing key using this method  is not possible
// cout<<m[1000]<<endl;   //0

//count
if(m.count(20)){
  cout<<m.count(20)<<" present"<<endl;
}
else{
  cout<<"not present "<<endl;
}

if(m.count(2)){
  cout<<m.count(2)<<" present"<<endl;
}
else{
  cout<<"not present "<<endl;
}

//delete
m.erase(10);

for(auto it=m.begin(); it!=m.end(); it++)
{
  cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;







return 0;
}