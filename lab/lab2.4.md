## โจทย์
เขียนฟังก์ชัน explode() ที่สามารถแยกข้อความใน str1 เป็นหลายๆ ส่วนโดยใช้ตัวอักขระหรือหลายตัวอักขระใน splitters[] เป็นตัวแบ่งแยก ซึ่งจะต้องจัดการกรณีที่มีช่องว่าง หรือค่าที่ไม่ใช่ตัวอักขระในข้อความ โดยเก็บผลลัพธ์ใน str2[] และจำนวนข้อความที่แยกได้ใน count ซึ่งผลลัพธ์จะต้องไม่มีช่องว่างหรือค่าที่ไม่ได้ใช้ในแต่ละคำที่แยกออกมา

**ข้อกำหนด**
- `str1`: ข้อความที่ต้องการแยก
- `splitters`: ตัวอักขระที่ใช้เป็นตัวแบ่ง (สามารถมีหลายตัวได้)
- `str2`: อาร์เรย์ที่ใช้เก็บผลลัพธ์ที่ได้จากการแยก
- `count`: ตัวแปรที่ใช้เก็บจำนวนข้อความที่แยกได้

**ตัวอย่าง**
Input
```bash
str1 = "I,Love World/You"
splitters = ", /"

```
Output
```bash
str2[0] = "I"
str2[1] = "Love"
str2[2] = "World"
str2[3] = "You"
count = 4

```

## FIX CODE
```c++
void explode(char str1[], char splitters[], char str2[][10], int *count);
```

## TEST CASE
### Input
```bash
   Hello  World  From Me

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
Apple,,Orange,Banana,,Grapes

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
apple-orange!banana*grapes

```
### Output
```bash
str2[0] = "apple"
str2[1] = "orange"
str2[2] = "banana"
str2[3] = "grapes"
count = 4

```
## TEST CASE
### Input
```bash
apple-orange!banana*grapes

```
### Output
```bash
str2[0] = "apple"
str2[1] = "orange"
str2[2] = "banana"
str2[3] = "grapes"
count = 4

```
## TEST CASE
### Input
```bash
fruit_apple fruit_orange fruit_banana

```
### Output
```bash
str2[0] = "fruit_apple"
str2[1] = "fruit_orange"
str2[2] = "fruit_banana"
count = 3

```

## TEST CASE
### Input
```bash
,,   ,Hello, World!   , ,

```
### Output
```bash
str2[0] = "Hello"
str2[1] = "World!"
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
