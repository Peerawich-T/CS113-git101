#include <stdio.h>
#include <stdlib.h>
char name[15];
char number[5]; // เผือที่ให้ "\" 0 ด้วย
   
int main()
{printf("Enter name : ");
 //gets(name); // กำหนดจำนวนรับไม่ได้
 //fgets(name, 20, stdin); // อ่านได้จากหลายที
 //getchar(chr); // เอาแค่อักขระเดียว
 //fgets(number,5, stdin);
 //int i = atoi(number); // array to integer
 //long i = atol(); //array to long
 // float i =atof();// array to float
 //printf("number = %s,i = %d",number,i);
 //chr1 = getchar();
 //getchar();
 // chr1 = getchar();
 //fgets(number, 5  , stdin );
// int i = atoi(number);
 //puts (number);
// putchar(100);
 //putchar('u')
 //ใน ซี ไม่มี boolean data type ใช้อย่างอืนแทน
//int found = 0; //= false
//float isExist = 0.0;// = false
//char isOnline = '\0'; //= false
fgets(number,5,stdin);
int i = atoi(number);
//if (i > 0 && i <=10)
//{  printf("if =  %d\n",i > 0 && i <=10);}
// else if (i <= 20 || !found){
//    printf("else if\n");
//else{}
int count = 0;
//while (count <i){
    //count++ * count - 5 ; // ทำก่อนบวก
    //++count * count -5 ; // บวกก่อนทำ
    //printf ("count = %d\n", count);}
for (int j = 0; j<i;j++)
{printf ("count = %d\n", count);

}

}
 



  