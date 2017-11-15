#include <stdio.h>
double rivadeh(double, double, double, double);
int factoriel(int);
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%0.0lf\n",(double) factoriel(n)/factoriel(m)/factoriel(n - m)/factoriel(m) + (double) factoriel(n + 1)/ factoriel(m)/ factoriel(m + 1)/ factoriel(n + 1 - m));
	printf("%0.0lf", rivadeh(n, m, n, m));
}
double rivadeh(double n, double m, double likeN, double likeM)
{
	if(likeM > likeN)
		return 0;
	if(likeM == 0 && likeN == 0)
	{
		if( n == 1 )
			return 1;
		else
			return n * rivadeh (n - 1, 1, 0, 0);
	}
	if(m == n || m == 0)
			return (1 + (likeN + 1) / (likeN + 1 - likeM) / (likeM + 1)) / rivadeh ( likeM , 1, 0, 0);
	return rivadeh(n-1, m-1, likeN, likeM) + rivadeh(n - 1, m, likeN, likeM);
}
int factoriel(int n){
	if(!n)
		return 1;
	return n * factoriel(n - 1);
}
