#include <stdio.h>
#include <dos.h>
int i,c,z,q,m=2,n,b='X',f;char *y;
struct REGPACK r;
d() {
	f=1;
	for(i=0;i<8;i++)
		for(n=0;n<m;n++) {
			for(z=0;z<8;z++)
				for(q=0;q<m;q++)
					printf("%c",((peekb(r.r_es,r.r_bp+(c*8)+7-z) >> (7-i)) & 1)?b:32);
			printf("\n");
		}
}
void main(int argc,char **argv) {
	r.r_ax=0x1130;
	r.r_bx=0x300;
	intr(16,&r);
	if(argc)
		while(*(++argv)) {
			c=32;if(f)d();
			if(**argv=='-') m=*(*argv+1)-'0';
			else if(**argv=='=') b=*(*argv+1);
			else for(y=*argv;c=*y;y++)d();
		}
	if(m>0 && m<10 && !f)
		while((c=getchar())!=EOF)
			if(c!=10) d();
}