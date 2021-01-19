a=int(input())
i=0
while (i<a):
    sum=0;
    b=list(map(int,input().split()))
    j=1
    while (j<len(b)):
        sum+=b[j];
        j+=1;
    print("Case",i+1,end="")
    print(":",sum)
    i+=1
    
