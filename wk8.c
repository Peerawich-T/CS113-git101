#include <stdio.h>
#include <stdlib.h>
void main()
{
struct node // struct คือ ชุดของข้อมูลที่มีความเกี่ยวข้องกัน
{
    int data;  //ข้อมูลแต่ละข้อมูลเรียกว่า field
    struct node *link;// ตัวชี้ไปยังชุดข้อมูลถัดไป
};
//โดยการสร้าง link list นั้นจะมี 2 field คือ ตัวเก็บข้อมูล และตัวที่ชี้ไปยังstruct ตัวต่อไปเรื่อยๆ...
//มักจะกำหนด ตัวแปรpointer ชื่อ head ชี้ตัวแรกไว้
//การเข้าถึง field จะใช้ . และ ->   ex. node.data, node ->data
// typedef ชื่อตัวแปรที่มีอยู่ ชื่อที่เราสะดวก
}

