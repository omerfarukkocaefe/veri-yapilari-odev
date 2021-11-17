#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
//data alani,node’da tutulacak bilgiyi ifade eder.
//next alani ise bir node’dan sonra hangi node gelecekse o
//node’un bellekteki adresi tutulur.

void push(struct Node** head_ref,int new_data){

    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));//Dugum tahsis ettik.

    new_node->data=new_data;//Veriyi yerlestirdik.

    new_node->next=(*head_ref);//Verinin adresini yerlestirdik.

    (*head_ref)=new_node;//Dugumu listenin basi yaptik.
}

int getCount(struct Node* head){

    if(head == NULL){
        return 0; //Eger head bossa 0 dondu(base case).
    }
    else{
        return  1+getCount(head->next);
    }//Aksi durumda ozyinelemeli fonksiyon calisti(general case).

}

int main()
{
    struct Node* head=NULL;//Bos bir listeyle basladik.

    push(&head,1);
    push(&head,2);
    push(&head,3);
    //linked liste degerleri gonderdik.

    printf("Node sayisi: %d",getCount(head));
    //getConut fonksiyonundan donen degeri yazdirdik.

    return 0;
}
