#include<stdio.h>
#include<windows.h>
int i,j,k,l;
void gotoxy(int x,int y){
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void delay(){
	long double i;
	for(i=1;i<=50000000;i++){

	;}
}

//for a
void line(){
printf("#");
}

void gap(){
printf("  ");
}

void middlea(){
for(j=1;j<=3;j++){
if(i==1||i==4){
printf("#");
}
else{
printf(" ");}
}
}

//for b
 void middleb(){
 for(j=1;j<=3;j++){
if(i==1||i==4||i==7){
printf("#");
}
else{
printf(" ");}
}
}
//for c
void middlec(){
for(j=1;j<=3;j++){
if(i==1||i==7){
printf("#");
}
else{
printf(" ");}
}
}
//for d
void d(){
 for(j=1;j<=3;j++){
if(i==1||i==7){
printf("#");
}
else{
printf(" ");}
}
}
//for e
void e(){
for(j=1;j<=3;j++){
if(i==1||i==4||i==7){
printf("#");
}
else{
printf(" ");}
}
}
//for f
void f(){
for(j=1;j<=3;j++){
if(i==1||i==4){
printf("#");
}
else{
printf(" ");}
}
}
//for h
void h()
{for(j=1;j<=3;j++){
if(i==4){
printf("#");
}
else{
printf(" ");}
}
}
//for i
void alpi(){
for(j=1;j<=5;j++){
if(i==1||i==7){
    printf("#");}
else if(i>=2&&i<=6&&j==3){
    printf("#");}
else{
    printf(" ");
}

}

}
//for l
void alpl(){
for(j=1;j<=3;j++){
if(i==7){
printf("#");
}
else{
printf(" ");}
}
}


//for g
void alpg(){
for(j=1;j<=5;j++){
if(i==1){
    printf("#");
}
else if(i>=2&&j==1&&i<=7){
    printf("#");
}
else if((i==7&&j<=3&&j>=2)||(i==7&&j==5)){
    printf("#");
}
else if(i==5&&j>=3&&j<=5){
    printf("#");
}
else if((i==6&&j==3)||(i==6&&j==5)){
    printf("#");
}
else{
    printf(" ");
}
}
}



//for j
void alpj(){
for(j=1;j<=5;j++){
if(i==1){
    printf("#");
}
else if(i>=2&&i<=7&&j==3){
    printf("#");
}
else if(i==7&&j>=1&&j<=2){
    printf("#");
}
else if(i>=5&&i<=6&&j==1){
    printf("#");
}
else{
    printf(" ");
}
}}


//for k
void alpk(){
for(j=1;j<=5;j++){
    if(i<=4&&i>=1&&j==(6-i)){
        printf("#");
    }
else if(i>=5&&i<=7&&j==(i-2)){
    printf("#");
}
else{
    printf(" ");
}
}
}










int main(){int j,k,a=0;
char cc[100];
start:;
printf("enter name");
scanf("%s",cc);
printf("\n");
for(j=0;j<=5;j++){
for(k=0;k<=79 ;k++){

for(i=1;i<=7;i++){
gotoxy(0+k,0+i+j);
for(a=0;cc[a]!='\0';a++)
{
if(cc[a]=='a'){
line();middlea();line();gap();
}
else if(cc[a]=='b'){
line();middleb();line();gap();

}
else if(cc[a]=='c'){
line();middlec();gap();

}
else if(cc[a]=='d'){
line();d();line();gap();

}
else if(cc[a]=='e'){
line();e();gap();

}
else if(cc[a]=='f'){
line();f();gap();

}
else if(cc[a]=='h'){
line();h();line();gap();

}
else if(cc[a]=='i'){
alpi();gap();

}
else if(cc[a]=='l'){
line();alpl();gap();

}
else if(cc[a]=='g'){
alpg();gap();

}
else if(cc[a]=='j'){
alpj();gap();

}
else if(cc[a]=='k'){
 line();alpk();gap();

}


else if(cc[a]==' '){       
gap();gap();

}

}printf("\n");

}delay();system("cls");}}
goto start;
}