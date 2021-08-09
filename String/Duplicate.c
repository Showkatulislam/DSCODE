int main()
{
    char a[]="finding";
    //We need a box for 26 character
    int H[26]={0};
    int i;
    for(i=0;a[i]!='\0';i++){
        H[a[i]-97]+=1;
    }
    for(i=0;i<26;i++){
        if(H[i]>1)
         {
             printf("%c ",i+97);
             printf("%d\n",H[i]);
         }
    }
}
