//set stores only unique elements
// The elements present in set are stored in the sorted order(by default ascending)
//in set for insert, delete, search operations it take O(log n) time complexity
//set ki implementation AVL Tree se hoti hai aur ham iski implementation red-black tree se bhi kar sakte hai
//iska matlab hai jab avl tree par inorder traversal lagta hai toh hame data inorder traversal ki form me molta hai
// red black tree ka ek advantage hota hai over avl tree that is in red-black tree there are less number of rotations performed than in avl tee
//red black tree se bhi iski time complexity par koi asar nhi padega same hi rahegi O(log n)
// duplicates are not allowed in set

// we can also sort set in descending order using greater<type>

//  set<type>set_name;       set<int>s;


#include<iostream>
using namespace std;
#include<bits/stdc++.h>


class person{
   public:
   string name;
   int age;

  bool operator < (const person &other) const{
    return age<other.age;
  }

};


int main(){

 set<int>s; // yeh default ascending me store hoga

 set<int, greater<int> >s1; // yeh descending me store karega

//insertion
s.insert(10);
s.insert(120);
s.insert(20);
s.insert(30);
s.insert(40);
s.insert(40);
s.insert(50);

//iteration
for(auto it=s.begin(); it!=s.end(); it++)
{
  cout<<*it<<" ";
}
cout<<endl;


//search find() =>return the iterator of that number
if(s.find(1201)!=s.end()){
  cout<<"find"<<endl;
}else{
  cout<<"not find"<<endl;
}

//count return the count of that number in the set
cout<<s.count(20);
if(s.count(120)){
  cout<<"present"<<endl;
}else{
  cout<<"not present"<<endl;
}

//delete
s.erase(10);
cout<<s.count(10);

//insert class elements to set
person p1,p2,p3;
p1.name="palak",p2.name="palku",p3.name="palki";
p1.age=10,p2.age=20,p3.age=30;

set<person>ss;
ss.insert(p1);
ss.insert(p3);
ss.insert(p2);

for(auto it=ss.begin(); it!=ss.end(); it++)
{
  cout<<(*it).age<<" "<<(*it).name<<" ";
}
cout<<endl;



  return 0;
}