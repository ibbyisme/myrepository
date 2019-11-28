#include <iostream>
using namespace std;
typedef struct {
	double weight;
	int judge;
}Matrix,*pMatrix;
typedef struct {
	Matrix **matrix;
	int *path;
	int pointnum;
	int edgenum;
	//int judge;
}Graph;

typedef struct {
	int position;//节点标号
	double minpath;//最小路径
}Memory,*tMemory;
typedef struct {
	Memory *elem;
	//int N;
}List;

void doDjistra(Graph graph,List&result, List&quantity);
void creatGraph(Graph&graph);
void InitList(Graph graph, List&list);
//void InitGraph(pGraph&graph);
