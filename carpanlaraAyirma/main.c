#include <stdio.h>
#include <stdlib.h>
int carpan(int sayi,int i){
//sayinin carpanlarini bulmak icin carpan metodu olusturduk.

    if(sayi<=1){
        return 0;
    }//sayi 1'e esit veya kucukse if calisti ve 0 dondu.

    else if(sayi%i==0){
        printf("%d ",i);
        return carpan(sayi/i,i);
    }//sayi i'ye tam bolunuyosa else if calisti. Carpan
     //yazdirildi ve carpan metodu gerekli parametrelerle
     //yeniden cagrildi.

    else{
        return carpan(sayi,i+1);
    }//sayi 1 den buyuk ve i'ye tam bolunmuyosa else calisti.
     //carpan metodu gerekli parametrelerle yeniden cagrildi.

}
int main()
{
    int sayi;//sayi degiskeni olusturduk.

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    //Kullanicidan deger girmesini istedik

    printf("%d sayisinin carpanlari: ",sayi);
    carpan(sayi,2);
    //carpan metoduna sayi ve 2'yi gonderdik.

    return 0;
}
