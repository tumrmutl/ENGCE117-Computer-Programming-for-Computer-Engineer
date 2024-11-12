## โจทย์
โปรแกรมที่คุณต้องสร้างจะจัดการกับ กระบวนการพัฒนาโปรเจกต์ โดยมีโครงสร้างข้อมูลที่ใช้ Double Linked List ซึ่งจะเก็บข้อมูลของ งาน ที่ต้องทำในแต่ละโปรเจกต์ ข้อมูลในแต่ละงานจะประกอบด้วย:
- ชื่อของงาน (taskName)
- วันที่เริ่มต้น (startDate)
- วันที่เสร็จสิ้น (endDate)
- สถานะของงาน (status) เช่น "ยังไม่เริ่ม", "กำลังดำเนินการ", "เสร็จสิ้น"

### ฟังก์ชันที่ต้องทำการเขียน:
- AddTask(): ฟังก์ชันนี้จะทำการเพิ่มงานใหม่เข้ามาในลิงค์ลิสต์ โดยเพิ่มงานใหม่ที่ท้ายสุดของลิงค์ลิสต์
- InsertTask(): ฟังก์ชันนี้จะทำการแทรกงานใหม่เข้าไปก่อนงานที่กำลังอยู่ในตำแหน่งปัจจุบัน
- DelTask(): ฟังก์ชันนี้จะทำการลบงานที่ปัจจุบันอยู่จากลิงค์ลิสต์ และย้ายตัวชี้ (pointer) ไปยังงานถัดไป หรือถ้าไม่มีก็จะย้ายไปยังงานก่อนหน้า
- SwapTasks(): ฟังก์ชันนี้จะทำการสลับตำแหน่งระหว่างงานสองงานในลิงค์ลิสต์
- ShowAllTasks(): ฟังก์ชันนี้จะแสดงลำดับงานทั้งหมดในลิงค์ลิสต์จากงานแรกจนถึงงานสุดท้าย

### โครงสร้างข้อมูล
```
struct TaskNode {
    char taskName[50];   // ชื่องาน
    char startDate[15];  // วันที่เริ่มต้น
    char endDate[15];    // วันที่เสร็จสิ้น
    char status[20];     // สถานะของงาน
    struct TaskNode *next;  // ตัวชี้ไปงานถัดไป
    struct TaskNode *back;  // ตัวชี้ไปงานก่อนหน้า
};

```

## PRE CODE
```c++
#include <stdio.h>
#include <string.h>

struct TaskNode {
    char taskName[50];
    char startDate[15];
    char endDate[15];
    char status[20];
    struct TaskNode *next;
    struct TaskNode *back;
};

void ShowAllTasks(struct TaskNode *walk);
struct TaskNode* AddTask(struct TaskNode **start, char *taskName, char *startDate, char *endDate, char *status);
void InsertTask(struct TaskNode *now, char *taskName, char *startDate, char *endDate, char *status);
void DelTask(struct TaskNode *now);
void SwapTasks(struct TaskNode *task1, struct TaskNode *task2);

int main() {
    struct TaskNode *start, *now;
    start = NULL;

    now = AddTask(&start, "Set up project", "2024-11-01", "2024-11-10", "Not Started");
    ShowAllTasks(start);
    now = AddTask(&start, "Write code", "2024-11-11", "2024-11-20", "Not Started");
    ShowAllTasks(start);
    InsertTask(now, "Research", "2024-11-05", "2024-11-10", "Not Started");
    ShowAllTasks(start);

    SwapTasks(now, now->next);  // Swap Write code and Research tasks
    ShowAllTasks(start);
    
    DelTask(now);  // Delete "Research" task
    ShowAllTasks(start);

    return 0;
}

void ShowAllTasks(struct TaskNode *walk) {
    while (walk != NULL) {
        printf("%s -> ", walk->taskName);
        walk = walk->next;
    }
    printf("End\n");
}

```

## TEST CASE
### Input
```bash
AddTask() -> Set up project
AddTask() -> Write code
InsertTask() -> Research
SwapTasks() -> Write code <-> Research
DelTask() -> Research

```
### Output
```bash
Set up project -> Write code -> 
Set up project -> Write code -> Research -> 
Set up project -> Research -> Write code -> 
Set up project -> Write code -> 

```

## TEST CASE
### Input
```bash
AddTask() -> Design architecture
AddTask() -> Implement modules
InsertTask() -> Planning
SwapTasks() -> Design architecture <-> Implement modules
DelTask() -> Implement modules

```
### Output
```bash
Design architecture -> Implement modules -> 
Design architecture -> Implement modules -> Planning -> 
Implement modules -> Design architecture -> Planning -> 
Design architecture -> Planning -> 

```

## TEST CASE
### Input
```bash
AddTask() -> Set up environment
AddTask() -> Write documentation
InsertTask() -> Research tools
SwapTasks() -> Set up environment <-> Write documentation
DelTask() -> Set up environment

```
### Output
```bash
Set up environment -> Write documentation -> 
Set up environment -> Write documentation -> Research tools -> 
Write documentation -> Set up environment -> Research tools -> 
Write documentation -> Research tools -> 

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
