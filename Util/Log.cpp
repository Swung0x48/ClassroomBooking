#include <iomanip>
#include "Log.h"
#include "Util.h"

ostream &operator<<(ostream &output, Log &log) {
    return output << quoted(log._account)
                  << " "
                  << log._bookNumber
                  << " "
                  << log._borrowTime
                  << " "
                  << log._returnTime;
}

istream &operator>>(istream &input, Log &log) {
    return input >> quoted(log._account) >> log._bookNumber >> log._borrowTime >> log._returnTime;
}
