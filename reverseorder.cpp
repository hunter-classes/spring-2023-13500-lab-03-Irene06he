//Name : Irene He He
//GitHub Name : Irene06he

#include <climits>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include "reverseorder.h"

void reverse_oreder(std::string date1, std::string date2){
   std::string date_time;
  double eastSt,eastEl,westSt,westEl;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }

  std::string junk;
  getline(fin, junk);

  
  std::string str[1000];
  double West_El[1000];
  int i = 0;
  
  while(fin >> date_time >> eastSt >> eastEl >> westSt >> westEl)
    {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

      fin.ignore(INT_MAX, '\n'); //skips to the end of line,
      //ignoring the remaining column
      if (date1 <= date_time && date_time <= date2)
	{
	  str[i] = date_time;
	  West_El[i] = westEl;
	  i++;
	}
    }
  
  fin.close();
  
  for (int a = i - 1; a>=0; a--)
    {
      std::cout << str[a];
      std::cout << "\t" << West_El[a] << " ft" << std::endl;
    }

}