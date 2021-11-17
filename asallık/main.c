#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool asal_sayi(int sayi,int i){
//Girilen sayinin asal olup olmadigini gosteren asal_sayi metodu olusturuldu.

    if(i==sayi){//Eger sayi i'ye esitse true dondu
        return true;
    }

    if(sayi%i==0){//Eger sayi i ye tam bolunurse false dondu.
        return false;
    }
    else{//Eger sayi i ye tam bolunmezse asal_sayi(recursive fonksiyon)
         //fonksiyonu cagrildi.
        return asal_sayi(sayi,i+1);
    }

}

int main()
{
    int sayi;//Girilen sayiyi atayabilmek icin sayi degiskeni olusturduk.

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);
    //Kullanicidan bir sayi girmesini istedik.

    if(sayi<=1){//Sayi 1'e esit veya kucukse if durumu calisti.
        printf("Maalesef girdiginiz sayi asal sayi degildir.");
    }

    else{//Sayi 1'den buyukse else durumu calisti.

        if(asal_sayi(sayi,2)){
            printf("Girdiginiz sayi asal sayidir.");
        }//Eger asal_sayi fonksiyonu true donerse if durumu calisti.

        else{
            printf("Maalesef girdiginiz sayi asal sayi degildir.");
        }//Eger asal_sayi fonksyionu false donerse else durumu calisti.
    }

    return 0;
}
