#include "Graph.h"
#include "Graph.cpp"
#include "validity.cpp"
#include <QDebug>
using namespace std;
int calculateRoads(string inputFile,string outputFile) {
    int count;
    int ans[10]={0};
	int testCases=-1,cities=-1,roads,k,temp;
	int startVertex;
    ifstream inin;
    ofstream outo;
    inin.open(inputFile,ios::in);
    outo.open(outputFile,ios::out);
    if(!valid(inin,outo))
        return 0;
    ifstream in;
    in.open(inputFile,ios::in);
    ofstream out;
    out.open(outputFile,ios::out);
	in >> testCases;
	temp=testCases;
    if(testCases==-1)
    {
        out<<"Error : Test-cases not specified."<<endl;
        out<<"\t"<<"Please update the input again.";
        return 0;
    }
    if(testCases==0)
    {
        out<<"Error : Test-cases can't be Zero."<<endl;
        out<<"\t"<<"Please update the input again.";
        return 0;
    }
    if(testCases>10)
    {
        out<<"Error : According to constraints test-cases can't be more than 10."<<endl;
        out<<"\t"<<"Please update the input again.";
        return 0;
    }
    int index=0;
        while (testCases--)
        {
            if(in.peek() == EOF )
            {
                     out<<"Error1 : Testcases are missing"<<endl;
                     out<<"\t"<<"Please update the input again.";
                     return 0;
             }
            in >> cities ;
            if(cities==-1)
            {
                out<<"Error : Cities not specified "<<endl;
                out<<"\t"<<"Please update the input again.";
                return 0;
            }
            if(cities==0)
            {
                out<<"Error : Cities can't be Zero."<<endl;
                out<<"\t"<<"Please update the input again.";
                return 0;
            }
            if(cities>10000)
            {
                out<<"Error : According to constraints cities can't be more than 10000"<<endl;
                out<<"\t"<<"Please update the input again.";
                return 0;
            }
            if(in.peek() == EOF )
            {
                    out<<"Error2 : Testcases are missing"<<endl;
                    out<<"\t"<<"Please update the input again.";
                    return 0;
            }
                        in >> roads;
                        if(roads==-1)
                        {
                            out<<"Error : Roads are not specified "<<endl;
                            out<<"\t"<<"Please update the input again.";
                            return 0;
                        }
                        if(in.peek() == std::ifstream::traits_type::eof() )
                        {
                            out<<"Error3 : Testcases are missing"<<endl;
                            out<<"\t"<<"Please update the input again.";
                            return 0;
                        }
            Graph g(cities);
            for (int i = 1; i <= roads; i++)
            {
                int a, b;
                in >> a;
            if(in.peek() == EOF )
                               {
                                   out<<"Error4 : Testcases are missing"<<endl;
                                   out<<"\t"<<"Please update the input again.";
                                   return 0;
                               }
                               in >> b;
                               if(in.peek() == EOF )
                               {
                                   out<<"Error5 : Testcases are missing"<<endl;
                                   out<<"\t"<<"Please update the input again.";
                                   return 0;
                               }
                g.add_edge(a, b,0);
            }
            in >> k;
            for (int i = 1; i <= k; i++)
            {
                int a, b, w;
                in >> a;
                if(in.peek() == EOF )
                {
                          out<<"Error6 : Testcases are missing"<<endl;
                          out<<"\t"<<"Please update the input again.";
                          return 0;
                }
                in >> b;
                if(in.peek() == EOF )
                {
                     out<<"Error7 : Testcases are missing"<<endl;
                     out<<"\t"<<"Please update the input again.";
                     return 0;
                }
                in >> w;
                startVertex = a;
                g.add_edge(a, b, w);
            }
            ans[index++]=prim(g, startVertex);
        }
        if(testCases==-1)
        {
            for(int i=0;i<index;i++)
            {
                out <<"Minimum Cost Required for "<<i+1<<" testcase to build roads: "<<ans[i] <<endl;
            }
        }
        in.close();
        out.close();
}
