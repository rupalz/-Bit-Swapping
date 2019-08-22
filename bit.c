#include<stdio.h>

int  equal(int a[100][100],int b[100][100],int m,int n){
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                c++;
            }
        }
    }
    return c;
}
int count1(int a[100][100],int m,int n){
    int c=0;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                c++;
            }
        }
    }
    return c;
}
int count0(int a[100][100],int m,int n){
    int c=0;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                c++;
            }
        }
    }
    return c;
}

int main(){
    int t;
    scanf("%d\n",&t);
  
    for(int i=0;i<t;i++){
        int m,n;
        scanf("%d %d\n",&m,&n);//printf("%d %d\n",m,n);
       
        int a[100][100],b[100][100];
        int z;
        
      
        for(int j=0;j<m;j++){
            scanf("%d ",&z);
            for(int k=n-1;k>=0;k--){
                a[j][k]=z%10;
                z=z/10;
            }
         
        }
         for(int j=0;j<m;j++){
             scanf("%d ",&z);
            for(int k=n-1;k>=0;k--){
                b[j][k]=z%10;
                z=z/10;
                
              
            }
        }
        int p=count1(a,m,n);
        int q=count1(b,m,n);
        int r=count0(a,m,n);
        int s=count0(b,m,n);
        
        if(equal(a,b,m,n)==0){
            printf("0\n");
        }
        
       else if((p==q) && (r==s) ){
           
            printf("%d\n", equal(a,b,m,n)/2);
        }
        else{
            printf("-1\n");
           
            
        }
        
    }
    return 0;
}
