#include<stdio.h>
#include<string.h>
void f(char *S){
    # ifdef CONVERT
    for(int i=0;i<strlen(S);i++)
        if(S[i]>'9')
            if(S[i]<'a')S[i]=S[i]+32;
            else S[i]=S[i]-32;
        else S[i]=S[i];
    printf("已转换：%s\n",S);
    #else
	 printf("未转换：%s\n",S);	
    # endif
   
}
int main(){
    char s[100];
    printf("请输入字符：");
    fgets(s,100,stdin);
    f(s);
    return 0;
}

1123
