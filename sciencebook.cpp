#include <iostream>
using namespace std;

#include "books.h"
#include "sciencebook.h"

sciencebook::sciencebook(
	                int type, 
	                int number, 
	                string name, 
	                double price, 
	                string author, 
	                string pubhouse):
	     books(
			 number, 
			 name, 
			 price,
			 author,
			 pubhouse) {
	_type = 1;

}