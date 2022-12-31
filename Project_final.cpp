#include<iostream>
using namespace std;
int main(){
        char choice , option , ch;
        cout<<"\t\t\t"<<endl;
        cout<<"--------------------------------WELCOME TO SANDWICHES SHOP ----------------------------------"<<endl;
        cout<<"\t\t\t "<<endl;
        cout<<"\t\t\t "<<endl;
        cout<<"\t\t\t "<<endl;
        cout<<"\t\t\t "<<endl;
        cout<<"\t\t\tGREETING CUSTOMER ALLOW US TO EARN YOUR PLEASURE :\t\t\t"<<endl;
        cout<<endl;
        cout<<"PRESS THE SERVICE GIVEN BELOW :"<<endl;
        cout<<"\ta  Carte Du Jour ------(FAERIST) "<<endl;
        cout<<endl;
        cout<<"\tb) Taste of history of SANDWICHES ------(ZIEKA TARIK)"<<endl;
        cout<<endl;
        cout<<"\tc) People's Rating ------(LOGO KE DIL KE KARB )"<<endl;
        cout<<endl; 
        cout<<"\td) Late nights Deal ------((RAAT JAGNE WALLO KE LIYE)"<<endl;
        cout<<endl;
        cout<<"\te)  Each SANDWICH journey ------(BAWARCHIKANHE KA SAFR)"<<endl;
        cout<<endl;
        cout<<"\tx) quit the shop ------(AGAR DIL KO KHUCH SAMJH NA AYA)"<<endl;
        while(true){
              cout<<"Enter your desire service : "<<endl;
        cin>>choice;
    
        if(choice == 'a' ){
            cout<<endl;
            cout<<"\t\t\t ANGARZI CHULE KI ANCH SE "<<endl;
            cout<<endl;
            
            cout<<" 1 .GRILLED BEEF .............."<<endl;
            cout<<" 2 .Chicken Teyarki .............."<<endl;
            cout<<" 3 .Veggie Delite .............."<<endl;
            cout<<" 4 .Turkey Club House .............."<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"Would you like to order something :"<<endl;
        cout<<"Select 'y' or 'n' "<<endl;
        cin>>option;
         if(option == 'y'){
            cout<<"Place your order : "<<endl;
            cout<<"Select the SANDWICH : "<<endl;
            cout<<endl;
            cout<<endl;
            cout<<" 1 .GRILLED BEEF .............. Rs:450"<<endl;
            cout<<" 2 .Chicken Teyarki ..............Rs:555"<<endl;
            cout<<" 3 .Veggie Delite .............. Rs:750"<<endl;
            cout<<" 4 .Turkey Club House ..............Rs:800"<<endl;
            cout<<"Select the SANDWICHES by typing numerical key symbols  : "<<endl;
            cin>>ch;
            if(ch =='n'){
                cout<<"Changed your mind thats good for you : "<<endl;
            }else if(ch == '1 2'){
                cout<<"T"<<endl;

            }else if(ch == ' 1'){
                cout<<"p"<<endl;
            }

        }else if(option == 'n'){
        cout<<"SANDWICH was not carted"<<endl;
        }
  



        }

    return 0;
}