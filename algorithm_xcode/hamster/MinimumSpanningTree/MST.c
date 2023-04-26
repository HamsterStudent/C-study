#include "MST.h"

void Prim(Graph* G, Vertex* StartVertex, Graph* MST){
    int i = 0;
    PQNode StartNode = {0, StartVertex};
    PriorityQueue* PQ = PQ_Create(10);
    
    Vertex* CurrentVertex = NULL;
    Edge* CurrentEdge = NULL;
    
    // 간선의 가중치값
    int* Weights = (int*)malloc(sizeof(int) * G->VertexCount);
    Vertex** MSTVertices = (Vertex**)malloc(sizeof(Vertex*) * G->VertexCount);
    // 방문 여부
    Vertex** Fringes = (Vertex**)malloc(sizeof(Vertex*) * G->VertexCount);
    // 간선정보
    Vertex** Precedences = (Vertex**)malloc(sizeof(Vertex*) * G->VertexCount);
    
    CurrentVertex = G->Vertices;
    // 초기화 작업. MST에 삽입 후 쓰인 값을 초기화하는 작업
    while(CurrentVertex != NULL){
        Vertex* NewVertex = CreateVertex(CurrentVertex->Data);
        AddVertex(MST, NewVertex);
        
        Fringes[i] = NULL;
        Precedences[i] = NULL;
        MSTVertices[i] = NewVertex;
        // 다시 선택되지 않게 큰 값으로 만듬
        Weights[i] = MAX_WEIGHT;
        // 다음 정점 선택
        CurrentVertex = CurrentVertex->Next;
        i++;
    }
    PQ_Enqueue(PQ, StartNode);
    // 초기값은 가중치값이 없기 때문에...
    Weights[StartVertex->Index] = 0;
    while( !PQ_IsEmpty(PQ)){
        PQNode Popped;
        
        PQ_Dequeue(PQ, &Popped);
        CurrentVertex = (Vertex*)Popped.Data;
        // 방문처리
        Fringes[CurrentVertex->Index] = CurrentVertex;
        // 해당 정점의 간선 정보
        CurrentEdge = CurrentVertex->AdjacencyList;
        while(CurrentEdge != NULL){
            Vertex* TargetVertex = CurrentEdge->Target;
            // 방문 여부 확인
            if(Fringes[TargetVertex->Index] == NULL &&
               CurrentEdge->Weight < Weights[TargetVertex->Index] ){
                PQNode NewNode = {CurrentEdge->Weight, TargetVertex};
                PQ_Enqueue(PQ, NewNode);
                
                Precedences[TargetVertex->Index] = CurrentEdge->From;
                Weights[TargetVertex->Index] = CurrentEdge->Weight;
            }
            CurrentEdge = CurrentEdge->Next;
        }
    }
    // 정점에 간선정보를 추가
    for(i = 0; i < G->VertexCount; i++){
        int FromIndex, ToIndex;
        if(Precedences[i] == NULL)
            continue;
        
        FromIndex = Precedences[i]->Index;
        ToIndex = i;
        
        AddEdge(MSTVertices[FromIndex],
                CreateEdge(MSTVertices[FromIndex], MSTVertices[ToIndex], Weights[i]));
        AddEdge(MSTVertices[ToIndex],
                CreateEdge(MSTVertices[ToIndex], MSTVertices[FromIndex], Weights[i]));
    }
    free(Fringes);
    free(Precedences);
    free(MSTVertices);
    free(Weights);
    
    PQ_Destroy(PQ);
}

void Kruskal(Graph* G, Graph* MST){
    int i;
    Vertex* CurrentVertex = NULL;
    Vertex** MSTVertices = (Vertex**)malloc(sizeof(Vertex*) * G->VertexCount);
    DisjointSet** VertexSet = (DisjointSet**)malloc(sizeof(DisjointSet*) * G->VertexCount);
    PriorityQueue* PQ = PQ_Create(10);
    
    i = 0;
    CurrentVertex = G->Vertices;
    // 각 정점의 주소를 VertexSet에 넣는 작업
    while(CurrentVertex != NULL){
        Edge* CurrentEdge;
        
        VertexSet[i] = DS_MakeSet(CurrentVertex);
        MSTVertices[i] = CreateVertex(CurrentVertex->Data);
        AddVertex(MST, MSTVertices[i]);
        
        CurrentEdge = CurrentVertex->AdjacencyList;
        // 정점에 이어진 간선정보를 죄다 큐에 넣는 작업
        while(CurrentEdge != NULL){
            PQNode NewNode = {CurrentEdge->Weight, CurrentEdge};
            PQ_Enqueue(PQ, NewNode);
            
            CurrentEdge = CurrentEdge->Next;
        }
        CurrentVertex = CurrentVertex->Next;
        i++;
    }
    while( !PQ_IsEmpty(PQ) ){
        Edge* CurrentEdge;
        int FromIndex;
        int ToIndex;
        PQNode Popped;
        
        PQ_Dequeue(PQ, &Popped);
        CurrentEdge = (Edge*)Popped.Data;
        
        FromIndex = CurrentEdge->From->Index;
        ToIndex = CurrentEdge->Target->Index;
        if( DS_FindSet(VertexSet[FromIndex]) != DS_FindSet(VertexSet[ToIndex]) ){
            AddEdge(MSTVertices[FromIndex],
                    CreateEdge(MSTVertices[FromIndex],
                               MSTVertices[ToIndex],
                               CurrentEdge->Weight ));
            AddEdge(MSTVertices[ToIndex],
                    CreateEdge(MSTVertices[FromIndex],
                               MSTVertices[ToIndex],
                               CurrentEdge->Weight ));
            DS_UnionSet(VertexSet[FromIndex], VertexSet[ToIndex]);
        }
    }
    for( i = 0; i < G->VertexCount; i++)
        DS_DestroySet(VertexSet[i]);
    free(VertexSet);
    free(MSTVertices);
}
