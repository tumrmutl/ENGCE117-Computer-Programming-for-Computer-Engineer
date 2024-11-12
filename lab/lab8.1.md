## โจทย์

ในงานพัฒนาโปรแกรมสำหรับห้องสมุด คุณต้องสร้างระบบเพื่อจัดการ รายชื่อหนังสือ ที่มีข้อมูลดังนี้:
- ชื่อหนังสือ (title): ชื่อหนังสือที่จัดเก็บ
- ผู้แต่ง (author): ชื่อผู้แต่งหนังสือ
- จำนวนหน้า (pages): จำนวนหน้าของหนังสือ

### รายละเอียดการทำงาน:
- สร้าง โครงสร้างข้อมูล (Struct) สำหรับเก็บข้อมูลของหนังสือ
- สร้าง คลาส (Class) ที่ใช้ในการจัดการรายการหนังสือ
- สร้าง ฟังก์ชัน (Method) ที่สามารถเพิ่ม ลบ และแสดงข้อมูลหนังสือได้
- สร้าง Linked List เพื่อเก็บข้อมูลหนังสือ

## PRE CODE
```c++
#include <stdio.h>
#include <string.h>

struct BookNode {
    char title[50];      // ชื่อหนังสือ
    char author[50];     // ผู้แต่ง
    int pages;           // จำนวนหน้า
    struct BookNode *next; // ตัวชี้ไปหนังสือถัดไป
};

class BookList {
protected:
    struct BookNode *start;
public:
    BookList(); // กำหนดค่าเริ่มต้นของ start
    ~BookList(); // คืนหน่วยความจำที่จองไว้
    void InsertBook(char title[], char author[], int pages); // เพิ่มหนังสือใหม่
    void DeleteBook(); // ลบหนังสือปัจจุบัน
    void ShowBooks(); // แสดงข้อมูลหนังสือทั้งหมดในลิสต์
};

int main() {
    BookList bookList;

    // การรับค่าจากผู้ใช้และเพิ่มหนังสือ
    bookList.InsertBook("The Great Gatsby", "F. Scott Fitzgerald", 180);
    bookList.InsertBook("1984", "George Orwell", 328);
    bookList.InsertBook("To Kill a Mockingbird", "Harper Lee", 281);

    bookList.ShowBooks();

    return 0;
}
```

## TEST CASE
### Input
```bash
InsertBook() -> "The Great Gatsby", "F. Scott Fitzgerald", 180
InsertBook() -> "1984", "George Orwell", 328
InsertBook() -> "To Kill a Mockingbird", "Harper Lee", 281
ShowBooks()

```
### Output
```bash
The Great Gatsby by F. Scott Fitzgerald, 180 pages
1984 by George Orwell, 328 pages
To Kill a Mockingbird by Harper Lee, 281 pages

```

## TEST CASE
### Input
```bash
InsertBook() -> "The Great Gatsby", "F. Scott Fitzgerald", 180
InsertBook() -> "1984", "George Orwell", 328
DeleteBook()
ShowBooks()

```
### Output
```bash
The Great Gatsby by F. Scott Fitzgerald, 180 pages

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
