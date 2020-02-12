#include <stdio.h>
#include <stdlib.h>
void main()
{
    //array เป็นตัวแปรที่เก็บค่าชนิดเดียวกันไว้หลายค่า เข้าถึงด้วย index
    // index เริ่มที่ 0 !!!!!!
    char array[] ="ComPuter"; //ต้องกำหนดจำนวนสมาชิกเริ่มต้น (ถ้าเป็นcharตัวสุดท้ายจะเป็น '\0')
    int  test[7]; // ถ้าไม่กำหนดค่า จะเป็นค่า default ของ int เป็น 0
      printf("%d\n",test[3]);
    printf("%c\n",array[0]); //ได้'c'ออกมา
    // ชื่อของ arrayเป้น pointer ที่ใช้ไปยังarrayตำแหน่งที่ 0 
    printf("%c\n",*array);
    //array สามารถมีได้หลายมิติ
    int twoDiArray[][2] ={{1},{2,3}};
    printf("%d\n",twoDiArray[1][1]);//ผลลัพธ์เป้น 3
}