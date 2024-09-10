from collections import defaultdict

def dfs(graph, start, visited):
    visited.add(start)
    for neighbor in graph[start]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited)

def is_strongly_connected(n, edges):
    # Create adjacency list for the graph and its transpose
    graph = defaultdict(list)
    transpose = defaultdict(list)
    
    for v, w, p in edges:
        graph[v].append(w)
        transpose[w].append(v)
        if p == 2:  # two-way street
            graph[w].append(v)
            transpose[v].append(w)
    
    # Check if all nodes are reachable from node 1
    visited = set()
    dfs(graph, 1, visited)
    if len(visited) != n:
        return 0
    
    # Check if all nodes are reachable from node 1 in the transposed graph
    visited.clear()
    dfs(transpose, 1, visited)
    if len(visited) != n:
        return 0
    
    return 1

while True:
    n, m = map(int, input().split())
    if n == 0 and m == 0:
        break
    
    edges = [list(map(int, input().split())) for _ in range(m)]
    print(is_strongly_connected(n, edges))
