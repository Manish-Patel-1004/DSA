class Solution:
    def networkDelayTime(self, times: list[list[int]], n: int, k: int) -> int:
        adj=[[]for i in range(n+1)]
        for u,v,w in times:
            adj[u].append((v,w))
        dist=[float('inf')]*(n+1)
        dist[k]=0

        def dfs(k,time):
            for ngh,w in adj[k]:
                new=time+w
                if new<dist[ngh]:
                    dist[ngh]=new
                    dfs(ngh,new)
        dfs(k,0)
        ans=max(dist[1:])
        return ans if ans != float('inf') else -1