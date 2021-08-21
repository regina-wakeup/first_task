#include "hello.h"

ostream& hello::greetings(ostream& stream, const string & buildId)
{
    return stream << "build " << buildId << endl << "Hello, world!";
}
