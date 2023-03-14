    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
       int x;
       printf("Bir sayi giriniz.\n");
       scanf("%d",&x);

       if (x%2 == 0) {
         printf("%d bir cift sayidir.",x);
       }else {
           printf("%d bir tek sayidir.",x);
       }

        return 0;
    }
