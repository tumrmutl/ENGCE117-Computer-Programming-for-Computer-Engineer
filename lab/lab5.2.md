## โจทย์
เมื่อลิงค์ลิสต์มีจุดเริ่มต้น (start) เป็นพอยน์เตอร์ 1 ระดับ และ โหนดปัจจุบัน (now) เป็นพอยน์เตอร์ 2 ระดับ ถูกประกาศใน main() แล้ว...

ฟังก์ชัน InsertNode() ทำหน้าที่แทรกโหนดใหม่ที่อยู่ก่อนโหนดปัจจุบัน

และฟังก์ชัน DelNode() มีหน้าที่ลบโหนดปัจจุบัน จะทำงานเป็นขั้นตอนอย่างไร?

จงนำหลักการนี้มาสร้างฟังก์ชัน GoNext(), InsNode() และ DelNode() รองรับการเรียกใช้งานดังต่อไปนี้

## PRE CODE
```c++
#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void ShowAll( struct studentNode **walk ) ;

int main() {
    struct studentNode *start, **now ;
    start = NULL ; now = &start ;
    InsNode( now, "one", 6, 'M', 3.11 ) ; ShowAll( &start ) ;
    InsNode( now, "two", 8, 'F', 3.22 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( &start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    DelNode( now ) ; ShowAll( s&tart ) ;
    return 0 ;
}//end function

void showAll( struct studentNode **walk ) {
    while( *walk != NULL ) {
        printf( "%s ", (*walk)->name ) ;
        walk = &(*walk)->next ;
    }//end while
    printf( " " ) ;
}//end function
```

## TEST CASE
### Input
```bash
InsNode() -> one
InsNode() -> two
GoNext() -> 
InsNode() -> three
InsNode() -> four
GoNext() -> 
DelNode() -> 

```
### Output
```bash
one 
two one 
two one three 
two one three four 
two one three

```

## TEST CASE
### Input
```bash
InsNode() -> one
GoNext() -> 
InsNode() -> two
GoNext() -> 
InsNode() -> three
DelNode() -> 

```
### Output
```bash
one 
one two 
one two three 
one two

```
## TEST CASE
### Input
```bash
InsNode() -> one
InsNode() -> two
GoNext() -> 
InsNode() -> three
DelNode() -> 

```
### Output
```bash
two one 
two one three 
two one

```
## TEST CASE
### Input
```bash
InsNode() -> one
GoNext() -> 
DelNode() -> 

```
### Output
```bash
one 

```
## TEST CASE
### Input
```bash
InsNode() -> one
InsNode() -> two
GoNext() -> 
DelNode() -> 

```
### Output
```bash
one 
one two 

```

## TEST CASE
### Input
```bash
InsNode() -> one
InsNode() -> two
InsNode() -> three
DelNode() -> 

```
### Output
```bash
three two one 
three two

```
## TEST CASE
### Input
```bash
InsNode() -> one
InsNode() -> two
InsNode() -> three
GoNext() -> 
InsNode() -> four
DelNode() -> 

```
### Output
```bash
three two one 
four three two one 
four three two

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
