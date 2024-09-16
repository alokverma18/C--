#include<iostream>
#include<fstream>
   
using namespace std;
int main(){
      int rno,marks;
      char name[50];
   
      cout<<"Enter the Roll Number : ";
      cin>>rno;
       
      cout<<"\nEnter the Name : ";
      cin>>name;
       
      cout<<"\nEnter the Marks :";
      cin>>marks;
   
      ofstream fout("shark.txt");
   
      fout<<rno<<"\t"<<name<<"\t"<<marks;   //write data to the file student
   
      fout.close();
   
      ifstream fin("shark.txt");
   
      fin>>rno>>name>>marks;   //read data from the file student
   
      fin.close();
   
      cout<<endl<<rno<<"\t"<<name<<"\t"<<marks;
   
    return 0;   
}