#include "fixnumbers.h"

FixNumbers::FixNumbers()
{
    //ctor
}

FixNumbers::~FixNumbers()
{
    //dtor
}

string FixNumbers::process(string & s)
{
    int last=0;
    string out="";
    for(int i=0; i<s.length(); i++)
    {
        if(i<1||s[i-1]==' ')
            if(i==s.length()-1||s[i+1]==' ')
                if(isdigit(s[i]))
                {
                    string number="";
                    if(last<i)
                        if(i==s.length()-1)
                            out+=s.substr(last, i-2);
                        else
                            out+=s.substr(last, i-1);
                    switch(s[i])
                    {
                        case '0':
                            number="zero";
                            break;
                        case '1':
                            number="one";
                            break;
                        case '2':
                            number="two";
                            break;
                        case '3':
                            number="three";
                            break;
                        case '4':
                            number="four";
                            break;
                        case '5':
                            number="five";
                            break;
                        case '6':
                            number="six";
                            break;
                        case '7':
                            number="seven";
                            break;
                        case '8':
                            number="eight";
                            break;
                        case '9':
                            number="nine";
                            break;
                    }
                    out+=number;
                    last=i+1;
                }
    }
    if(last<s.length())
        out+=s.substr(last, s.length());
    out[0]=toupper(out[0]);
    return out;
}
