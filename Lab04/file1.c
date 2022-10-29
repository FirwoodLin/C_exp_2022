/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-29 19:40:33
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-29 19:40:33
 */
/*源文件file1.c的内容*/
	#include "file.h"
int x,y;             /* 外部变量的定义性说明 */
char ch;             /* 外部变量的定义性说明 */
int main(void)
{
        x=10;
        y=20;
        ch=getchar();
        printf("in file1 x=%d,y=%d,ch is %c\n",x,y,ch);
        func1();
 return 0;
}
