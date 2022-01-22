/*
Write a program to read 10 records of student with the information name,age and date of birth and
arrange the output in the following format. Fill the unused fields with dots.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#define MAX_SIZE 10

class Student{
    private:
        
        std::string name;
        int age;
        int day;
        int month;
        int year;
    public:
        void getData();
        void display(int slNo);
        void sort(Student list[],int size);
};

void Student::getData(){
    
    cout<<"Enter name of student :";
    cin>>name;
    cout<<"Enter age of student : ";
    cin>>age;
    cout<<"Enter DOB of student in dd mm yyyy format : ";
    cin>>day>>month>>year;
}
void Student::display(int slNo){
    cout<<" "<<slNo<<"........"<<name<<"......."<<day<<"/"<<month<<"/"<<year<<endl;
}
void Student::sort(Student list[],int size){

    for(int i=0;i<size-1;i++){
        for(int j =0 ;j<size-i-1;j++){
            if(list[j].age>list[j+1].age){
                Student temp = list[j];
                list[j] = list[j+1];
                list[j+1]=temp;
            }
        }
    }


}

int main(){

    Student std[MAX_SIZE];

    for(int i=0;i<MAX_SIZE;i++){
        std[i].getData();
    }
    std->sort(std,MAX_SIZE);
    cout<<"slNo.\tName\t\tDateOfBirth"<<endl;
    cout<<"================================"<<endl;
    for(int i=0;i<MAX_SIZE;i++){
        std[i].display(i+1);
    }

    return 0;
}

