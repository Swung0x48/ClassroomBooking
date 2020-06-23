#include <iostream>
using namespace std;

#include "books.h"
#include "sciencebook.h"

sciencebook::sciencebook(int _num, string _nam, double _pri, string _aut, string _pubh , int _type):books(_num, _nam, _pri, _aut, _pubh) {// :books(_num, _nam, _pri, _aut, _pubh)
	_type = 1;

}