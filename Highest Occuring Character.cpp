char highestOccurringChar(char input[]) {
    int arr[26]={0};
    int n=strlen(input);
    for(int i=0;i<n;i++)
    {
        int temp=input[i]-'a';
        arr[temp]++;
    }
    int max=0;
    int index=0;
     for(int i=0;i<26;i++)
    {
        if(max<arr[i])
        {
            index=i;
            max=arr[i];
        }
    }
    char ans='a'+index;
    
}