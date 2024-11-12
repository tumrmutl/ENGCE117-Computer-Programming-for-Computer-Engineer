## โจทย์
จงเขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชันตามอัลกอริทึม Root of function

## PRE CODE
```c++

#include <stdio.h>

double f( double x ) ;
double RootOfFunction( double xl, double xr, double epsilon ) ;

int main() {
    double root ;
    root = RootOfFunction( -1, 10, 0.1 ) ;
    printf( "Root = %.1f", root ) ;
    return 0 ;
}//end function

double f( double x ) {
    return 2 * x - 5 ;
}//end function
```

## TEST CASE
### Input
```bash

```
### Output
```bash
-1.0 4.5 10.0
-1.0 1.8 4.5
1.8 3.1 4.5
1.8 2.4 3.1
2.4 2.8 3.1
2.4 2.6 2.8
2.4 2.5 2.6
2.4 2.5 2.5

Root = 2.5
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
