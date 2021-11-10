void printsubsequence(string in, string out)
{
 if(in.length()==0)
 {
   cout<<out<<endl;
   return;
 }
  printsubsequence(in.substr(1),out);
  printsubsequence(in.substr(1),out+in[0]);
}
