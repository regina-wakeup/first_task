#include <iostream>
#include "hello.h"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        cout << "Incorrect input parameter : Build id was lost!" << endl;
        return 1;
    }
    else if (argc > 2)
    {
        cout << "Incorrect input parameter : too many arguments!" << endl;
        return 1;
    }

    hello::greetings(cout, argv[1]);

    return 0;
}