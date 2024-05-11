
# stack is used for dfs implementation
# time complexity = O(V+E)
def dfs(graph, start):
    visited = []
    stack = [start]
    while stack:
        node = stack.pop()
        if node not in visited:
            visited.append(node)
            neighbours = graph[node]
            for neighbour in neighbours:
                stack.append(neighbour)
    return visited


graph = {
    'A': ['D', 'C'],
    'B': ['D'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

# print(dfs(graph, 'A'))
