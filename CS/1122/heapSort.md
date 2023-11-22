# 힙정렬

### 힙정렬이란

- 최대 힙 트리나 최소 힙 트리를 구성해 정렬을 하는 방법
    - 최대 힙: 부모노드 값 > 자식노드 값   /   최소 힙 : 부모노드 값 < 자식노드 값
- 내림차순 정렬을 위해서는 최대 힙을 구성, 오름차순 정렬을 위해서는 최소 힙을 구성
- if  최대 or 최소 힙이 아닌경우 → 힙 생성 알고리즘(Heapify Algorithm)을 사용

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/9d08cb99-84a3-4c45-b1d5-45fab65967d2)


힙 생성 알고리즘은 하나의 특정한 노드에서 수행됨, 특정 노드와 두 자식을 최대 힙으로 바꿈

→ 시간 복잡도 O(logN) : 한 번 자식 노드로 내려갈 때마다 노드의 개수가 2개씩 증가

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/47cfc9bc-f31c-46a0-b482-9571f730467f)


### 최대힙 구성 예시

“7 6 5 8 3 5 9 1 6”의 정렬

1. 일단 배열에 차례대로 입력

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/82c97f4c-372f-4795-b0ab-954fc38aba60)


1. 모든 원소를 기준으로(제일 뒷쪽 데이터부터) 힙 생성 알고리즘을 적용 → 최대힙 구성 완료

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/a4f6c291-7056-439a-86d4-a273dab35b07)


### 삭제 예시

최대 힙에서의 삭제 == 최댓값을 가진 노드를 삭제 == root 삭제

1. 루트 노드와 가장 마지막 노드의 값을 교환

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/89bdabd5-66cf-4d38-99d1-7827b9b501e9)


1. 9를 제외한 나머지 원소를 기준으로 힙 생성 알고리즘을 수행

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/df914584-d890-4be6-973e-28d69b46dd8a)

1. 1, 2과정 반복

### +정렬 후 추가 노드 삽입 예시

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/176d186b-2298-4623-bc0e-46ba64800f82)

힙 정렬 시간복잡도 : O(NlogN)   →  **logN** : 힙 생성 알고리즘 시간복잡도 *** N** : 노드의 전체 개수

장점

- 시간복잡도 좋음(항상O(NlogN))
- 추가 메모리 사용x
