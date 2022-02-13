/*
Problem Statement:
Write a program to read the following text and count the number of words which starts
with the letter ‘o’.
"oops is object oriented and has wide outreach".
*/

// extract to string
#include <iostream>
#include <string>



int main ()
{
  std::string statement;

  std::cout << "Please, enter the statement: ";
  std::getline (std::cin,statement);
  std::cout << "Entered statement is :  " << statement << std::endl;
  
  int length = statement.length();
  
  int itrator=0;
  int count =0;
  
  while(itrator != length){
      if(statement.at(itrator)=='o'){
            count++;  
        }
      itrator++;
    }
    
    std::cout<<"Number of 'o' in the given sentence is :"<<count<<std::endl;

  return 0;
}