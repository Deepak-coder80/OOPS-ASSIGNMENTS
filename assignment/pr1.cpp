//Program to display octal and hexadecimal form of 100 to 200 in decimal

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void convertOCT(int decimalNumber){
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

void convertHEX(int decimalNumber){
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

class Convertor{
    private:
        int start;
        int end;
        
    public:
       
        Convertor(int start,int end){
            
            this->start=start;
            this->end = end;
        }
        void display();
        
};

void Convertor::display(){
    for(int i=start;i<=end;i++){
        cout<<"-------------------------------"<<endl;
        convertOCT(i);
        convertHEX(i);        
    }
}


int main(){
    
    Convertor obj(100,200);

    obj.display();

    return 0;
}