long long  multiplyTwoLists (Node* a, Node* b)
{
  //Your code here
  
  long long num1=0;
  long long num2=0,mod= 1e9+7 ;
  while(a!=NULL)
  {
     num1=((num1%mod*10)+(a->data)%mod);
     a=a->next;
  }
  while(b!=NULL)
  {
    num2=((num2%mod*10)+(b->data)%mod);
    b=b->next; 
  }
  num2=(num2%mod * num1%mod)%mod;
  return num2;
}
