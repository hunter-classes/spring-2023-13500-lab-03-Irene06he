// add your code
// Name : Irene He He
// GitHub Name : Irene06he


#include <climits>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include "reservoir.h"

// Task A
double get_east_storage(std::string date) {
  std::string date_time;
  double eastSt;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }

  std::string junk;
  getline(fin, junk);

  while (fin >> date_time >> eastSt) {

    fin.ignore(INT_MAX, '\n'); 
    if (date == date_time) {
      return eastSt;
    }
  }

  fin.close();

  return eastSt;
}

// Task B

double get_min_east( ) {
  std::string date_time;
  double min = INT_MAX;
  double eastSt;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail( )) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }

  std::string junk; 
  getline(fin, junk);

  while (fin >> date_time >> eastSt) {
    fin.ignore(INT_MAX, '\n'); // skips to the end of line,
                               // ignorring the remaining columns
    if (eastSt < min) {
      min = eastSt;
    }
  }

  fin.close();

  return min;
}

double get_max_east( ) {
  std::string date_time;
  double max = INT_MIN;
  double eastSt;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail( )) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }

  std::string junk; 
  getline(fin, junk);

  while (fin >> date_time >> eastSt) {
    fin.ignore(INT_MAX, '\n'); // skips to the end of line,
                               // ignorring the remaining columns
    if (eastSt > max) {
      max = eastSt;
    }
  }

  fin.close();

  return max;
}








