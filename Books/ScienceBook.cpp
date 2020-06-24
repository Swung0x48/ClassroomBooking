#include <iostream>
using namespace std;

#include "Book.h"
#include "ScienceBook.h"

ScienceBook::ScienceBook(
  //                  int type,
	                int number, 
	                string name, 
	                double price, 
	                string author, 
	                string pubHouse):
        Book(
                1,
                number,
                name,
                price,
                author,
                pubHouse)
 {}