 const int CHAR=256;
    int repeatedCharacter(string s) 
    { 
        //Your code here
         int count[CHAR]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]]>1)return i;
    }
    return -1;
    } 
