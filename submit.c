#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char    subject[5];
    char    branch[2];
    char    branch_name[30];
    char    buf[100];

    system("git log");
    printf("\n\nPlease input your subject numbre : CppProject");
    scanf("%s", subject);
    printf("\nPlease input 1(feature) or 2(fix) : ");
    scanf("%s", branch);
    printf("\n");
    if (branch[0] == '1')
        snprintf(branch_name, 23, "feature/CppProject%s", subject);
    else
        snprintf(branch_name, 19, "fix/CppProject%s", subject);
    snprintf(buf, 12 + strlen(branch_name), "git branch %s", branch_name);
    system(buf);
    snprintf(buf, 12 + strlen(branch_name), "git switch %s", branch_name);
    system(buf);
    printf("\n");
    system("git branch");
    printf("\n");
    system("git status");
    printf("\n\nPlease type something to continue\n");
    rewind(stdin);
    getchar();
    system("git add .");
    printf("\n");
    snprintf(buf, 17 + strlen(branch_name), "git commit -m \"%s\"", branch_name);
    system(buf);
    printf("\n");
    snprintf(buf, 32 + strlen(branch_name), "git push --set-upstream origin %s", branch_name);
    system(buf);
    return (0);
}
