#include <iostream>
#include <string>
#include "sha256.h"

using namespace std;


int main(int argc, char* argv[])
{
    string input = "Estructura de datos 2";
    string output1 = sha256(input);

    cout << "sha256('" << input << "'):" << output1 << endl;
    return 0;
}