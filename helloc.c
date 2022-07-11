#include <stdio.h>
/*values*/
int main() {
    printf("hello world\n");
char letter;
int yesorno;
int age;
int c=20;
    while (c<40) {
    puts ("\they world\n");
    c=c+4;
    }
char arr[20];

/*give me your info*/
    puts("Enter your name:\a ");
    scanf("%s", arr);
    printf("\nlet's play a game!\n\n");
    printf("Dear %s.Welcome.\n", arr);
    puts("\nenter your age");
    scanf("%i",&age);
/*let's play a game */
        if(age>=18)
        {
            puts("play a game???\n1-->yes\n2-->no");
            scanf("%i",&yesorno);
                while(yesorno==1)
                {puts("type an english letter (between 'a' and 'f'):\a");
                scanf("%s",&letter);
                switch (letter) {
                case 'a':
                puts("\tapples\n");
                break;
                case 'b':
                puts("\tbananas\n");
                break;
                case 'c':
                puts("\tcarrots\n");
                break;
                case 'd':
                puts("\tdragon fruits\n");
                break;
                case 'e':
                puts("\telderberries\n");
                break;
                case 'f':
                puts("\tfigs\n");
                break;
                default:
                puts("\tnot found\n");
                }
            puts("play again???\n1-->yes\n2-->no");
            scanf("%i",&yesorno);
            }
        }
        else
            {puts("sorry you are too young");}

/*bye*/
    printf("have a nice time %s\n",arr);
return 0;
}
