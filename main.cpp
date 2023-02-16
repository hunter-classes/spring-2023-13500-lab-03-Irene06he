// add your code as appropriate 
//Name:Irene He He
//GitHub Name : Irene06he

#include<string>
#include<iostream>
#include "reservoir.h"

int main()
{

//Test for task A 
  	std::cout<<"\n\n"<<"Date: 03/16/2018"<<" "<<"East basin storage:"<<get_east_storage("03/16/2018")<<"\n\n";
  	std::cout<<"Date: 05/20/2018"<<" "<<"East basin storage:"<<get_east_storage("05/20/2018")<<"\n\n";
  	
 //Test for task B
 	std::cout<<"Minimum storage in East basin: "<<" " <<get_min_east( )<<" "<<"billion gallons"<<"\n\n";
	std::cout<<"Maximum storage in East basin: "<<" " <<get_max_east( )<<" "<<"billion gallons"<<"\n\n";
	
//Test for task C;
	std::cout<<"06/30/2018"<<" " <<compare_basins("06/30/2018")<<"\n\n";
	std::cout<<"05/30/2018"<<" " <<compare_basins("05/30/2018")<<"\n\n";
	
//Test for task D


  return 0;
}
