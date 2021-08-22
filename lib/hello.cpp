#include "hello.h"

ostream& hello::greetings(ostream& stream, const string & buildId)
{
    if (buildId.empty())
        return stream << "Error: invalid build id" << endl;

    return stream << "build " << buildId << endl << "Hello, world!";
}
