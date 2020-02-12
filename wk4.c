#include <stdio.h>
#include <stdlib.h>
void main()
{
    char n[12];
    int i, number ;
    i=0;
    gets(n);
    number = atoi(n);
    // ไม่ต้องใส่วงเล็บถ้าใน มีคำสั่งเดียว
    while( i!= number) // (ต้องเป็น true) loopถึงทำงาน
      i++;             
    printf("%d\n",i);
    i = 0;
    while( i!= number)
    {
        printf("%d\n",i);
        i++;
    }
    
    for(i=0;i<number ;i++)//(เงื่อนไขเริ่มต้น;เงื่อนไขcheckเข้าloop;เมื่อ loop ทำเสร็จ)
        printf("%d\n",i);
    if(i == number)      // ในวงเล็บต้องเป็นtrue
     printf("%d\n", number);
    else
     printf("%d",i);
    
    
}