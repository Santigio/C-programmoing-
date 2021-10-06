#include <stdio.h>
#include <string.h>

int upperC(char string[])
{
    int i;
    int upper_case = 0;
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            upper_case++;

        i++;
    }
    return upper_case;
}

int lowerC(char string[])
{
    int i;
    int lower_case = 0;
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            lower_case++;

        i++;
    }
    return lower_case;
}

int specialC(char string[])
{
    int all_chrs = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        all_chrs++;
    }

    int countU = upperC(string);
    int countL = lowerC(string);
    return all_chrs - (countU + countL);
}

int main()
{
    char c[] = "My social media password is $$$$*";
    printf("uppercase count is equal to %d \n", upperC(c));
    printf("lowercase count is equal to  %d \n", lowerC(c));
    printf("special characters equal to %d \n", specialC(c));
    return 0;
}