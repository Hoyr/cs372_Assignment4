//Dain Harmon
//CS372
//5-3-2016

#include "oneswap.h"

oneSwap::oneSwap()
{
    //ctor
}

oneSwap::~oneSwap()
{
    //dtor
}

string oneSwap::process(string & s)
{
    string out=s;
    for(int i=0; i<out.length(); i++)
        if (out[i]=='I'||out[i]=='l')
            out[i]='1';
    if (next==nullptr)
        return out;
    else
        return next->process(out);
}
