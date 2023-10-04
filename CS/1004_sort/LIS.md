## 최장 증가수열
![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/72062916/0a5f3ea6-1330-4f6b-a03f-df22dabd61af)

원소가 n개인 배열의 일부 원소를 골라서 만든 부분 수열 중, 각 원소가 이전 원소보다 큼

---

### 방법

## 1. DP 사용


```
for (int k = 0; k < n; k++){
	length[k] = 1;
    for (int i = 0; i < k; i++){
        if(arr[i] < arr[k]){
            length[k] = max(length[k], length[i] + 1);
        }
    }
}
```

각 원소에서 끝나는 최장증가 수열을 찾음

시간 복잡도 

- O(n^2)

## 2. 이분탐색 활용

![image](https://github.com/Lee-Areum/CodingAndCSstudy/assets/72062916/1a16378f-7adb-47b6-8e62-59f0913edfd0)


해당 요소가 오름차순으로 있을수 있는 위치로 들어감

시간복잡도 

- O(n log n)
