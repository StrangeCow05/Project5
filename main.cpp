//SINGLE QOUTES BITCH

#include <fstream>
#include <iostream>
#include <sstream>


int main(){
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream converter;
  std::string sNum1;
  std::string sNum2;
  std::string text;
  
  int num1;
  int num2; 

  inFile.open("data.csv");
  while (getline(inFile,currentLine)){
   std::cout << currentLine << std::endl;

   converter.clear();
   converter.str(currentLine );
  
   getline(converter, sNum1,',');
   getline(converter, sNum2,',');
   getline(converter, text);

   converter.clear();
   converter.str("");
   converter << sNum1 << " " << sNum2;
   converter >> num1 >> num2;

   int sum = num1 + num2;

   std::cout << "Total: " <<  sum << std::endl;

   for (int i = 0; i < sum; i++){
    std::cout << text ;
   }//end for
  std::cout << std::endl;

  }//end while

  inFile.close();


}//end main
