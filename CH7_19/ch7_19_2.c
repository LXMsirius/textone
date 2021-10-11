

int power(int n)
{
    extern int A;
    int i,y=1;
    for(i=1;i<=n;i++)
        y*=A;
    return y;
}