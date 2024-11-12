## โจทย์
มีการสร้างสตรัคท์ studentNode ที่ประกอบด้วยชื่อ อายุ และคะแนน GPA ของนักเรียน โดยมีการประกาศตัวแปรและกำหนดค่าใน main() ตามตัวอย่างดังนี้

จงเขียนฟังก์ชัน GoNext() ที่ใช้ในการตรวจสอบว่า now ชี้ไปยังโหนดถัดไปหรือไม่ หากมีก็ให้เปลี่ยน now ไปยังโหนดถัดไปและแสดงข้อมูลในโหนดนั้น และถ้าหาก now ชี้ไปยังโหนดสุดท้ายแล้ว ให้แสดงข้อความ "End of List".

**คำอธิบาย:**
- สร้างโครงสร้าง studentNode ที่เก็บข้อมูลชื่อ (name), อายุ (age), และ GPA (gpa).
- ฟังก์ชัน GoNext() จะต้องเปลี่ยน now ให้ไปยังโหนดถัดไป ถ้ามีโหนดถัดไป ให้แสดงข้อมูลของโหนดนั้น ถ้าไม่มีก็แสดง "End of List".

## FIX CODE
```c++
#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    float gpa;
    struct studentNode *next;
};

void saveNode(struct studentNode *child, char n[], int a, float g);
void GoNext(struct studentNode **now);

int main() {
    struct studentNode *start, *now;
    start = new struct studentNode;
    saveNode(start, "Alice", 20, 3.5);

    start->next = new struct studentNode;
    saveNode(start->next, "Bob", 22, 3.8);

    start->next->next = new struct studentNode;
    saveNode(start->next->next, "Charlie", 21, 3.7);

    now = start;

    GoNext(&now);  // Move to next node and print
    GoNext(&now);  // Move to next node and print
    GoNext(&now);  // Move to next node and print

    return 0;
}

void saveNode(struct studentNode *child, char n[], int a, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->gpa = g;
    child->next = NULL;
}
```

**รายละเอียดการทำงานของโปรแกรม:**
- ฟังก์ชัน saveNode() ใช้ในการกำหนดค่าให้กับโหนดต่างๆ ที่สร้างขึ้น
- ฟังก์ชัน GoNext() ใช้ในการเคลื่อนที่ไปยังโหนดถัดไปและแสดงข้อมูลของโหนดถัดไป
- หากไม่มีโหนดถัดไปให้แสดง "End of List"

**เงื่อนไขเพิ่มเติม:**
- ถ้า now ชี้ไปยังโหนดสุดท้ายหลังจากการเรียก GoNext() จะต้องแสดง "End of List" แทนที่จะพยายามเข้าถึงโหนดถัดไป.


## TEST CASE
### Input
```bash
GoNext()  -> Alice
GoNext()  -> Bob
GoNext()  -> Charlie
GoNext()  -> End of List

```
### Output
```bash
Alice
Bob
Charlie
End of List

```

## TEST CASE
### Input
```bash
GoNext()  -> Alice
GoNext()  -> End of List

```
### Output
```bash
Alice
End of List

```

## TEST CASE
### Input
```bash
GoNext()  -> Alice
GoNext()  -> Bob
GoNext()  -> End of List

```
### Output
```bash
Alice
Bob
End of List

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
