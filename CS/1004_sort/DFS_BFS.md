그래프 탐색 기법

- 그래프 : 정점과 간선으로 이루어진 자료구조의 일종. G = (V, E)
- 그래프 탐색 : 하나의 정점으로부터 시작하여 차례대로 모든 정점을 1번씩 방문하는 것

### DFS

깊이 우선 탐색

재귀호출 or 스택 활용

최대한 깊이 내려간 후 더 갈 곳이 없으면 뒤로

![캡처](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/88c4f88e-6b11-4efc-9bbe-12f888dcaec4)


### BFS

너비 우선 탐색

큐 활용

현재 정점과 연결된 정점부터 탐색

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/d8f13c3e-f49b-45e6-9d73-a68f1aa62f8e)


시간복잡도는 O(n+e)로 동일 (인접 리스트의 경우)

