#include "header.h"

void createVertex_1301223338(char newVertexID, adrVertex &v){
    v = new vertex;
    v->id = newVertexID;
    v->nextVertex = NULL;
}

void initGraph_1301223338(graph &G){
    G.Vertex.firstVertex = NULL;
    G.Edge.firstEdge = NULL;
}

void addVertex_1301223338(graph &G, char newVertexID){
    adrVertex v;
    createVertex_1301223338(newVertexID, v);

    if (G.Vertex.firstVertex == NULL){
        G.Vertex.firstVertex = v;
    }else {
        adrVertex p = G.Vertex.firstVertex;
        while(p->nextVertex != NULL){
            p = p->nextVertex;
        }
        p->nextVertex = v;
    }
}

bool vertexExists_1301223338(graph& G, char id){
    adrVertex v = G.Vertex.firstVertex;
    while(v != NULL){
        if(v->id == id){
            return true;
        }
        v = v->nextVertex;
    }
    return false;
}

void buildGraph_1301223338(graph &G){
    char id;
    adrVertex v;
    cout << "Masukkan id: ";
    cin >> id;
    while (id >= 65 && id <= 90){
        if(!vertexExists_1301223338(G, id)){
            addVertex_1301223338(G, id);
        }else {
            cout << "Vertex with ID " << id << " already exists." << endl;
        }
        cout << "Masukkan id: ";
        cin >> id;
    }
}

void printVertex_1301223338(graph G){
    adrVertex v = G.Vertex.firstVertex;
    while(v != NULL){
        cout << v->id << " ";
        v = v->nextVertex;
    }
}
