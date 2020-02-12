#include<stdio.h>
int addTen(int x)//parameter profile
{
    x= x+10;
    printf("x in addtwenty = %d",x);
    return x;
}
int addTwenty();// function prototype
int x =1000; // global variable
int main()
{int x = 50;
 int y = addTen(x);
 printf("x main = %d",x);
printf("x addten = %d",y);
printf("x in addtwenty = %d",addTwenty(x));
}
int addTwenty()
{   
    x = x+20;
    
    return x;
} //ประกาศตัวแปร หนึ่งตัว ได้ 3อย่าง ที่อยู่ ตัวแปร ค่าของตัวแปร
  // ประกาศตัวแปร localต้องใส่ค่าทุกครั้งไมงั้นจะได้ค่ามั่วๆin memory
  // แต่ละ ฟังก์ชันจะได้พื้นในmemoryที่เป็นของตัวเองและจะเห็นข้อมูลแค่ใน นั้น กับ global
  // pass by value การcopy ค่าจากผู้เรียกใช้ ให้ function
  // หลัง function จบ จะโดนเคลียค่าในmemory
  //ตัวแปร global เมื่อถูก funcเปลียนค่าจะ ถูกแก้ไขไปเลย 
  // libray string.h ใช้ ต่อ char array โดย  function strcat(destination,source)
  // typec lib ใช้check ประเทศ
  // strcpy(des,sou) copyค่าไปใส่
  // * เมื่อมี 1operand คือ pointer


