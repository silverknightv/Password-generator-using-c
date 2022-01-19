#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n;
    printf("Enter the length of password : ");
    scanf("%d",&n);
    char ch[] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                '0','1','2','3','4','5','6','7','8','9',
                '!','@','#','$','%','^','&','*','(',')','_','-','+','='};

    char* store;
    store = malloc(sizeof(char)*n+1);

    srand(time(NULL));
    for(int i=0;i<n;i++){
        int a = rand() % 76;
        store[i] = ch[a];
    }
    printf("Password = %s",store);

    return 0;
}