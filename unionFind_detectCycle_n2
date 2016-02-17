bool isCycle(struct Graph *graph)  {
	int parent[] = new int[V];
	for(int i = 0; i < V; i++) {
		parent[i] = i;
	}
	for(int i = 0; i < graph->E; i++) {
		int x = find(parent,graph->edge[i].src);
		int y = find(parent,graph->edge[i].dest);
		
		if(x==y){
			return 1;
		}
		
		Union(parent,x,y);
	}
}

int find(int parent[], int i) {
	if(parent[i]==i) {
		return i;
	}
	return find(parent,parent[i]);
}

void Union(int parent[], int x, int y) {
	parent[x]=y;
}
