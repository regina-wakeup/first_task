#include "hello.h"

ostream& hello::greetings(ostream& stream)
{
    return stream << "Hello world!" << endl;
}