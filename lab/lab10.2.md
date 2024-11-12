## โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชันตามอัลกอริทึม Tower of Hanoi

## PRE CODE
```c++

#include <stdio.h>

void TowerHanoi( int m, int i, int j ) ;

int main() {
    TowerHanoi( 3, 1, 3 ) ;
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash

```
### Output
```bash
Disc 1 from 1 to 3
Disc 2 from 1 to 2
Disc 1 from 3 to 2
Disc 3 from 1 to 3
Disc 1 from 2 to 1
Disc 2 from 2 to 3
Disc 1 from 1 to 3
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
