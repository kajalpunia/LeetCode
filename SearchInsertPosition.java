class PredictTheColumn{
    
    static int columnWithMaxZero(int a[][],int n)
    {
    int[] max_ar = new int[n];
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]==0)
            count++;
        }
        max_ar[i]=count;
    }
    int max=max_ar[0]; int max_index=0;
    for(int i=0;i<n;i++)
    {
        if(max<max_ar[i])
            {
                max_index=i;
                max=max_ar[i];
            }
    }
    return max_index;    
    }
}