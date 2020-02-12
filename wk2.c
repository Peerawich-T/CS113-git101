#include<stdio.h>
#include <stdlib.h>
void main() // void = function นี้จะไม่ return ค่าใดๆ
{
   //การใช้งานตัวแปนในภาษา C ต้องทำการประกาศก่อน
   //การประกาศ datatype ชื่อตัวแปร ;
   //มี keyword ลด เพิ่ม ขนาดของ ตัวแปร int short ลด long เพิ่ม
   printf("sizeof(char) = %d\n", sizeof(char));  // 1 byte
printf("sizeof(int) = %d\n", sizeof(int));       // 4
printf("sizeof(float) = %d\n", sizeof(float));   // 4
printf("sizeof(double) = %d\n", sizeof(double));  // 8
printf("sizeof(short int) = %d\n", sizeof(short int));//2
printf("sizeof(long int) = %d\n", sizeof(long int)); // 4
printf("sizeof(unsigend char) = %d\n", sizeof(unsigned char)); // 1
printf("sizeof(unsigned int) = %d\n", sizeof(unsigned int)); // 4
printf("sizeof(unsigned short int) = %d\n", sizeof(unsigned short));//2
printf("sizeof(void) = %d\n", sizeof(void));//1

// operator เพิ่มเติม 
// i++,i-- เพิ่ม,ลด 1 หลังจบ expression
// ++i,--i เพิ่ม,ลด 1 ทันที
// ในภาษา ซี ถ้าใช้int กับ int จะเป็นผลหารแบบปัดเศษทิ้ง
// logical operator
//  and(&&)
// or(||)
// not (!)
// , ใช้เพิ่มนิพจน์ในคำสั่ง
}
