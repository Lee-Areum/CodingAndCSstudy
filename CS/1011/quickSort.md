# 퀵 정렬

분할 정복 알고리즘

문제를 작은 2개의 문제로 분리하고 각각을 해결한 다음, 결과를 모아서 원래의 문제를 해결

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/fe86ccb8-b8da-4185-98b8-63506358042d)

방법

1. 피봇 선정(보통은 첫번째 인덱스 but 피봇 선정 법은 다양함)
2. 피봇 기준 좌측 리스트엔 피봇보다 작은 값, 우측 리스트엔 피봇보다 큰 값으로 정렬
3. 각 부분 리스트에 대해서 더 이상 분할 될 수 없을 때까지 1,2 번 방법을 반복(순환호출)

장점

- 빠름 O(nlogn)
- 추가 메모리 공간 사용 x

단점

- 초기 피봇 선정을 잘못하면 오래걸림

### 피봇 선정법

1. 첫번째 인덱스
2. 초기 상태 리스트를 3분할 후 각각의 첫 번째 인덱스중 중간값을 선택
3. 등등

이렇게 하는 이유는 초기 피봇의 값에 따른 불균형은 시간복잡도를 O(nlogn) → O(n^2)까지 떨어트리기 때문
![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/98503537/de35fbc1-ed5f-4d1b-8a4a-94cf77e6dd4f)
