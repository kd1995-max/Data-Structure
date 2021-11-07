string printNumber(string s, int n) 
{
    //code here  
    string str="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='b'||s[i]=='c'||s[i]=='A'||s[i]=='B'||s[i]=='C')
        str=str+'2';
     
      else if(s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='D'||s[i]=='E'||s[i]=='F')
        str=str+'3';
      
       else  if(s[i]=='g'||s[i]=='h'||s[i]=='i'||s[i]=='G'||s[i]=='H'||s[i]=='I')
        str=str+'4';
     
      else   if(s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='J'||s[i]=='K'||s[i]=='L')
        str=str+'5';
      
       else  if(s[i]=='m'||s[i]=='n'||s[i]=='o'||s[i]=='M'||s[i]=='N'||s[i]=='O')
        str=str+'6';
      
       else  if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S')
        str=str+'7';
       
       else if(s[i]=='a'||s[i]=='t'||s[i]=='u'||s[i]=='v'||s[i]=='T'||s[i]=='U'||s[i]=='V')
        str=str+'8';
       
       else if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z'||s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='z')
        str=str+'9';
    }
    return str;
}
