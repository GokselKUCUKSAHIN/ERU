#include <stdio.h>
#include <stdlib.h>

//Pointer tipindeki fonksiyona �rnek
//o fonksiyonun kendisini �a��rana bir adres g�nderece�ini ifade eder

void topla();

int main(void) {
	
   	topla();
  	
	system("PAUSE");
	return 0;
}

 void topla()
 {
   int toplam;
   int a,b;
    printf("Toplanacak iki sayiyi giriniz -> ");
    scanf("%d %d",&a,&b);
   toplam = a+b;
   printf("iki sayinin toplami : %d \n",toplam);
 }
