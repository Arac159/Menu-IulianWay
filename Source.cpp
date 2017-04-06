#include <stdio.h>

bool displayoption2menu()
{
        printf("Option2 menu\n");
        printf("1. Option C\n");
        printf("2. Option D\n");
        printf("3. Back\n");
        printf("Please choose\n");
        return true;

}
bool displayoption1menu()
{
        printf("Option1 menu\n");
        printf("1. Option A\n");
        printf("2. Option B\n");
        printf("3. Back\n");
        printf("Please choose\n");
        return  true;

}
void displaymainmenu()
{
    printf("Main menu\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Exit\n");
    printf("Please choose\n");
}

char selection()
{
    char c;
    c = getchar();
    return c;
}


void returndisplayoption2menu()
{
    char c = selection();
    if (c == '3')
    {
        displayoption2menu();
    }


}
void returndisplayoption1menu()
{
    char c = selection();
    if (c == '3')
    {
        displayoption1menu();
    }


}

void getnewline()
{
    if (displayoption2menu() == true)
    {
        returndisplayoption2menu();
    }
    if (displayoption1menu() == true)
    {
        returndisplayoption1menu();
    }
}

void main()
{
    displaymainmenu();
    for (;;)
    {
        char c = selection();
        if (c == '1')
        {
            displayoption1menu();
         }
        if (c == '2')
        {
            displayoption2menu();
        }
        if (c == '3')
        {
                break;
        }
        if (c == '\n')
        {
            getnewline();
        }

    }
    
}

