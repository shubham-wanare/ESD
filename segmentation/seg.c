 // segmentation fault

 #include<stdio.h>
 #include<stdlib.h>

 int main(int argc,char const *argv[])
 {
     int *ptr;
     int *ptr1=0x4000;
     // ptr1=(int *)malloc(size of (int)*10);
     //*ptr=NULL;

     printf("Address:%d",*ptr1);

     return 0;

 }