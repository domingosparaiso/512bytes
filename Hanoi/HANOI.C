#define p printf
#define k getch()
#define w int
w v[3][9],i[3],m=1,f,g,a=0,b=2,o;r(w n,w c){for(o=0;o<n;o++)p("%c",c);}q(w n){r(m-n,32);if(n){r(n,'±');p("%u",n);r(n,'±');}else p("³");r(m-n+1,32);}h(w m, w o, w d, w a){if(m==1)t(o,d);else{h(m-1,o,a,d);t(o,d);h(m-1,a,d,o);}}d(){for(f=0;p("\n"),f<m;f++)for(g=0;g<3;g++)f<i[g]?q(0):q(v[g][f]);p("\nTecle ENTER:");k;}t(x,y){v[y][--i[y]]=v[x][i[x]++];d();}main(){p("Discos (3-9):");m=k-48;if(m>2 & m<=9){for(f=0;f<=m;v[0][f]=f+1,f++);i[1]=i[2]=m;d();h(m,0,2,1);}}