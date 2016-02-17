//Union Find Datastructure with path compression and union by rank
struct subsets {
	int parent;
	int rank;
};

bool isCycle(struct Graph *graph)  {
	struct subsets[] = new subsets[graph->V];
	for(int i = 0; i < graph->V; i++) {
		subsets.parent[i] = i;
		subsets.rank[i]= 0;
	}
	
	for(int i = 0; i < graph->E; i++) {
		int x = find(subsets,graph->edge[i].src);
		int y = find(subsets,graph->edge[i].dest);
		
		if(x==y){
			return 1;
		}		
		Union(subsets,x,y);
	}
}

//Find by Path Compression
int find(subsets subsets[], int i) {
	if(subsets[i].parent!=i) {
		subsets[i].parent = find(subsets, subsets[i].parent);
	}
	return subsets[i].parent;
}

//Union By Rank
void Union(subsets subsets[], int x, int y) {
	if(subsets[x].rank < subsets[y].rank) {
		subsets[x].parent = y;
	}
	else if (subsets[y].rank < subsets[x].rank) {
		subsets[y].parent = x;
	}
	else {
		subsets[y].parent = x;
		subsets[x].rank++;
	}
}
