#include <boost/algorithm/string.hpp>
#include <string>
#include <iostream>

using namespace boost::algorithm;

int main() {
    std::string s = "Boost C++ Libraries";
    std::cout << erase_first_copy(s, "s") << '\n';
}
