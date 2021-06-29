string ari(string s){
 
 int let=0, word=0 , sen =0;
 
 int len = strlen(s);
 for(int i=0;i<len ;i++){
 if(isalpha(s[i]){
    let++;
    }
 if(i==0 && s[i]!=' ' || i != len-1 && s[i]==' ' && s[i+1]!= ' '){
  word++;
  }
 if(s[i] == '!' || s[i]=='?' || s[i]=='.'){
  sen++;
  }
  }
  
  int score = round (4.71*(len/word) + 0.5*(word/sen) - 21.43);
  
  switch(score){
   case(1):
    printf("Kindergarten");
   case(2):
    printf("First/Second Grade");
   case(3):
    printf("Third Grade");
   case(4):
    printf("Fourth Grade");
    case(5):
    printf("Fifth Grade ");
     case(6):
    printf("Sixth Grade ");
     case(7):
    printf("Seventh Grade ");
    case(8):
    printf("Eighth Grade");
    case(9):
    printf("Ninth Grade ");
    case(10):
    printf("Tennth Grade ");
    case(11):
    printf("Eleventh Grade ");
    case(12):
    printf("Twelfth grade");
   case(13):
    printf("College student ");
    case(14):
    printf("Professor ");
    
    
    
return 0;
}
    
 
