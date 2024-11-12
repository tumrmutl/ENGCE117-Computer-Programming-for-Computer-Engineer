## โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
<br />ตัวอย่างเช่น str1 = "I love you"
<br />จะได้ str2 = "uoy evol I"

## FIX CODE
```c++
#inclue <stdio.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function
```

## TEST CASE
### Input
```bash
I Love You

```
### Output
```bash
uoY evaL I

```

## TEST CASE
### Input
```bash
Hello World

```
### Output
```bash
dlroW olleH

```

## TEST CASE
### Input
```bash
Program

```
### Output
```bash
margorP

```
## TEST CASE
### Input
```bash
This is a test

```
### Output
```bash
tset a si sihT

```
## TEST CASE
### Input
```bash
Hello@World!

```
### Output
```bash
!dlroW@olleH

```
## TEST CASE
### Input
```bash
12345

```
### Output
```bash
54321

```

## TEST CASE
### Input
```bash
This is a long sentence to test the function.
```
### Output
```bash
.noitcnuF eht tset ot ecnetnes gnol a si sihT
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
