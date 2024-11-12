## โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน upgrade() ตามโปรโตไทป์ต่อไปนี้ เพื่อเพิ่ม gpa ขึ้นอีก 10% สำหรับผู้ชาย และ 20% สำหรับผู้หญิง (ให้สังเกตด้วยว่าหลังเรียกใช้ฟังก์ชันแล้ว gpa เพิ่มขึ้นหรือไม่)

## FIX CODE
```c++

#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function
```


## TEST CASE
### Input
```bash
sex = 'M', gpa = 3.00

```
### Output
```bash
3.30

```

## TEST CASE
### Input
```bash
sex = 'F', gpa = 4.00

```
### Output
```bash
4.00

```

## TEST CASE
### Input
```bash
sex = 'M', gpa = 0.00

```
### Output
```bash
0.00

```
## TEST CASE
### Input
```bash
sex = 'M', gpa = 4.00

```
### Output
```bash
4.00

```
## TEST CASE
### Input
```bash
sex = 'O', gpa = 3.50

```
### Output
```bash
3.50

```

## TEST CASE
### Input
```bash
sex = 'F', gpa = 2.58

```
### Output
```bash
3.10

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
