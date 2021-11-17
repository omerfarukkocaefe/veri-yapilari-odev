#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool palindrom(char kelime[],int x,int y){
// palindrom metodu palindromlugu kontrol ediyor.
    if(x==y){
        return true;
    }//Sadece bir karakter varsa true dondu.

    if(kelime[x]!=kelime[y]){
        return false;
    }//ilk kelime ve son kelime esit degilse false dondu.

    if(x<y+1){
        return palindrom(kelime,x+1,y-1);
    }//Baslangic indexi, son index+1 den kucukse
    //recursive fonksiyon dondu.

    return true;
    //false veya recursive fonksiyon donmezse true dondu.
}

bool kelime_kontrol(char kelime[]){
//kelime_kontrol metodunda kelimenin varlik kontrolu ve
//uzunluk belirleme gibi islemler yapildi.

    int uzunluk=strlen(kelime);
    //uzunluk degiskenine kelimenin uzunlugu atandi.

    if(uzunluk==0){
        return true;
    }//Eger uzunluk 0 ise true dondu.

    return palindrom(kelime,0,uzunluk-1);
    //palindrom metodu donduruldu.
}

int main()
{
    char kelime[100];
    //kelime stringi olusturduk.

    printf("Lutfen bir kelime giriniz: ");
    scanf("%s",&kelime);
    //Kullanicidan bir kelime girmesini istedik.

    if(kelime_kontrol(kelime)){
        printf("Girdiginiz kelime palindromdur.");
    }//Eger kelime_kontrol'e gonderilen string true donerse
     //if calisti
    else{
        printf("Malesef girdiginiz kelime palindrom degil.");
    }//Eger kelime_kontrol'e gonderilen string false donerse
     //else calisti

    return 0;
}
