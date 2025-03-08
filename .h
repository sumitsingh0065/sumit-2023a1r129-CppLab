#include<iostream>
using namespace std;
class Book_Management_System{
    private : int BookId;
    string Bookname;
    public : void Accept(){/
        cout<<"\n Enter Book Id";
    cin>>BookId;
    cout<<"\n Enter Book Name";
    cin>>Bookname;
       }
     public : void Display(){
        cout<<"Book Id is"<<BookId<<"\t Book Name is"<<Bookname<<endl;
     }  
};
int main(){
    Book_Management_System obj[5];         // Array of objects(obj(0), obj(1), obj(3), obj(4),)
    int i;
    for(i=0;i<5;i++){
        obj[i].Accept();
    }
    for(i=0;i<5;i++){
        obj[i].Display();
    }
}