#include<stdio.h>
#include<conio.h>

struct postplan{
char plan_name[100];
float monthly_rental;
int  fi;
int fc;
int fs;
float cc;
float scharges;
float dcharges;
float rcharges;
};
postplan postplan[r];
static int search(int, int, int);
void main()
{

int pp[100];
char username[30], password[30];
int r, result,i;
int mr, free_net,fsoc;
clrscr();
printf("enter username");
scanf("%s",&username);
printf("enter password");
scanf("%s", &password);

struct postplan *b;
printf("enter no. of records");
scanf("%d",&r);
b=(struct *postplan)malloc(r * sizeof(struct postplan));
for(i=0;i<r;i++){
printf("enter data plan, monthly rent,free internet,free calls, free sms, call charges, sms charges, data charges, roaming charges );
scanf("%s %f %d %d % d %f %f %f %f",&(b+i)->plan_name, &(b+i)->monthly_rent),&(b+i)->fi, &(b+i)->fc,&(b+i->fs, &(b+i)->cc,&(b+i)->scharges, &(b+i)->dcharges, &(b+i)->rcharges);
return 0;}
for(i=0;i< r;i++){
printf("%s\t %d\n",(b+i)->plan_name,(b+i)-> monthly_rent,(b+i)-> fi,(b+i)-> fc,(b+i)-> fs,(b+i)->cc,(b+i)->scharges,(b+i)-> dcharges,(b+i)-> rcharges);
}
printf("user login:/n username:");
scanf("%s",&username);
printf("password:");
scanf("%s",&password):
if(username=="user" && password="pass"){
printf("enter monthly rental/n ,for free internet->1 else 0/n , free calls or sms->1 else 0");
scanf("%d %d %d", &mr,&free_net,&fsoc);
search(mr,free_net,fsoc,r);
}
else{
printf("invlid username or password");
}
getch();
}
static int search(int mr,int free_net,int fsoc,int r ){
for(int i=0;i <r ;i++){
if(strcmp(mr,postplan[i].monthly_rent)==0 || strcmp(free_net,postplan[i].fi)==0
|| strcmp(fsoc, postplan[i].fs)==0){
printf("%d %d %d ",postplan[i].monthly_rent,postplan[i].fi,postplan[i].fs);
}
}

}

/*else{
printf("invalid username or password");
} */
