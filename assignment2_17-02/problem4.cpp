#include <iostream>
#include <string>



int main ()
{
  std::string statement;
  std::string replacement="_";
  std::cout << "Please, enter the statement: ";
  std::getline (std::cin,statement);
  std::cout << "Entered statement is :  " << statement << std::endl;
  
  int length = statement.length();
  
  int itrator=0;

  
  while(itrator != length){
      if(statement.at(itrator)==' '){
            statement.replace(itrator,1,replacement);
        }
      itrator++;
    }
    
    std::cout<<"After replacing space by '_' the statement is :\n"<<statement<<std::endl;

  return 0;
}