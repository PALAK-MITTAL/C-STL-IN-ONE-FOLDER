#include<iostream>
using namespace std;
#include<bits/stdc++.h>


//unordered_map stores the value in the form of key-value pairs but the order is unordered
//keys must be unique
//values can be duplicate
//search,insert,delete operations are performed in 0(1) time complexity, making it fast for most use cases
//implementation is using hashing
// agar jis key ko ham access karna chahte hai woh present hi nhi hai toh uska ans 0 aayega


int main()
{

// syntax     unordered_map< key_type, value_type >name_of_map;

unordered_map<int,int>m;

//insert method1
m.insert( make_pair(20,30) );
m.insert( make_pair(10,80) );
m.insert( make_pair(80,90) );
m.insert( make_pair(20,30) );
m.insert( make_pair(20,40) );
m.insert( make_pair(50,10) );

//insert method2 thiis method can be used as in it unique  keys are allowed
m[100]=150;
m[200]=850;
m[200]=8520;
m[300]=950;

for(auto it=m.begin(); it!=m.end(); it++)
{
  cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;


//updation not possible
m[50]=11235550;

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