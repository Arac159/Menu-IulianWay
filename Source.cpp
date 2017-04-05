#include <stdio.h>

void displayoption2menu()
{

        printf("Option2 menu\n");
        printf("1. Option C\n");
        printf("2. Option D\n");
        printf("3. Back\n");
        printf("Please choose\n");

}
void displayoption1menu()
{

        printf("Option1 menu\n");
        printf("1. Option A\n");
        printf("2. Option B\n");
        printf("3. Back\n");
        printf("Please choose\n");

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

void getnewline()
{
    selection();
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
            selection();
            for (;;)
            {
                char c = selection();
                if (c == '1')
                {
                    printf("Option A = Tomato\nPress 3 for Main Menu\n");
                    selection();
                    if (c == 3)
                    {
                        main();
                    }
                    if (c == '\n')
                    {
                        main();
                    }
                }
                if (c == '2')
                {
                    printf("Option B = Potato\nPress 3 for Main Menu\n");
                    selection();
                    if (c == 3)
                    {
                        main();
                    }
                    if (c == '\n')
                    {
                        main();
                    }
                }
                if (c == '3')
                {
                    main();
                }
            }
        }
        if (c == '2')
        {
            displayoption2menu();
            selection();
            for (;;)
            {
                char c = selection();
                if (c == '1')
                {
                    printf("Option A = Lyon\nPress 3 for Main Menu\n");
                    selection();
                    if (c == 3)
                    {
                        main();
                    }
                    if (c == '\n')
                    {
                        main();
                    }
                }
                if (c == '2')
                {
                    printf("Option B = Goat\nPress 3 for Main Menu\n");
                    selection();
                    if (c == 3)
                    {
                        main();
                    }
                    if (c == '\n')
                    {
                        main();
                    }
                }
                if (c == '3')
                {
                    main();
                }
            }
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

