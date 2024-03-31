#include<iostream>
using namespace std;
#include<bits/stdc++.h>


//map stores the value in the form of key-value pairs
//keys are unique
//values can be duplicate
//search,insert,delete operations are performed in 0(log n) time complexity, making it fast for most use cases
//implementation is using avl tree or red-black tree
// agar jis key ko ham access karna chahte hai woh present hi nhi hai toh uska ans 0 aayega


int main()
{

// syntax     map< key_type, value_type >name_of_map;

map<int,int>m;

//insert method1
m.insert( make_pair(20,30) );
m.insert( make_pair(10,80) );
m.insert( make_pair(80,90) );
m.insert( make_pair(20,30) );
m.insert( make_pair(20,40) );
m.insert( make_pair(50,10) );

//insert method2 thiis method has an advantage as we can also update the values for a key
m[100]=150;
m[200]=850;
m[200]=8520;
m[300]=950;

for(auto it=m.begin(); it!=m.end(); it++)
{
  cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;


//updation
m[50]=11235550;

for(auto it=m.begin(); it!=m.end(); it++)
{
  cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;

//accessing key which is not present
cout<<m[1000]<<endl;   //0

//count
if(m.count(200)){
  cout<<m.count(200)<<" present"<<endl;
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
m.erase(100);

for(auto it=m.begin(); it!=m.end(); it++)
{
  cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;







return 0;
}