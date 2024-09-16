#include <iostream>
#include <string> 
using namespace std; 

int main(){
    string s;
    cout<<"Enter a String (s) : ";
    getline(cin,s);

    cout<<"Length of s : "<<s.length()<<endl;

    s.push_back('z');
    cout<<"String s after push_back('z') : "<<s<<endl;
    s.pop_back();
    cout<<"String s after pop_back() : "<<s<<endl;

    string p;
    cout<<"Enter another String (p) : ";
    getline(cin,p);

    cout<<"Both Strings comparision - s.compare(p) : "<<s.compare(p)<<endl;

    s.swap(p);
    cout<<"After swapping the two strings - s.swap(p) :\ns : "<<s<<endl<<"p : "<<p<<endl;

    s.clear();
    cout<<"Length of s after clearing it - s.clear() : "<<s.size()<<endl;

    cout<<"Searching a character 'g' in p - p.find('g') : "<<p.find('g')<<endl;

    cout<<"Substring (1,4) from p - p.substr(1,4) : "<<p.substr(1,4)<<endl;
    
return 0;
}