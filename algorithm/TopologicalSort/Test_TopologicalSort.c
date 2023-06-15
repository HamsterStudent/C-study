#include "Graph.h"
#include "TopologicalSort.h"

int main(void) {
	Node* SortedList = NULL;
	Node* CurrentNode = NULL;

	Graph* graph = CreateGraph();

	Vertex* A = CreateVertex("C");
	Vertex* B = CreateVertex("자료구조");
	Vertex* C = CreateVertex("알고리즘");
	Vertex* D = CreateVertex("HTML");
	Vertex* E = CreateVertex("CSS");
	Vertex* F = CreateVertex("SASS");
	Vertex* G = CreateVertex("JavaScript");
	Vertex* H = CreateVertex("React");
	Vertex* I = CreateVertex("front-end Developer");

	AddVertex(graph, A);
	AddVertex(graph, B);
	AddVertex(graph, C);
	AddVertex(graph, D);
	AddVertex(graph, E);
	AddVertex(graph, F);
	AddVertex(graph, G);
	AddVertex(graph, H);

	AddEdge(A, CreateEdge(A, B, 0));
	AddEdge(A, CreateEdge(A, C, 0));
	
	AddEdge(B, CreateEdge(B, G, 0));

	AddEdge(C, CreateEdge(C, G, 0));

	AddEdge(D, CreateEdge(D, G, 0));
	AddEdge(D, CreateEdge(D, E, 0));

	AddEdge(E, CreateEdge(E, G, 0));
	AddEdge(E, CreateEdge(E, F, 0));

	AddEdge(G, CreateEdge(G, H, 0));

	AddEdge(H, CreateEdge(H, I, 0));

	TopologicalSort(graph->Vertices, &SortedList);

	printf("Topological Sort Result : ");

	CurrentNode = SortedList;

	while (CurrentNode != NULL) {
		printf("%s-> ", CurrentNode->Data->Data);
		CurrentNode = CurrentNode->NextNode;
	}
	printf("\n");

	DestroyGraph(graph);

	return 0;
}