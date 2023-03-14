        #include <stdio.h>
        #include <stdlib.h>

        int main()
        {
            int a,b,c;
            printf("Lutfen 3 adet sayisini giriniz.\n");
            scanf("%d%d%d",&a,&b,&c);



            if (a>b && a>c) {
                printf("%d sayisi en buyuktur.",a);
            }else if (b>a && b>c) {
            printf("%d sayisi en buyuktur.",b);
            }else if (c>a && c>b){
            printf("%d sayisi en buyuktur.",c);
            }else {
            printf("Tum sayilar esittir.");
            }
            return 0;
        }
