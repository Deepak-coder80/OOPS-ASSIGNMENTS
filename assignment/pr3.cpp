/*
Write a program to accept a string using get() function.Display the string using write().
*/

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class HandleString{
    private:
        
        char sampleString[50]; // std::string sampleString;
    public:
        void getString();
        void writeString();
};

void HandleString::getString(){
   
    cout<<"Enter String";
    cin.get(sampleString,50);    
}

void HandleString::writeString(){
    int length = strlen(sampleString);
    cout<<"Entered String is : ";
    cout.write(sampleString,length);
   
}

int main(){
    HandleString st1;
    st1.getString();
    st1.writeString();
    return 0;
}

/*
DO NOT USE THIS -- DEAD CODE 
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
*/