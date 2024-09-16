#include <iostream> 
#include <fstream>
using namespace std; 

int main(){
    
    int n,age;
    string name;
    char sex;

    ifstream fin;
    fin.open("myFile.txt",ios::in);

    if(fin.is_open()){
        cout<<"File Opened Successfully\n";
    }
    else
        cout<<"Error openng the file\n";


    while(!fin.eof()){
        fin>>name>>age>>sex;
        cout<<name<<"\t"<<age<<"\t"<<sex<<endl;
    
    }

    fin.close();
    
    ofstream fout("myfile.txt",ios::out);

        cout<<"Enter Name : ";  cin>>name;
        cout<<"Enter Age : ";   cin>>age;
        cout<<"Enter Sex : ";   cin>>sex;
        fout<<name<<" "<<age<<" "<<sex;     //  Writing Data into a File
    
    fout.close();

    

return 0;
}