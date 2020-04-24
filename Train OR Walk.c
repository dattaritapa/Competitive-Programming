#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,a,b,c,d,p,q,y;
	    scanf("%d %d %d %d %d %d %d %d\n",&n,&a,&b,&c,&d,&p,&q,&y);
	    int arr[301];
	    for(int j=1;j<=n;++j)
	    {   scanf("%d",&arr[j]);
	    }
	    int walkdist=0;
	    walkdist=arr[b]-arr[a];
	    walkdist*=p;
	    if(walkdist<0)
	        walkdist=-walkdist;
	    int traintime=0;
	    int dist=arr[c]-arr[a];
	    dist*=p;
	    if(dist<0)
	        dist=-dist;
	    if(dist>y)
	        printf("%d\n",walkdist);
	    else
	    {
	        traintime=y;
	        dist=arr[d]-arr[c];
	        dist*=q;
	        if(dist<0)
	            dist=-dist;
	        traintime+=dist;
	        dist=arr[b]-arr[d];
	        dist*=p;
	        if(dist<0)
	            dist=-dist;
	        traintime+=dist;
	        if(traintime<walkdist)
	            printf("%d\n",traintime);
	        else
	            printf("%d\n",walkdist);
	    }
	}
	return 0;
}



