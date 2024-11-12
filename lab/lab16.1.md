## โจทย์
บริษัทขนส่งสินค้าเล็กๆ แห่งหนึ่งต้องการระบบเพื่อช่วยในการวางแผนขนส่งระหว่างเมืองหลายเมือง และตรวจสอบความเหมาะสมของการวางแผนเมื่อเปรียบเทียบกับข้อมูลที่มีอยู่

ระบบนี้จะมีฟังก์ชันที่สำคัญ 3 ฟังก์ชัน:
- Knapsack - เพื่อช่วยคำนวณความคุ้มค่าในการบรรทุกสินค้าจำนวนจำกัดโดยพิจารณาจากน้ำหนักและมูลค่าของสินค้า
- Dijkstra - เพื่อคำนวณเส้นทางที่สั้นที่สุดระหว่างเมืองต่างๆ
- Similarity Check - เพื่อช่วยเปรียบเทียบแผนการเดินทางที่กำหนดขึ้นใหม่กับข้อมูลเก่า (ด้วย similarity score)

ให้เขียนโปรแกรมรับข้อมูลจากผู้ใช้และคำนวณตามขั้นตอนข้างต้น พร้อมแสดงผลลัพธ์ทุกขั้นตอน

### รายละเอียดการทำงานของระบบ
1. Knapsack Problem:
    - ผู้ใช้จะระบุน้ำหนักสูงสุดที่สามารถบรรทุกได้ (max_weight)
    - มีสินค้า n รายการ โดยแต่ละรายการมีน้ำหนัก (weights[i]) และมูลค่า (values[i])
    - โปรแกรมจะคำนวณหาสินค้าที่ควรเลือกเพื่อให้ได้มูลค่ามากที่สุดโดยที่น้ำหนักไม่เกิน max_weight
2. Shortest Path (Dijkstra’s Algorithm):
    - มีเมือง m เมือง โดยระบุระยะทางระหว่างเมืองในรูปของกราฟเชื่อมโยง
    - โปรแกรมจะคำนวณเส้นทางที่สั้นที่สุดจากเมืองเริ่มต้น (start_city) ไปยังเมืองปลายทาง (end_city)
3. Similarity Check:
    - โปรแกรมจะตรวจสอบความเหมือนระหว่างเส้นทางการเดินทางใหม่ (ที่คำนวณจาก Dijkstra’s Algorithm) กับเส้นทางข้อมูลเก่าในระบบ
    - คำนวณและแสดง similarity score เพื่อดูว่าทั้งสองเส้นทางมีความคล้ายกันมากน้อยเพียงใด

## PRE CODE
```c++
#include <stdio.h>
#include <limits.h>

int *KnapsackDP(int *weights, int *values, int n, int max_weight);
int *Dijkstra(int *graph, int m, int start_city);
int SimilarityCheck(int *path1, int *path2, int len);

int main() {
    // 1. Knapsack
    int n, max_weight;
    printf("Enter number of items and max weight for knapsack: ");
    scanf("%d %d", &n, &max_weight);
    
    int weights[n], values[n];
    printf("Enter weights and values of items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }

    int *knapsack_result = KnapsackDP(weights, values, n, max_weight);
    printf("Optimal items selected for maximum value:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", knapsack_result[i]);
    }
    printf("\n");

    // 2. Dijkstra's Algorithm
    int m;
    printf("Enter number of cities: ");
    scanf("%d", &m);

    int graph[m][m];
    printf("Enter adjacency matrix for cities (distance or -1 for no path):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int start_city, end_city;
    printf("Enter start city and end city: ");
    scanf("%d %d", &start_city, &end_city);

    int *shortest_path = Dijkstra((int *)graph, m, start_city);
    printf("Shortest path from %d to %d:\n", start_city, end_city);
    for (int i = 0; i < m; i++) {
        printf("%d ", shortest_path[i]);
    }
    printf("\n");

    // 3. Similarity Check
    int previous_path[m];
    printf("Enter previous path for comparison:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &previous_path[i]);
    }

    int similarity_score = SimilarityCheck(shortest_path, previous_path, m);
    printf("Similarity score with previous path: %d%%\n", similarity_score);

    return 0;
}

// Implement KnapsackDP, Dijkstra, and SimilarityCheck functions here

```

## TEST CASE
### Input
```bash
5 11
1 1
2 6
5 18
6 22
7 28
5
0 -1 80 30 10
100 0 -1 -1 -1
-1 20 0 -1 -1
-1 20 20 0 -1
-1 -1 -1 10 0
0 4
0 1 3 2 4

```
### Output
```bash
Optimal items selected for maximum value:
 1  1 18  0 28
Shortest path from 0 to 4:
 0  4
Similarity score with previous path: 75%

```

## TEST CASE
### Input
```bash
4 10
3 4
4 5
5 7
7 8
4
0 -1 -1 10
10 0 5 -1
-1 15 0 5
10 -1 10 0
0 3
0 1 2 3

```
### Output
```bash
Optimal items selected for maximum value:
 4  5  0  8
Shortest path from 0 to 3:
 0  3
Similarity score with previous path: 50%

```

## มาตรฐานการตรวจตามหลักการเรียนรู้ของบลูม
| ลำดับการเรียนรู้ | เกณฑ์การวัด | คะแนน |
| -------- | -------- | -------- |
| รู้จำ | เห็นโครงสร้างของโค้ดโปรแกรมชัดเจน ได้มาตรฐาน | 1 pts |
| เข้าใจ | แก้ไขปัญหาได้ตามที่โจทย์กำหนด | 1 pts |
| ประยุกต์ใช้ | สามารถผ่านเงื่อนไขได้ทุก testcase | 1 pts |
| วิเคราะห์ | หาจุดผิดของโปรแกรมได้ | 1 pts |
| ประเมินค่า | โปรแกรมเสร็จสมบูรณ์ระยะเวลาที่กำหนด | 1 pts |
| สร้างสรรค์ | แก้ไขสถานการณ์ของโจทย์ | 1 pts |
||<p style='text-align: right !important;'>**รวม**</p>|**6 pts**|
