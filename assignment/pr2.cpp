// 2.Write a program to receive the item code,quantity,price and calculate the amount. Display the data in
// the following format.
// a) Sl no and Item code is left justified.
// b) The price,quantity and amount is right justified.
// c) three digit precision for amount field.

#include <iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;

class Bill{
    private:
        int slNo;
        int itemCode;
        double quantity;
        double price;
        double amount;        
    public:
        void getData();
        double getAmount();
        void display();
};

void Bill::getData(){
    cout<<"Enter slNo : ";
    cin>>slNo;
    cout<<"Enter Item Code  : ";
    cin>>itemCode;
    cout<<"Enter Quantity : ";
    cin>>quantity;
    cout<<"Enter Price : ";
    cin>>price;
}
double Bill::getAmount(){
    amount = quantity * price;

    return amount;
}

void Bill::display(){
    cout<<" "<<slNo<<"\t"<<itemCode<<"\t\t\t"<<quantity<<"\t\t"<<price<<"\t  "<<std::setprecision(3)<<amount<<endl;
}

int main(){
    Bill b1[50];

    int n;
    double totalAmount;

    cout<<"\t\tBILLS"<<endl;
    cout<<"\t\t******"<<endl;

    cout<<"Enter number of times : ";
    cin>>n;

    for(int i =0;i<n;i++){
        b1[i].getData();
        totalAmount += b1[i].getAmount();        
    }

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<" slNo.\titemcode\t\tquantity\tprice\tamount"<<endl;
    for(int i=0;i<n;i++){
        b1[i].display();
    }
     cout<<"----------------------------------------------------------------"<<endl;
     
     cout<<"\t\tTOTAL AMOUNT PAYABLE : "<<std::setprecision(3)<<totalAmount<<endl;

     cout<<"THANK YOU"<<endl;
    
    return 0;
}