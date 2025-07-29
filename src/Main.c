#include "C:/Wichtig/System/Static/Library/String.h"

int main(){
    
    //String fs = String_Format("%d : %d",0,0);
    //char* cstr = String_CStr(&fs);
    //printf("%s",cstr);
    //free(cstr);
    //String_Free(&fs);
    //String_Printf((int (*)(char*))printf,"Human:{%s,%d}\n","Alex",17);

    //char* cstr = Number_Get(-1240);
    //printf("%s\n",cstr);
    //free(cstr);
    
    Double num = Double_Parse("100.0",DOUBLE_SIGNED);
    if(num!=DOUBLE_PARSE_ERROR)     printf("%10.10f\n",num);
    else                            printf("Double Parse Error.\n");

    char* cstr = Double_Get(num,8);
    printf("%s\n",cstr);
    free(cstr);

    return 0;
}
