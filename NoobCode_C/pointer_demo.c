//
//  pointer_demo.c
//  NoobCode_C
//
//  Created by admin on 2018/9/15.
//  Copyright © 2018年 C语言初学. All rights reserved.
//

#include "pointer_demo.h"
void printStr(){
        char strs[]="www.baidu.com";
        int len=sizeof(strs)/sizeof(char),i;
        for(i=0;i<len;i++){
            printf("%c",*(strs+i));
        }
        printf("\n");
}
