## โจทย์
เขียนโปรแกรมที่มีเมนูให้เลือก

(1) เพิ่มข้อมูลในไฟล์
(2) แก้ไขข้อมูล
(3) ลบข้อมูล
(4) ค้นหาชื่อนักเรียนเพื่อแสดงข้อมูล

โดยมีการอ่าน/เขียนไฟล์แบบ ASCII หรือ Binary อย่างใดอย่างหนึ่ง

## PRE CODE
```c++
#include <stdio.h>
#include <string.h>
#include <strlib.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

class LinkedList {
    protected :
        struct studentNode *start, **now ;
    public :
        LinkedList() ;
        ~LinkedList() ;
        void InsNode( char n[], int a, char s, float g ) ;
        void DelNode() ;
        void GoNext() ;
        void GoFirst() ;
        void GoLast() ;
        void ShowAll() ;
        int FindNode( char n[] ) ;
        struct studentNode *NowNode() ;
        void EditNode( char n[], int a, char s, float g ) ;
} ; //end class

void EditData( LinkedList *ll ) ;
void AddData( LinkedList *ll ) ;
void FindData( LinkedList *ll ) ;
void readfile( LinkedList *ll ) ;
void writefile( LinkedList *ll ) ;

int main() {
    LinkedList listA ;
    int menu ;
    readfile( &listA ) ;
    printf( "  Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : " ) ;
    scanf( "%d", &menu ) ;
    while( menu != 0 ) {
        switch( menu ) {
            case 1 : AddData( &listA ) ; break ;
            case 2 : EditData( &listA ) ; break ;
            case 3 : listA.DelNode() ; break ;
            case 4 : FindData( &listA ) ; break ;
            case 5 : listA.ShowAll() ; break ;
        }//end switch
        printf( "  Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : " ) ;
        scanf( "%d", &menu ) ;
    }//end while
    writefile( &listA ) ;
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 1
Enter name: John Doe
Enter age: 20
Enter sex (M/F): M
Enter GPA: 3.5
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 5

```
### Output
```bash
John Doe, Age: 20, Sex: M, GPA: 3.5

```

## TEST CASE
### Input
```bash
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 1
Enter name: Jane Smith
Enter age: 22
Enter sex (M/F): F
Enter GPA: 3.8
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 2
Enter name to edit: Jane Smith
Enter new age: 23
Enter new sex (M/F): F
Enter new GPA: 3.9
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 5

```
### Output
```bash
Jane Smith, Age: 23, Sex: F, GPA: 3.9

```

## TEST CASE
### Input
```bash
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 1
Enter name: Alice Johnson
Enter age: 21
Enter sex (M/F): F
Enter GPA: 3.6
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 3
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 5

```
### Output
```bash
Alice Johnson, Age: 21, Sex: F, GPA: 3.6

```
## TEST CASE
### Input
```bash
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 1
Enter name: Mike Brown
Enter age: 24
Enter sex (M/F): M
Enter GPA: 3.7
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 4
Enter name to find: Mike Brown

```
### Output
```bash
Mike Brown, Age: 24, Sex: M, GPA: 3.7

```
## TEST CASE
### Input
```bash
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 1
Enter name: Sarah Lee
Enter age: 25
Enter sex (M/F): F
Enter GPA: 3.2
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 5

```
### Output
```bash
Sarah Lee, Age: 25, Sex: F, GPA: 3.2

```
## TEST CASE
### Input
```bash
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 1
Enter name: Emily Davis
Enter age: 22
Enter sex (M/F): F
Enter GPA: 3.9
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 4
Enter name to find: Emily Davis

```
### Output
```bash
Emily Davis, Age: 22, Sex: F, GPA: 3.9

```
## TEST CASE
### Input
```bash
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 1
Enter name: Tom Clark
Enter age: 28
Enter sex (M/F): M
Enter GPA: 3.1
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 3
Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : 5

```
### Output
```bash
(no output as the list is empty after deletion)

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
