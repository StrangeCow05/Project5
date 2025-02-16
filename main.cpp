//SINGLE QOUTES BITCH

#include <fstream>
#include <iostream>
#include <sstream>


int main(){
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream converter;
  std::stringstream ss;
  int counter;
  std::string sCounter;
  std::string text; 

  inFile.open("data.csv");
  while (getline(inFile,currentLine)){
   std::cout << currentLine << std::endl;

   converter.clear();
   converter.str(currentLine );



  }//end line

  inFile.close();


}//end main
