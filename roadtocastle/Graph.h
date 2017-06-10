#ifndef GRAPH
#define GRAPH

#include<iostream>
#include<climits>
#include<string>
#include<fstream>
#include<malloc.h>
#include<vector>
#define MAX 10000

using namespace std;

struct EdgeNode {
	int y;
	int weight;
	struct EdgeNode* next;
};

typedef struct EdgeNode edgenode;

class Graph {
	edgenode* list[MAX+1];
	int vertices;
	int edges;
	void init_graph();
public:
	Graph(int);

    void add_edge(int, int,int);
    void print_adjacency_list();

	int getVerticeCount();
    int getEdgeCount();
	friend int prim(const Graph&, int);
};

bool valid(ifstream&,ofstream&);
bool isEmpty(std::ifstream& pFile);
int calculateRoads(string,string);

#endif // !GRAPH
