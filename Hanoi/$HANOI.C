int v[3][9],i[3],m=1,f,g,a=0,b=2,o;

void r(int n,int c) {
	for(o=0;o<n;o++)
		printf("%c",c);
}

void q(int n) {
	r(m-n,32);
	if(n){
		r(n,'±');
		printf("%u",n);
		r(n,'±');
	} else
		printf("³");
	r(m-n+1,32);
}

void h(int m, int o, int d, int a) {
	if(m==1)
		t(o,d);
	else {
		h(m-1,o,a,d);
		t(o,d);
		h(m-1,a,d,o);
	}
}

void d() {
	for(f=0;printf("\n"),f<m;f++)
		for(g=0;g<3;g++)
			f<i[g]?q(0):q(v[g][f]);
	printf("\nTecle ENTER:");
	getch();
}

void t(x,y) {
	v[y][--i[y]]=v[x][i[x]++];
	d();
}

void main() {
	printf("Discos (3-9):");
	m=getch()-48;
	if(m>2 & m<=9) {
		for(f=0;f<=m;v[0][f]=f+1,f++);
		i[1]=i[2]=m;
		d();
		h(m,0,2,1);
	}
}
