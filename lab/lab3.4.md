## โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetStudent() ตามโปรโตไทป์ต่อไปนี้ เพื่อรับจำนวนห้องเรียน และข้อมูลของนักเรียนห้องละ 10 คนจากคีย์บอร์ด

## FIX CODE
```c++
#include <stdio.h>

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash
2
Room 1:
Student 1: John, Age: 18
Student 2: Alice, Age: 19
Student 3: Bob, Age: 17
Student 4: Carol, Age: 20
Student 5: David, Age: 18
Student 6: Eva, Age: 21
Student 7: Frank, Age: 22
Student 8: Grace, Age: 19
Student 9: Helen, Age: 18
Student 10: Jack, Age: 20
Room 2:
Student 1: Leo, Age: 21
Student 2: Mia, Age: 22
Student 3: Nick, Age: 20
Student 4: Olivia, Age: 19
Student 5: Peter, Age: 23
Student 6: Quinn, Age: 21
Student 7: Rachel, Age: 19
Student 8: Steve, Age: 18
Student 9: Tom, Age: 22
Student 10: Ursula, Age: 20

```
### Output
```bash
Room 1: 10 students entered.
Room 2: 10 students entered.

```

## TEST CASE
### Input
```bash
1
Room 1:
Student 1: Anna, Age: 17
Student 2: Brian, Age: 18
Student 3: Chris, Age: 20
Student 4: Daisy, Age: 22
Student 5: Ethan, Age: 21
Student 6: Fiona, Age: 18
Student 7: George, Age: 19
Student 8: Hannah, Age: 20
Student 9: Ian, Age: 22
Student 10: Jack, Age: 19

```
### Output
```bash
Room 1: 10 students entered.

```

## TEST CASE
### Input
```bash
3
Room 1:
Student 1: Alan, Age: 20
Student 2: Lucy, Age: 21
Student 3: Max, Age: 19
Student 4: Owen, Age: 20
Student 5: Ethan, Age: 22
Student 6: Daisy, Age: 23
Student 7: Scott, Age: 18
Student 8: Alice, Age: 21
Student 9: Peter, Age: 19
Student 10: Rachel, Age: 18
Room 2:
Student 1: Carl, Age: 21
Student 2: John, Age: 20
Student 3: Steve, Age: 19
Student 4: Ian, Age: 22
Student 5: Emily, Age: 21
Student 6: Grace, Age: 23
Student 7: Helen, Age: 20
Student 8: James, Age: 21
Student 9: Claire, Age: 22
Student 10: Tom, Age: 19
Room 3:
Student 1: George, Age: 18
Student 2: Jessica, Age: 21
Student 3: Ian, Age: 22
Student 4: Kate, Age: 19
Student 5: Leo, Age: 23
Student 6: Mona, Age: 18
Student 7: Nick, Age: 21
Student 8: Paul, Age: 20
Student 9: Quinn, Age: 19
Student 10: Rachel, Age: 22

```
### Output
```bash
Room 1: 10 students entered.
Room 2: 10 students entered.
Room 3: 10 students entered.

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
