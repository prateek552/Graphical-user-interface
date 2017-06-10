#include "Graph.h"
using namespace std;
bool isEmpty(std::ifstream& pFile)
{
    return pFile.peek() == EOF;
}
bool valid(ifstream& in,ofstream& out)
{
    string s;
    if (isEmpty(in))
    {
        out<<"File is Empty";
        return false;
    }
    while(in)
    {
        getline(in,s);
        if((s.length()==0 ))
                {
                    out<<"Error : Input contains Extra Enters."<<endl;
                    out<<"\t"<<"Please update the input again.";
                    return 0;
                }
        for(int i=0;i<s.length();i++)
        {
            if(( s[i] >= 48 && s[i] <= 57 ) || s[i] == 32 )
            {
                if( s[i] == 32 && s[i+1] == 32 )
                {
                    out<<"Error : Input contains Extra Space."<<endl;
                    out<<"\t"<<"Please update the input again.";
                    return false;
                }
                continue;
            }
            else
            {
                out<<"Error : Input contains some Invalid character."<<endl;
                out<<"\t"<<"Please update the input again.";
                return false;
            }
        }
    }
    in.close();
    out.close();
    return true;
}
