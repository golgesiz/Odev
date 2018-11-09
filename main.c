#include <stdio.h>
int main() {
	float a,b,islem,mod;
	printf("1-)Toplama\n2-)Cikarma\n3-)Carpma\n4-)Bolme\n5-)Mod alma\nIslem Seciniz = ");
	scanf("%f",&islem);
	printf("Birinci sayiyi giriniz = ");
	scanf("%f",&a);
	printf("Ikinci sayiyi giriniz = ");
	scanf("%f",&b);
	if (islem==1)
	{
		printf("Sonucunuz = %f",a+b);
	}
	else if (islem==2)
	{
		printf("Sonucunuz = %f",a-b);
	}
	else if (islem==3)
	{
		printf("Sonucunuz = %f",a*b);
	}
	else if (islem==4)
	{
		printf("Sonucunuz = %f",a/b);
	}
	else if (islem==5)
	{
		mod=(int)a%(int)b;
		printf("Sonucunuz = %f",mod);
	}
	else
	{
		printf("Lutfen 1 ile 5 arasinda bir deger giriniz!");	
	}	
	return 0;
}
