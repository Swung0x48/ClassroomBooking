#include <iostream>
using namespace std;

#include "Books.h"
#include "ScienceBook.h"

ScienceBook::ScienceBook(
  //                  int type,
	                int number, 
	                string name, 
	                double price, 
	                string author, 
	                string pubHouse):
        Books(
                1,
                number,
                name,
                price,
                author,
                pubHouse)
 {}