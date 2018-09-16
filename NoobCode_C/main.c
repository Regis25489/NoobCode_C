//
//  main.c
//  NoobCode_C
//
//  Created by admin on 2018/9/13.
//  Copyright © 2018年 C语言初学. All rights reserved.
//


#include <stdio.h>
#include "enum_demo.h"
#include "struct_demo.h"
#include "pointer_demo.h"
int plus(int a,int b){
    return a+b;
}
int main(int argc, const char * argv[]) {
    //    int a,b;
    //    printf("Hello, World!\n");
    //    printf("%d\n",plus(1, 1));
    //    char *hello="hello";
    //    printf("%s\n",hello);
    //    scanf("%d",&a);
    //    scanf("%d",&b);
    //    printf("%d\n",plus(a, b));
    //#ifdef WINVER
    //    printf("win32");
    //#endif
    //#ifdef __linux
    //    printf("linux\n");
    //#endif
    //#ifdef __unix
    //    printf("unix\n");
    //#else
    //    printf("unknow\n");
    //#endif
    //#ifdef WIN32
    //#error wrong...
    //#endif
    //指针
    printStr();
    //结构体
    CHILD child1={12,"xiao ming"},*c1=&child1;
    printf("%d\n",c1->age);
    printf("%s\n",c1->name);
    //枚举
    WEEK a=Mon,b=Tues,c=Thurs;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}


