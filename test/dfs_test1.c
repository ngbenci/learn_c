/**
 * 深度搜索，递归实现
 * 假设有下面一个无线图，要求从0号节点遍历整个图，求输出过程1的遍历序列。
 * 其中，遍历规则为：
 * 1）如果和当前结点相邻的结点已经访问过，则不能再访问；
 * 2）每次从和当前结点相邻的结点中寻找一个编号最小并且没有访问的结点进行访问；
 *  
 *		  0
 *       / \
 *		1   2
 *     / \ / \
 *    3   4—5 6
 *   
 **/

#include <stdio.h>
#include <stdbool.h>
#define MAXN 7

int ans[MAXN];
bool visit[MAXN];
int anslen = 0;
int adj[MAXN][MAXN] = {
	{0,1,1,0,0,0,0},
	{1,0,0,1,1,0,0},
	{1,0,0,0,0,1,1},
	{0,1,0,0,0,0,0},
	{0,1,0,0,0,1,0},
	{0,0,1,0,1,0,0},
	{0,0,1,0,0,0,0},
};

void dfs(int u);
void dfs_add(int u);


int main(void)
{
	int i;
	int u = 0;
	for(i=0; i<MAXN; i++) {
		ans[i] = 0;
		visit[i] = false;
	}	
	dfs(u);
	for(i=0; i<MAXN; i++) {
		printf("%d ", ans[i]);
	}
	printf("\n");
	return 0;
}


void dfs(int u)
{
	if(visit[u]) {
		return;
	}
	visit[u]=true;
	dfs_add(u);
	int i = 0;
	while(i++ < MAXN) {
		int v = i;
		if(adj[u][v]) {
			dfs(v);
		}
	}
}

void dfs_add(int u)
{
	ans[anslen++] = u;
}
