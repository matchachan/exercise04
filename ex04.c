#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int coin,i,hc=0,tc=0;
  char name[50];
  srand((unsigned int) time(NULL));

  printf("Who are you?\n>");
  scanf("%s",name);
  printf("Hello,%s!\n\n",name);

  for(i=0;i<3;i++){
    coin=rand()%2;
    if(coin==0){
      printf("Round %d: Heads\n",i+1);
      hc++;
    }else{
      printf("Round %d: Tails\n",i+1);
      tc++;
    }
  }
  printf("Heads: %d, Tails: %d\n",hc,tc);

  return 0;
}
