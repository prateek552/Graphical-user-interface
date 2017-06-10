#include "Graph.h"
using namespace std;

	void Graph::init_graph() {
		for (int i = 1; i <= vertices; i++)
			list[i] = NULL;
		edges = 0;
	}
	Graph::Graph(int v) {
		vertices = v;
		init_graph();
	}
	void Graph::add_edge(int x,int y,int weight) {
		edgenode* temp = (edgenode*)malloc(sizeof(edgenode));
		temp->y = y;
		temp->weight = weight;
		temp->next = list[x];
		list[x] = temp;
		edgenode* t = (edgenode*)malloc(sizeof(edgenode));
		t->y = x;
		t->weight = weight;
		t->next = list[y];
		list[y] = t;
		
		edges++;
	}
	void Graph::print_adjacency_list() {
		edgenode* temp = NULL;
		for (int i = 1; i <= vertices; i++) {
			temp = list[i];
			cout << i << ": ";
			while (temp != NULL) {
				cout << temp->y << "  ";
				temp = temp->next;
			}
			cout << endl;
		}
	}

	int Graph::getVerticeCount() { return vertices; }
	int Graph::getEdgeCount() { return edges; }


int parent[MAX + 1];

int prim(const Graph& g, int start) {
	int i;
	edgenode* p;
	bool intree[MAX + 1];
	int distance[MAX + 1];
	int cost = 0;
	int v;
	int w;
	int weight;
	int dist;

	for (int i = 1; i <= g.vertices; i++) {
		intree[i] = false;
		distance[i] = INT_MAX;
		parent[i] = -1;
	}

	distance[start] = 0;
	v = start;
	while (intree[v] == false) {
		intree[v] = true;
		p = g.list[v];
		while (p != NULL) {
			w = p->y;
			weight = p->weight;

			if ((distance[w] > weight) && (intree[w] == false)) {
				distance[w] = weight;
				parent[w] = v;
			}
			p = p->next;
		}
		v = 1;
		dist = INT_MAX;
		for (int i = 1; i <= g.vertices; i++) {
			if ((intree[i] == false) && (dist > distance[i])) {
				dist = distance[i];
				v = i;
			}
		}
		if(dist != INT_MAX)
			cost += dist;
	}
	return cost;
}
