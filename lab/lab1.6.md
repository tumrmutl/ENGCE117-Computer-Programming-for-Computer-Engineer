## โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

## FIX CODE
```c++
#include <stdio.h>
int GetMatrix( int *row, int *col ) ;
int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash
3 3
1 2 3
4 5 6
7 8 9

```
### Output
```bash
Enter number of rows and columns: 3 3
Enter matrix elements:
1 2 3
4 5 6
7 8 9

```

## TEST CASE
### Input
```bash
2 2
10 20
30 40

```
### Output
```bash
Enter number of rows and columns: 2 2
Enter matrix elements:
10 20
30 40

```

## TEST CASE
### Input
```bash
1 1
5

```
### Output
```bash
Enter number of rows and columns: 1 1
Enter matrix elements:
5

```

## TEST CASE
### Input
```bash
0 0

```
### Output
```bash
Enter number of rows and columns: 0 0

```

## TEST CASE
### Input
```bash
2 3
1 2 3
4 5

```
### Output
```bash
Error: Invalid matrix input

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
