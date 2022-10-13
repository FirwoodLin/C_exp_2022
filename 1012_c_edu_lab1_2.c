/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-12 20:25:02
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-12 20:48:45
 */
#include <stdio.h>
#ifdef FIR
#include <stdlib.h>
#endif
int main(){
    unsigned short int x,n,m;
    scanf("%hx%hd%hd",&x,&m,&n);
    if(m>=16 || m<0 || m+n>16){
        printf("error");
        #ifdef FIR
    system("pause");
    #endif
        return 0;
    }
    short ans= (x>>(m))<<(16-n);
    printf("%hx",ans);
    #ifdef FIR
    system("pause");
    #endif
    return 0;
}