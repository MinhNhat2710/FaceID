#include<stdio.h>
#include<string.h>

int ok(char x[]){ //check co ki tu la hay khong
    for (int i = 0;i < strlen(x); ++i){
        if (x[i] == 'B' || x[i] == 'b' || x[i] == 'K' || x[i] == 'k'|| x[i] == 'G' || x[i] == 'g'){

        }else{
            return 0;
        }
    }
    return 1;
}

void getWinner(char a[], char b[]){
     if (ok(a) == 1 && ok(b) == 1){

    }else {
        printf("ERROR\n");
        return;
    }
}
int main(){
    char a[] = "bbk" char b[] = "bbs" getWinner(a, b);

}
