#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    int i = 0;
    int len;
    int hasLower = 0;
    int hasUpper = 0;

    printf("パスワードを入力してください >>> ");
    fgets(password, sizeof(password), stdin);

    /* 改行を除いた文字数を取得 */
    len = strlen(password);
    if (password[len - 1] == '\n') {
        password[len - 1] = '\0';
        len--;
    }

    /* while文で1文字ずつ判定 */
    while (i < len) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            hasLower = 1;
        }
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
        }
        i++;
    }

    /* 改善点の表示 */
    if (len < 8) {
        printf("8文字以上に変更してください。\n");
    }
    if (!hasLower) {
        printf("小文字が含まれていません。\n");
    }
    if (!hasUpper) {
        printf("大文字が含まれていません。\n");
    }

    /* 強いパスワード判定 */
    if (len >= 8 && hasLower && hasUpper) {
        printf("パスワードは強力です。\n");
    }

    return 0;
}