#include <iostream>
#include <string>



int main ()
{
  std::string statement;
  std::string target=" the ";
  std::cout << "Please, enter the statement: ";
  std::getline (std::cin,statement);
  std::cout << "Entered statement is :  " << statement << std::endl;
  
  int count =0;
  for(int i=0;i<statement.size()-1;i++){
      int m =0;
      int n = i;

      for(int j =0;j<target.size();j++){
          if(statement[n]==target[j]){
              m++;
          }
          n++;
      }
      
      if(m == target.size()){
          count++;
      }
  }
   std::cout << "total number of time "<<target<< " occur in "<<statement<<" is " << count <<std::endl;
  return 0;
}