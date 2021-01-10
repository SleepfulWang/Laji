//b1001
/*#include<iostream>
using namespace std;
int main(){
	int n;
	int step=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0)
		  n/=2;
		  else
		   n=(3*n+1)/2;
		step++;
	}
	printf("%d",step);
	return 0;
}*/
//b1002
/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[105];
	int sum=0;
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0;i<len;i++){
		sum+=str[i]-'0';
	}
	int index=0,ans[10];
	while(sum!=0){
		ans[index++]=sum%10;
		sum/=10;
	}
	char result[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i=index-1;i>=0;i--){
		printf("%s",result[ans[i]]);
		if(i!=0) printf(" ");
		else printf("\n");
	}
	return 0;
}*/
//b1003
/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	char str[200];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",str);
		int numa=0,nump=0,numt=0,others=0,posp=0,post=0;
		int len=strlen(str);
		for(int j=0;j<len;j++){
			if(str[j]=='P'){
				nump++;
				posp=j;
			}
			else if(str[j]=='T'){
				numt++;
				post=j;
			}
			else if(str[j]=='A'){
				numa++;
			}
			else{
				others++;
			}
		}
		if(numa>=1&&nump==1&&numt==1&&others==0&&(posp*(post-posp-1)==len-post-1))
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}*/
//b1004
/*#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	struct stu{
		char name[11];
		char number[11];
		int score;
	}stu[10000];
	for(int i=0;i<n;i++){
		scanf("%s %s %d",stu[i].name,stu[i].number,&stu[i].score);
	}
	int max=0,min=0;
	for(int j=0;j<n;j++){
		if(stu[max].score<stu[j].score)
		    max=j;
	    if(stu[min].score>stu[j].score) 
		    min=j;
		    	}
	printf("%s %s\n",stu[max].name,stu[max].number);
	printf("%s %s\n",stu[min].name,stu[min].number);
	return 0;
}*/
//b1005
/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int k;
	int a[100],b[100];
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	
	for(int j=0;j<k;j++){
		while(a[j]!=1){
		if(a[j]%2==0){
		  a[j]/=2;
		  for(int i=0;i<k;i++){
		  	if(a[j]==b[i])
		  	b[i]=0;
		  }
		  }
		  else{
		   a[j]=(3*a[j]+1)/2;
		 for(int i=0;i<k;i++){
		  	if(a[j]==b[i])
		  	b[i]=0;
		  }
		   }
		}
	}
	sort(b,b+k);
	for(int i=k-1;i>=0;i--){
		if(b[i]!=0&&b[i-1]!=0)
		printf("%d ",b[i]);
		else if(b[i]!=0&&b[i-1]==0)
		printf("%d",b[i]);
	}
	return 0;
}*/
//b1006
/*#include<iostream>
using namespace std;
int main(){
	int n,b,s,g;
	scanf("%d",&n);
		g=n%10;
		s=n/10%10;
		b=n/100;
	for(int i=0;i<b;i++)
	printf("B");
	for(int i=0;i<s;i++)
	printf("S");
	for(int i=1;i<=g;i++)
	printf("%d",i);
	printf("\n");
	return 0;
}*/






















