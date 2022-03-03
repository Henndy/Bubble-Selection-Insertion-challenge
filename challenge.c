//Henndy Dwi Ardhani
//672021144
//23,67,89,5,45,20,15,27
#include <stdio.h>
#include <stdlib.h>

int main(){
    int pilih;
    printf("silahkan pilih!\n");
    printf("1.selection\n");
    printf("2.insertion\n");
    scanf("%d",&pilih);
    if (pilih == 1)
        selection();

    else if (pilih == 2)
        insertion();

    else
        printf("data tidak ada!");


}
void selection()
{
    system("cls");
    int data[10]={23,67,89,5,45,20,15,27},n=8, i, j, posisi, ganti;
    for(i = 0; i < (n-1); i++){
    posisi = i;
    for (j = i + 1; j < n; j++){
      if(data[posisi] > data[j]){
        posisi = j;
      }
    }
    if(posisi != i){
            ganti = data[i];
            data[i] = data[posisi];
            data[posisi] = ganti;
            }
    }
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < n; i++){
            printf("%d ", data[i]);
    }
    printf("\n");
}
void insertion()
{
    system("cls");
    int data[10]={23,67,89,5,45,20,15,27},n=8,i,j,posisi;
    for (i=1;i<n;i++){
        posisi = data[i];
        j=i-1;
        while (data[j]>posisi&&j>=0){
            data[j+1] = data[j];
            j--;
        }
        data[j+1]=posisi;
    }
printf("Hasil pengurutan sebagai berikut:\n");
for(i = 0; i < n; i++){
            printf("%d ", data[i]);
    }
    printf("\n");
}
