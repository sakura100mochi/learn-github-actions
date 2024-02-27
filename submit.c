#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    subject[5];
    char    branch[2];
    char    buf[100];

    system("git log");
    printf("Please input your subject numbre : CppProject");
    scanf("%s", subject);
    printf("Please input 1(feature) or 2(fix) : ");
    scanf("%s", branch);
    if (branch[0] == '1')
    {
        snprintf(buf, 34, "git branch feature/CppProject%s", subject);
        system(buf);
        snprintf(buf, 34, "git switch feature/CppProject%s", subject);
        system(buf);
    }
    else
    {
        snprintf(buf, 30, "git branch fix/CppProject%s", subject);
        system(buf);
        snprintf(buf, 30, "git switch fix/CppProject%s", subject);
        system(buf);
    }
    system("git branch");
    system("git status");
    printf("Please type something to continue\n");
    getchar();
    system("git add .");
    snprintf(buf, 31, "git commit -m \"CppProject%s\"", subject);
    system(buf);
    system("git push");
    return (0);
}
