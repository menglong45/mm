#include <stdio.h>
int main(void)
{
    int iscode=1,k;
    char p,c;
    printf("enter put 加密 1 解密 0\n");
    scanf("%d", &iscode);
    printf("enter key:\n");
        scanf("%d", &k);
        if(k<0){k=k%26+26;}
        else{k=k%26;}
        if(iscode)
        k=26-k;
        getchar();
        printf("enter your date:\n");
        do
        {
        scanf("%c",&p);
        if('p'=='\n') break;
        c=p;
        if(p>='a'&&p<='z')
        c='a'+(p-'a'+k)%26;
        if(p>='A'&&p<='Z')
        c='A'+(p-'A'+k)%26;
        printf("%c",c);
        } while (1);
        printf("\n");
        return 0;
}