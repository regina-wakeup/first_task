#include <iostream>
#include "hello.h"

using namespace std;

int main()
{
    auto version = std::getenv("FIRST_TASK_VERSION");
    if (version == nullptr || version == "\n")
    {
        cout << "Error: invalid version" << endl;
        return 1;
    }

    hello::greetings(cout, version);

    return 0;
}