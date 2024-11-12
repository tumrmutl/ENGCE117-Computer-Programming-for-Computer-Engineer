## โจทย์
เขียนคำสั่งในการสร้างและเรียกฟังก์ชัน explode() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มาแยกเป็นหลายข้อความเก็บไว้ใน str2 โดยใช้ตัวอักขระใน splitter เป็นตัวแบ่งแยก และ count เก็บจำนวนข้อความที่แบ่งได้

ตัวอย่างเช่น

str1 = "I/Love/You"
splitter = '/'

จะได้ผลลัพธ์คือ
- str2[0] = "I"
- str2[1] = "Love"
- str2[2] = "You"
count = 3



## FIX CODE
```c++
#include <stdio.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", "/" ) ;
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash
I/Love/You

```
### Output
```bash
str2[0] = "I"
str2[1] = "Love"
str2[2] = "You"
count = 3

```

## TEST CASE
### Input
```bash
Hello World From Me

```
### Output
```bash
str2[0] = "Hello"
str2[1] = "World"
str2[2] = "From"
str2[3] = "Me"
count = 4

```

## TEST CASE
### Input
```bash
I///Love//You/

```
### Output
```bash
str2[0] = "I"
str2[1] = "Love"
str2[2] = "You"
count = 3

```
## TEST CASE
### Input
```bash
Apple,Orange,Banana,Grapes

```
### Output
```bash
str2[0] = "Apple"
str2[1] = "Orange"
str2[2] = "Banana"
str2[3] = "Grapes"
count = 4

```
## TEST CASE
### Input
```bash

```
### Output
```bash
count = 0

```
## TEST CASE
### Input
```bash
January-February-March-April

```
### Output
```bash
str2[0] = "January"
str2[1] = "February"
str2[2] = "March"
str2[3] = "April"
count = 4

```
## TEST CASE
### Input
```bash
key:value:key2:value2

```
### Output
```bash
str2[0] = "key"
str2[1] = "value"
str2[2] = "key2"
str2[3] = "value2"
count = 4

```

## TEST CASE
### Input
```bash
   Hello   World  

```
### Output
```bash
str2[0] = "Hello"
str2[1] = "World"
count = 2

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
