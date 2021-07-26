int ropecutting(int n,int a,int b,int c)
{
  if(n==0)
    return o;
 if(n<0)
   return -1;
int res=max(ropecutting(n-a,a,b,c),max(ropecutting(n-b,a,b,c),ropecutting(n-c,a,b,c)));
if(res==-1)
  return -1;
 return res+1;

}
