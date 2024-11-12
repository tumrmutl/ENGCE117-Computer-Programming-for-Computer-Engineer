## โจทย์
เมื่อลิงค์ลิสต์มีจุดเริ่มต้น (start) และโหนดปัจจุบัน (now) เป็นพอยน์เตอร์ 1 ระดับ ถูกประกาศใน main()
- ฟังก์ชัน AddNode() ทำหน้าที่เพิ่มโหนดใหม่ต่อท้ายลิงค์ลิสต์ และส่งออกโหนดใหม่มาให้โหนดปัจจุบัน
- ส่วนฟังก์ชัน InsertNode() มีหน้าที่แทรกโหนดใหม่อยู่ก่อนโหนดปัจจุบัน
- ฟังก์ชัน DelNode() มีหน้าที่ลบโหนดปัจจุบันพร้อมทั้งเปลี่ยนโหนดปัจจุบันให้ชี้ไปที่โหนดถัดไป แต่ถ้าไม่มีก็ให้ชี้โหนดก่อนหน้า

### ฟังก์ชันเหล่านี้จะทำงานเป็นขั้นตอนอย่างไร?
นำทฤษฏีเหล่านี้มาสร้าง GoBack(), AddNode(), InsertNode() และ DelNode() รองรับการเรียกใช้งานดังต่อไปนี้

## PRE CODE
```c++
#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
    struct studentNode *back ;
} ;

void ShowAll( struct studentNode *walk ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
    GoBack( &now ) ;
    DelNode( now ) ; ShowAll( start ) ;
    DelNode( now ) ; ShowAll( start ) ;
    DelNode( now ) ; ShowAll( start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while
    printf( " " ) ;
}//end function
```

## TEST CASE
### Input
```bash
AddNode() -> one
AddNode() -> two
InsertNode() -> three
InsertNode() -> four
GoBack() -> 
DelNode() -> 
DelNode() -> 
DelNode() -> 

```
### Output
```bash
one 
one two 
one two three 
one two three four 
three two one 
two one 
one 

```

## TEST CASE
### Input
```bash
AddNode() -> one
GoBack() -> 
AddNode() -> two
InsertNode() -> three
DelNode() -> 

```
### Output
```bash
one 
one two 
one two three 
two one 

```

## TEST CASE
### Input
```bash
AddNode() -> one
AddNode() -> two
GoBack() -> 
AddNode() -> three
InsertNode() -> four
GoBack() -> 
DelNode() -> 

```
### Output
```bash
one 
one two 
one two three 
four one two three 
four one two 

```
## TEST CASE
### Input
```bash
AddNode() -> one
AddNode() -> two
InsertNode() -> three
GoBack() -> 
DelNode() -> 

```
### Output
```bash
one 
one two 
one two three 
two one 

```
## TEST CASE
### Input
```bash
AddNode() -> one
InsertNode() -> two
GoBack() -> 
DelNode() -> 

```
### Output
```bash
one 
one two 
two one 

```
## TEST CASE
### Input
```bash
AddNode() -> one
GoBack() -> 
AddNode() -> two
GoBack() -> 
DelNode() -> 

```
### Output
```bash
one 
one two 
two 

```
## TEST CASE
### Input
```bash
AddNode() -> one
AddNode() -> two
InsertNode() -> three
DelNode() -> 
DelNode() -> 

```
### Output
```bash
one 
one two 
two 

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
