#include <iomanip>
#include "Log.h"
#include "Util/Util.h"

ostream &operator<<(ostream &output, const Log &log) {
    return output << quoted(log._borrower)
                  << " "
                  << log._bookNumber
                  << " "
                  << log._quantity
                  << " "
                  << log._borrowTime
                  << " "
                  << log._returnTime;
}

istream &operator>>(istream &input, Log &log) {
    return input >> quoted(log._borrower)
                 >> log._bookNumber
                 >> log._quantity
                 >> log._borrowTime
                 >> log._returnTime;
}

Log::Log(string borrower, int bookNumber, int quantity)
: _borrower(borrower),
  _bookNumber(bookNumber),
  _quantity(quantity),
  _borrowTime(Util::getTime()),
  _returnTime(0)
{}

Log::Log():
    _borrower("undefined"),
    _bookNumber(-1),
    _quantity(0),
    _borrowTime(0),
    _returnTime(0)
{}
