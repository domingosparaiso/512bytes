#include <conio.h>
#include <dos.h>
int V=10000,x=1,y=12,z=2,a=80,b=12,c=0,k,h,d[81][26],n=1;i(char *f, int *g){for(h=0;h<4;h++)if(*(f++)==k)*g=h*2;}j(int *s, int *t, int *u, int w){gotoxy(*s,*t);putch(w);if(*u&4) *t+=(*u&2)-1;else *s+=(*u-1);if(*s>0 && *s<81 && *t>0 && *t<25 && !d[*s][*t]){d[*s][*t]=1;gotoxy(*s,*t);putch(w-175);}else n=0;}main(){clrscr();while(n){if(kbhit()){k=getch()|32;i("aswz",&z);i("jkim",&c);}j(&x,&y,&z,177);j(&a,&b,&c,176);delay(V);}gotoxy(1,24);}

