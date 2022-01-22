//Program to display octal and hexadecimal form of 100 and 200 in decimal

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Convertor{
    private:
        int decimalNumber;
    public:
        Convertor(){
            decimalNumber=0;
        }
        Convertor(int decimalNumber){
            this->decimalNumber=decimalNumber;
        }
        void displayOCT();
        void displayHEX();
};

void Convertor::displayOCT(){
    int octalNumber[5];
    int i=0;
    int quotient = decimalNumber;

    while(quotient !=0){
        octalNumber[i++]=quotient%8;
        quotient /=8;
    }

    cout<<"Octal Number equals to "<<decimalNumber<<" is : ";
    for(int j=i-1;j>=0;j--){
        cout<<octalNumber[j];
    }
    cout<<endl;    
}

void Convertor::displayHEX(){
    char hexNumber[5];

    int i=0;

    int quotient = decimalNumber;

    while(quotient !=0){
        int temp =0;

        temp = quotient %16;

        if(temp <10){
            hexNumber[i]=temp + 48;
            i++;
        }else{
            hexNumber[i]=temp + 55;
            i++;
        }
        quotient /= 16;
    }

    cout<<"Hexadecimal Number equals to "<<decimalNumber<<" is : ";
    for(int j=i-1;j>=0;j--){
        cout<<hexNumber[j];
    }
    cout<<endl; 
}

int main(){
    Convertor c1(100), c2(200);

   

    
    //100
    c1.displayOCT();
    c1.displayHEX();
    //200
    c2.displayOCT();
    c2.displayHEX();
    
    return 0;
}