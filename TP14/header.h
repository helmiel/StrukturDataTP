#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;
struct vertex{
    char id;
    adrVertex nextVertex;
};
struct edge{
    adrVertex vertex_1;
    adrVertex vertex_2;
    adrEdge nextEdge;
};
struct listOfVertex{
    adrVertex firstVertex;
};
struct listOfEdge{
    adrEdge firstEdge;
};
struct graph{
    listOfVertex Vertex;
    listOfEdge Edge;
};

void createVertex_1301223338(char newVertexID, adrVertex &v);
void initGraph_1301223338(graph &G);
void addVertex_1301223338(graph &G, char newVertexID);
void buildGraph_1301223338(graph &G);

bool vertexExists_1301223338(graph& G, char id);
void printVertex_1301223338(graph G);



#endif // HEADER_H_INCLUDED
