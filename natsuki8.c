#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int intelligence = (rand() % 18) + 1;
    int stamina = (rand() % (19-intelligence)) + 1;
    int charisma=(20-intelligence-stamina);
    
    printf("%d\n",intelligence);
    printf("%d\n",stamina);
    printf("%d\n",charisma);
    
    if(intelligence>=stamina&&intelligence>=charisma)
{
    printf("mage \n");
}
    else if(stamina>=intelligence&&stamina>=charisma){
    printf("knight \n");
    }
    else{
    printf("thief \n");
    }
    return 0;
}