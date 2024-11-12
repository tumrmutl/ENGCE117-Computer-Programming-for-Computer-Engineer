## โจทย์
สร้างสตรัคท์ studentNode, คลาส LinkedList และ NewList แล้วประกาศอ็อบเจกต์ listA, listB และ listC ใน main()


## PRE CODE
```c++
#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

class LinkedList {
    protected :
        struct studentNode *start, **now ;
    public :
        LinkedList() ; //กำหนดค่าเริ่มต้นของ start และ now
        ~LinkedList() ; //คืนหน่วยความจำที่จองไว้ในลิงค์ลิสต์ทุกโหนด
        void InsNode( char n[], int a, char s, float g ) ; //แทรกโหนดใหม่อยู่ก่อนโหนดปัจจุบัน
        void DelNode() ; //ลบโหนดปัจจุบัน
        GoNext() ; //เปลี่ยนโหนดปัจจุบันไปชี้ที่โหนดถัดไป
        virtual void ShowNode() ; //แสดงข้อมูลในโหนดปัจจุบัน
} ; //end class

class NewList : public LinkedList {
    public :
        GoFirst() ; //เปลี่ยนโหนดปัจจุบันไปชี้ที่โหนดเริ่มต้น
        virtual void ShowNode() ; //แสดงข้อมูลในทุกโหนดตั้งแต่เริ่มต้นถึงสุดท้าย
} ; //end class

int main() {
    LinkedList listA ;
    NewList listB ;
    LinkedList *listC ;

    listA.InsNode( "one", 1, 'A', 1.1 ) ;
    listA.InsNode( "two", 2, 'B', 2.2 ) ;
    listA.InsNode( "three", 3, 'C', 3.3 ) ;
    listA.GoNext() ;
    listA.ShowNode() ;

    listB.InsertNode( "four", 4, 'D', 4.4 ) ;
    listB.InsertNode( "five", 5, 'E', 5.5 ) ;
    listB.InsertNode( "six", 6, 'F', 6.6 ) ;
    listB.GoNext() ;
    listB.DelNode() ;
    listB.ShowNode() ;

    listC = &listA;
    listC->GoNext() ;
    listC->ShowNode() ;

    listC = &listB ;
    listC->ShowNode() ;

    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash

```
### Output
```bash
two 2 B 2.20
six four
one 1 A 1.10
six four
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
