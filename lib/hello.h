#pragma once

#include <ostream>
#include <string>

using namespace std;

namespace hello
{
    ostream& greetings(ostream& stream, const string & version);
}