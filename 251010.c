/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
    /**名前を付けて文字を保存しておく**/
    int osakana = 20;
    /**\nは改行できるよ**/
    printf("お魚が%d％割引されます!\n", osakana);
    /**printfは、""の間に、表記したい文字を書くよ**/
    /**;は行の終わりだよ**/
    osakana = osakana/2;
    printf("あ！ごめん！お魚が%d％割引されます!\n", osakana);
    
    return 0;
}
