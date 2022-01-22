/*
Write a program to accept a string using get() function.Display the string using write().
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class HandleString{
    private:
        int size;
        char sampleString[50]; // std::string sampleString;
    public:
        void get();
        void write();
};

void HandleString::get(){
    cout<<"Enter length of string : ";
    cin>>size;

    cout<<"Enter Character in string one by one:";
    //getline(cin,sampleString);
    //cin.getline(sampleString,size);
    //cin>>sampleString;
    for(int i=0;i<size;i++){
        cin>>sampleString[i];
    }
}

void HandleString::write(){
    cout<<"Entered String is : ";
    //cout<<sampleString;
    for(int i=0;i<size;i++){
        cout<<sampleString[i];
    }
}

int main(){
    HandleString st1;
    st1.get();
    st1.write();
    return 0;
}