## โจทย์
ในงานด้านวิศวกรรมซอฟต์แวร์, การจัดการกับ ขั้นตอนการพัฒนาโปรเจกต์ เป็นสิ่งที่สำคัญ โดยคุณจะต้องสร้างโครงสร้างข้อมูลสำหรับการจัดการงานต่างๆ ในโปรเจกต์ เช่น การเก็บข้อมูลที่เกี่ยวข้องกับ ขั้นตอน (Task) ที่ต้องทำในโปรเจกต์นั้นๆ แต่ละงานจะมีข้อมูลดังนี้:
- ชื่อขั้นตอน (taskName): ชื่อของงานในโปรเจกต์
- วันเริ่มต้น (startDate): วันที่เริ่มงาน
- วันเสร็จ (endDate): วันที่เสร็จงาน
- สถานะ (status): สถานะการดำเนินงาน เช่น "ยังไม่เริ่ม", "กำลังดำเนินการ", "เสร็จสิ้น"

คุณจะต้องใช้ โครงสร้างข้อมูลแบบ Linked List เพื่อจัดเก็บข้อมูลเหล่านี้ โดยใช้คลาส TaskNode สำหรับเก็บข้อมูลงานในแต่ละขั้นตอน และ TaskList สำหรับจัดการลิสต์ของงาน

### รายละเอียดการทำงาน:
- TaskNode: โครงสร้างข้อมูลสำหรับเก็บข้อมูลแต่ละงาน
- TaskList: คลาสที่จัดการลิงค์ลิสต์ โดยสามารถเพิ่ม ลบ และแสดงข้อมูลงานได้

### ฟังก์ชันที่ต้องเขียน:
- InsertTask(): ฟังก์ชันนี้จะเพิ่มงานใหม่เข้าไปในลิงค์ลิสต์
- DeleteTask(): ฟังก์ชันนี้จะลบงานจากลิงค์ลิสต์
- SwapTasks(): ฟังก์ชันนี้จะทำการสลับตำแหน่งของสองงาน
- ShowTask(): ฟังก์ชันนี้จะทำการแสดงข้อมูลของงานในลิงค์ลิสต์

## PRE CODE
```c++
#include <stdio.h>
#include <string.h>

struct TaskNode {
    char taskName[50];   // ชื่องาน
    char startDate[20];  // วันที่เริ่มต้น
    char endDate[20];    // วันที่เสร็จ
    char status[20];     // สถานะงาน
    struct TaskNode *next;  // ตัวชี้ไปงานถัดไป
    struct TaskNode *prev;  // ตัวชี้ไปงานก่อนหน้า
};

class TaskList {
protected:
    struct TaskNode *start, **current;
public:
    TaskList(); // กำหนดค่าเริ่มต้นของ start และ current
    ~TaskList(); // คืนหน่วยความจำที่จองไว้
    void InsertTask(char taskName[], char startDate[], char endDate[], char status[]); // เพิ่มงานใหม่
    void DeleteTask(); // ลบงานปัจจุบัน
    void SwapTasks(); // สลับงานสองงาน
    void GoNext(); // ไปยังงานถัดไป
    virtual void ShowTask(); // แสดงข้อมูลในงานปัจจุบัน
};

class ProjectTaskList : public TaskList {
public:
    void ShowAllTasks(); // แสดงข้อมูลทุกงาน
};

int main() {
    TaskList listA;
    ProjectTaskList listB;
    TaskList *listC;

    // การรับค่าจากผู้ใช้และเพิ่มงาน
    listA.InsertTask("Set up project", "2024-11-01", "2024-11-10", "Not Started");
    listA.InsertTask("Write code", "2024-11-11", "2024-11-20", "Not Started");
    listA.GoNext();
    listA.ShowTask();

    listB.InsertTask("Research tools", "2024-11-05", "2024-11-10", "In Progress");
    listB.InsertTask("Design architecture", "2024-11-12", "2024-11-15", "Not Started");
    listB.GoNext();
    listB.DeleteTask();
    listB.ShowTask();

    listC = &listA;
    listC->GoNext();
    listC->ShowTask();

    listC = &listB;
    listC->ShowTask();

    return 0;
}//end function
```

## TEST CASE
### Input
```bash
InsertTask() -> "Set up project", "2024-11-01", "2024-11-10", "Not Started"
InsertTask() -> "Write code", "2024-11-11", "2024-11-20", "Not Started"
GoNext()
ShowTask()

InsertTask() -> "Research tools", "2024-11-05", "2024-11-10", "In Progress"
InsertTask() -> "Design architecture", "2024-11-12", "2024-11-15", "Not Started"
GoNext()
DeleteTask()
ShowTask()

```
### Output
```bash
Write code -> 
Design architecture -> Research tools -> 
Design architecture -> 

```

## TEST CASE
### Input
```bash
InsertTask() -> "Set up project", "2024-11-01", "2024-11-10", "Not Started"
InsertTask() -> "Write code", "2024-11-11", "2024-11-20", "In Progress"
InsertTask() -> "Test code", "2024-11-21", "2024-11-25", "Not Started"
SwapTasks() -> "Write code" <-> "Test code"
ShowTask()

```
### Output
```bash
Test code -> 

```

## TEST CASE
### Input
```bash
InsertTask() -> "Research tools", "2024-11-05", "2024-11-10", "In Progress"
InsertTask() -> "Set up project", "2024-11-01", "2024-11-10", "Not Started"
SwapTasks() -> "Research tools" <-> "Set up project"
ShowTask()

```
### Output
```bash
Set up project -> 

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
