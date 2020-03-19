#include <iostream>

using namespace std;

char t[6][7];

int Read_Blue(){
   int poz, i;
   cout<<"Albastru, alegeti pozitia! ";
   cin>>poz;
   if(t[1][poz] == 'x'){
      for(i = 1;i<=6 && t[i][poz] == 'x'; i++){}
      t[i-1][poz] = 'B';
   }
   else{
      cout<<"Nu poti pune aici"<<endl;
      return false;
   }
}

int Read_Red(){
   int poz, i;
   cout<<"Rosu, alegeti pozitia! ";
   cin>>poz;
   if(t[1][poz] == 'x'){
      for(i = 1;i<=6 && t[i][poz] == 'x'; i++){}
      t[i-1][poz] = 'R';
   }
   else{
      cout<<"Nu poti pune aici"<<endl;
      return false;
   }

}

int Afisare(){
   for(int i = 1; i<=6; i++){
      for(int j = 1; j<=7; j++)
         cout<<t[i][j]<<" ";
      cout<<endl;
   }
}

int Umplere(){
   for(int i = 1; i<=6; i++)
      for(int j = 1; j<=7; j++)
         t[i][j] = 'x';
}

int Check_Win(){

   //verificam pe coloane
   for(int i = 1; i<=7; i++){
      //traversam coloana in sus
      for(int j = 1; j<=4; j++){
         if(t[j][i] != 'x')
         for(int n = j + 1, bool gasit = true; n<j+4; n++) if(t[n][i] !=  )
      }
   }
}



int main(){
   bool joc = true, red_blue = true;
   Umplere();
   while(joc){

   Afisare();

   if(red_blue)
   Read_Blue();

   else Read_Red();

   Check_Win();

   red_blue = !red_blue;


   }

}
