#include<stdio.h>
int main()
{
  int x = 100;
  // *x = ค่าในaddress x
  // &x  = ตำแหน่งของ x
//  printf("x = %d\n", x);
//  printf("reference x = %lu\n",&x); //แสดง reference x
//  printf("reference x = %p",&x);// %p เลขฐาน16

 //int number[] = {3,4,5,6,7}; //การประกาศ array ต้องประกาศขนาดเสมอ
//  int number[100];
//  int number[100] = {3,4,5,6,7};
// printf("index 1 = %d\n",number[1]);
// printf("reference number[1] = %p\n",&number[1]);
// printf("reference number[0] = %p\n",&number[0]);
// printf("reference number = %p\n",&number);// ถ้าใส่แค่ชือตัวแปรจะ = ค่าแรก
// printf("reference number+1 = %p\n",&number+1);//pointerจะบวกตามdata type
// number[2000]= 2000;
// printf("index 1 = %d\n",number[2000]);
// printf("reference number[1] = %p",&number[2000]);
//  int number[] = {3,4,5,6,7}; //address {00,04,08,12,...}
//  int *ptr= &x; //การประกาสตัวแปร pointer type ตามด้วย*
//   int *arrPtr;
//   arrPtr = number;//00 // ถ้าเป็น pointer = pointer คือการทำให้ชี้ address เดียวกัน
//   arrPtr +=2;// เลื่อนไปสองตำแหน่ง =5 เลข addressเลื่อนไป(4*(2))
//   *arrPtr = *arrPtr +10;//นำค่าที pointer ชี้มาบวกแล้ว assign กลับ
//   printf("arrptr = %p,*arrPtr = %d",arrPtr,*arrPtr);
//  int number[100] = {3,4,5,6,7};
//  for(int*ptr=number;ptr<=&number[4];ptr++)
//  {
//      printf("[%p] = %d\n",ptr,*ptr);
//  }
//  int *ptr2 = number;
//  for(int i = 0;i<5 ;i++)
//  {
//      printf("[%p] = %d\n",ptr2+i,*(ptr2+i));
//  }// 2 loop print same thing
//  char input[100];
//  int count = 0;
//  char c;
//  while ( (c= getchar()) != '\n')
//  {
//      input[count] =c;
//      ++count;
//  } // function gets
//  input[count]= '\0';
//  for (char *cPtr = input ;*cPtr != '\0' ;cPtr++)
//  {
//      printf("%c\n",*cPtr);
//  }
char c;
int i;
char s[100];
 scanf("%d-%c-%s",&i,&c,s);//s is array if fill &s = show address of pointer 
 printf("%d %c %s",i,c,s);//เวลาใสค่าต้อง ใส่ตาม format
 }