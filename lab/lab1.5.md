## โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

## FIX CODE
```c++
#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash
Enter the number of rows: 2
Enter the number of columns: 3
Enter the matrix elements: 1 2 3 4 5 6
```
### Output
```bash
Matrix (2x3):
1 2 3
4 5 6
```

## TEST CASE
### Input
```bash
Enter the number of rows: 3
Enter the number of columns: 2
Enter the matrix elements: 7 8 9 10 11 12
```
### Output
```bash
Matrix (3x2):
7 8
9 10
11 12
```

## TEST CASE
### Input
```bash
Enter the number of rows: 1
Enter the number of columns: 4
Enter the elements: 7 8 9 10
```
### Output
```bash
Matrix:
7 8 9 10
```

## TEST CASE
### Input
```bash
Enter the number of rows: 3
Enter the number of columns: 1
Enter the elements: 11 12 13
```
### Output
```bash
Matrix:
11
12
13
```

## TEST CASE
### Input
```bash
Enter the number of rows: 0
Enter the number of columns: 0
```
### Output
```bash
Matrix:
(empty)
```

## TEST CASE
### Input
```bash
Enter the number of rows: 3
Enter the number of columns: 2
Enter the elements: 21 22 23 24 25 26
```
### Output
```bash
Matrix:
21 22
23 24
25 26
```

## TEST CASE
### Input
```bash
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements: 1 2 3
```
### Output
```bash
Error: Incorrect number of elements.
```

## TEST CASE
### Input
```bash
Enter the number of rows: 0
Enter the number of columns: 3
```
### Output
```bash
Error: Invalid matrix dimensions.
```

## TEST CASE
### Input
```bash
Enter the number of rows: 3
Enter the number of columns: 0
```
### Output
```bash
Error: Invalid matrix dimensions.
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
