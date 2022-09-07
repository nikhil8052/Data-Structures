#include<iostream>

using namespace std ; 

class Student{

   private : 
   string name ; 

   public : 
   void get(){
    cin>>name ; 
   }

   void display(){
    cout<<name ;
   }
};

int main(){
    Student s1 ; 
    s1.get();
    s1.display();
}
