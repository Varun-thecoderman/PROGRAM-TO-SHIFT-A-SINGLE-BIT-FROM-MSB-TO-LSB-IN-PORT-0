#include <reg52.h>
void delay(void);

void main()
{
	int a=0x80;
	while(1)
	{
		P0=a;
		a= a>>1;
		delay();
		if(a==0x01)
		a=0x80;
	}

}

void delay()
{
        int i,j;
	for(i=0;i<=255;i++)
	{	
          for(j=0;j<=255;j++);
        }
}
