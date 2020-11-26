void main()
{
	int a,s,d,f;
	scanf("%d,%d,%d",&a,&s,&d);
	if(a<s){f=a;a=s;s=f;};
	if(a<d){f=a;a=d;d=f;};
	if(s<d){f=s;s=d;d=f;};
	printf("%d\n",d);
	printf("%d\n",s);
	printf("%d\n",a);

}
