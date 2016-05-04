//Dain Harmon
//CS372
//5-3-2016

#include <iostream>
#include "stringprocessor.h"
#include "zeroswap.h"
#include "oneswap.h"

using namespace std;

int main()
{
    StringProcessor * sp=new zeroSwap();
    StringProcessor * sp2=new oneSwap();
    sp->add(*sp2);
    string s="Hello world!";
    cout << sp->process(s) << endl;
    return 0;
}
