#include<iostream>
using namespace std;
int main(){
        char choice , option , ch , c1  ;
        int main ;
        string sand_p , c2;
            move:
            cout<<"\t\t\t"<<endl;
            cout<<"\t\t--------------------------------WELCOME TO SANDWICHES SHOP ----------------------------------\t\t"<<endl;
            cout<<"\t\t\t "<<endl;
            cout<<"\t\t\t "<<endl;
            cout<<"\t\t\t "<<endl;
            cout<<"\t\t\t "<<endl;
            cout<<"\t\t\t\tGREETING CUSTOMER ALLOW US TO EARN YOUR PLEASURE :\t\t\t\t"<<endl;
            cout<<endl;
            cout<<"\tPRESS THE SERVICE GIVEN BELOW :\t\t\t"<<endl;
            cout<<endl;
            cout<<endl;
           
            cout<<"a) Carte Du Jour ------(FAERIST) "<<endl;
            cout<<endl;
            cout<<"b) Taste of history of SANDWICHES ------(ZIEKA e TARIK)"<<endl;
            cout<<endl;
            cout<<"c) People's Rating ------(LOGO KE DIL KE KARB )"<<endl;
            cout<<endl; 
            cout<<"e) Each SANDWICH journey  ------(BAWARCHI KA TARIKA)"<<endl;
            cout<<endl;
            cout<<"x) quit the shop ------(AGAR DIL KO KHUCH SAMJH NA AYA)"<<endl;
            cout<<endl;
            cout<<"\t\t\t\tPLEASE NOTE U NEED TO USE SAME (lowercase) LETTERS FOR UR CHOICE\t\t\t\t"<<endl;
            cout<<endl;
        while(true){
              cout<<"Enter your desire service (h)--(for help) : "<<endl;
            cin>>choice;
            if(choice == 'h'){
                cout<<endl;
                cout<<endl;

 cout<<"\t\t ************WE HAVE TAKEN YOU BACK TO OUR OFFERED SERVICES THAT WILL GIVE YOU INFORMATION ABOUT THE WHOLE SYSTEM *******\t\t "<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"\t\t\t************FROM WHERE YOU CAN NAVIGATE THROUGH THE WHOLE SYSTEM ************\t\t\t"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                goto move;
            }
            /********************************/
            if(choice == 'a' ){
                
            cout<<endl;
            cout<<"\t\t\t ANGARZI CHULE KI ANCH SE "<<endl;
            cout<<endl;
            cout<<endl;
            cout<<" 1 .GRILLED BEEF .............."<<endl;
            cout<<" 2 .Chicken Teyarki .............."<<endl;
            cout<<" 3 .Veggie Delite .............."<<endl;
            cout<<" 4 .Turkey Club House .............."<<endl;
            cout<<endl;
            cout<<endl;
            
            cout<<"Would you like to order something :"<<endl;
            cout<<"Select 'y' or 'n' : "<<endl;
         cin>>option;
         if(option == 'y' ){
            cout<<"Place your order : "<<endl;
            cout<<"Select the SANDWICH : "<<endl;
            cout<<endl;
            cout<<endl;
            cout<<" 1 .GRILLED BEEF .............. Rs:450"<<endl;
            cout<<" 2 .Chicken Teyarki ..............Rs:555"<<endl;
            cout<<" 3 .Veggie Delite .............. Rs:750"<<endl;
            cout<<" 4 .Turkey Club House ..............Rs:800"<<endl;
            cout<<"Select the SANDWICHES by typing numerical key symbols --(can only select each sandwich in one time )--  : "<<endl;
            cout<<endl;
            cin>>ch;
            if(ch =='n'){
                cout<<"Changed your mind thats good for you : "<<endl;
            }else if(ch == '1'){
                   cout<<endl;
                cout<<"Grilled Beef .............. Rs:450"<<endl;
                cout<<"billed-Amount = 450"<<endl;
                cout<<endl;
                   cout<<endl;
                cout<<"Order will be ready in 20 min ."<<endl;
                   cout<<endl;
            }else if(ch == '2'){
                   cout<<endl;
                cout<<"Chicken Teyarki ..............Rs:555"<<endl;
                cout<<"billed-Amount = Rs:555"<<endl;
                   cout<<endl;
                   cout<<"Order will be ready in 20 min ."<<endl;
                      cout<<endl;
            }else if(ch == '3'){
                   cout<<endl;
                    cout<<"Veggie Delite .............. Rs:750"<<endl;

                cout<<"billed-Amount = Rs:750"<<endl;
                    cout<<endl;
                   cout<<"Order will be ready in 20 min ."<<endl;
                      cout<<endl;
              }else if(ch =='4'){
                  cout<<endl;
                cout<<"Turkey Club House ..............Rs:800"<<endl;
                cout<<"billed-Amount = Rs : 800"<<endl;
                cout<<endl;
                   cout<<"Order will be ready in 20 min ."<<endl;
                      cout<<endl;
                  }
                 }
                     }
                     //*************************
                     else if(choice == 'b'){
                    cout<<"//******      \t\tYou have selected the taste of history       \t\t*******//"<<endl;
                       cout<<endl;
                          cout<<endl;
                          cout<<endl;
                    cout<<"\t\t\tWhich SANDWICH history would you like to have : \t\t\t"<<endl;
                       cout<<endl;
                       cout<<endl;
                          cout<<endl;
                    cout<<"\t\tSandwiches we have currently :\t\t "<<endl;
                       cout<<endl;
                          cout<<endl;
                    cout<<"------1 .(GRILLED BEEF)------"<<endl;
                    cout<<"------2 .(CHICKEN TEYARKI)------"<<endl;
                    cout<<"------3 .(VEGGIE DELITE)------"<<endl;
                    cout<<"------4 .(TURKEY CLUB HOUSE)------"<<endl;
                       cout<<endl;
                    cout<<">>";
                       cout<<endl;
                    cin>>sand_p;
                    if(sand_p == "GRILLED_BEEF" or sand_p == "grilled_beef" ){
                       cout<<endl;
                          cout<<endl;
                    cout<<"Chicago While the exact origins of the Italian beef sandwich are unknown, it made its first appearance during the early 1900s in Chicago. Italian immigrants slow-roasted tough cuts of meat in a spicy broth until it was tender, piling thin slices onto Italian bread.---------------------------------------------------------------------------"<<endl;
                       cout<<endl;
                          cout<<endl;
                  } 
                   else if(sand_p == "Chicken_Teyarki" or sand_p == "CHICKEN_TEYARKI" ){
                           cout<<endl;
                              cout<<endl;
                        cout<<"Everybody loves some good, juicy chicken that is blanketed with a sweet sticky glaze. Which is why chicken teriyaki, a humble Japanese dish, is so popular everywhere in the world! In this recipe, I'll show you how to make authentic Chicken Teriyaki at home—the way it is done in Japan.---------------------------------------------------------------------------"<<endl;
                           cout<<endl;
                            cout<<endl;
                    }else if(sand_p == "Veggie_Delite" or sand_p == "VEGGIE_DELITE"){
                           cout<<endl;
                              cout<<endl;
                        cout<<"history occur in modern times taste of youth.---------------------------------------------------------------------------"<<endl;
                    }
                    else if(sand_p == "Turkey_Club_House" or sand_p == "TURKEY_CLUB_HOUSE"  ){
                        cout<<"A club sandwich, also called a clubhouse sandwich, is a sandwich consisting of bread (traditionally toasted), sliced cooked poultry, fried bacon, lettuce, tomato, and mayonnaise. It is often cut into quarters or halves and held together by cocktail sticks. Modern versions frequently have two layers which are separated by an additional slice of bread.---------------------------------------------------------------------------"<<endl;
                           cout<<endl;
                              cout<<endl;
                    }else {
                           cout<<endl;
                              cout<<endl;
                        cout <<"---------NOT AVAILABLE IN OUR OFFERED SERVICE---------"<<endl;
                           cout<<endl;
                              cout<<endl;
                    }

            
             }
             else if(choice == 'x'){
                   cout<<endl;
                      cout<<endl;
                cout<<"xxxxxxxxxxxxxxxxxxxxxxxxx YOU ARE ABOUT TO EXIT OUR SYSTEM xxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
                   cout<<endl;
                      cout<<endl;
                cout<<"Are you sure you want to exit (y OR n)"<<endl;
                   cout<<endl;
                      cout<<endl;
                cin>>c1;
                   cout<<endl;
                if(c1 == 'y'  ){
                    break;
                }else if(c1 == 'n'  ){
                    continue;
                }
             }
             else if(choice =='e'){
                   cout<<endl;
                      cout<<endl;
                cout<<"\t\tEach Sandwich journey from our kitchen :\t\t"<<endl;
                   cout<<endl;
                      cout<<endl;
                      cout<<"-----------------------------------------------------------------------------------"<<endl;
                      cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"\t\tYou must use underscore instead of blackspace :\t\t"<<endl;
                   cout<<endl;   
                   cout<<endl;
                     cout<<"\t\tSandwiches we have currently on the list  :\t\t "<<endl;
                     cout<<"-----------------------------------------------------------------------------------"<<endl;
                     cout<<"-----------------------------------------------------------------------------------"<<endl;
                        cout<<endl;
                           cout<<endl;
                    cout<<"------1 .(GRILLED BEEF)------"<<endl;
                    cout<<"------2 .(CHICKEN TEYARKI)------"<<endl;
                    cout<<"------3 .(VEGGIE DELITE)------"<<endl;
                    cout<<"------4 .(TURKEY CLUB HOUSE)------"<<endl;
                       cout<<endl;
                          cout<<endl;
                
                cin>>c2;
                if( c2 == "GRILLED_BEEF"){
                       cout<<endl;
                          cout<<endl;
                    cout<<"1 .Preheat oven to 425 (F)"<<endl;
                    cout<<"2 .Stir butter, garlic and thyme together in a small bowl."<<endl;
                    cout<<"3 .Slice bread into 16 slices; discard end pieces." <<endl;
                    cout<< "4 .Spread butter mixture on half of the bread slices. Spread other half with Dijon mustard. Top Dijon mustard slices with beef, 2 slices of cheddar cheese, Gouda cheese and buttered slices of bread, buttered side up."<<endl;
                    cout<< "5 .Heat a frypan over medium heat. Working in batches, brown both sides of each sandwich, about 3 minutes per side."<<endl;
                    cout<< "6 .Transfer to a baking sheet. Bake until heated through and cheese is melted, about 5 – 7 minutes."<<endl;
                       cout<<endl;
                          cout<<endl;
                }else if(c2 == "CHICKEN_TEYARKI" ){
                       cout<<endl;
                          cout<<endl;
                        cout<<"1 .Preheat the oven to 250 degrees F."<<endl;
                        cout<<"2 .If the tenders are still attached to the chicken breasts, cut them off and reserve for another use. Carefully cut each chicken breast in half lengthwise to make two longer pieces, then add to a large resealable storage bag along with the lime juice, brown sugar and 1/4 cup teriyaki sauce. Seal and use your hands to massage the ingredients together. Marinate in the refrigerator for at least 1 hour and up to overnight."<<endl;
                        cout<<"3 .Heat a large cast-iron skillet between medium and medium-high heat. Sprinkle the onion rounds liberally on both sides with salt and pepper. Add 1 tablespoon coconut oil to the skillet, swirl to coat and add the onion rounds. Use a flat spatula to press down on the onions without moving them, and cook until deeply browned on the first side, 4 to 5 minutes. Carefully flip the onions (being careful to keep the rounds together) and cook until tender and browned on the second side, 4 to 5 minutes. Transfer the onions to a large plate or baking sheet. Reserve skillet."<<endl;
                        cout<<"4 .If using bacon, add it to a medium nonstick skillet. Turn the heat to medium and cook until crispy, flipping halfway through, about 10 minutes. Remove to a paper towel-lined plate to drain excess oil."<<endl;
                         cout<<"5 .Remove the chicken from the marinade and lay on a large paper towel-lined plate to absorb any excess marinade. Sprinkle the chicken liberally on both sides with salt and pepper. Set aside."<<endl;
                          cout<<"Place the buns, cut-side up, on a baking sheet and toast in the oven and cook until golden brown, 5 to 10 minutes"<<endl;
                           cout<<"6 .Add the remaining tablespoon coconut oil to the reserved cast-iron skillet and swirl to coat. Add the chicken and cook until browned on the first side, 3 to 4 minutes. Flip the chicken and cook until browned on the second side and cooked through, 2 to 3 minutes."<<endl;
                            cout<<"7 .Turn off the heat and top each piece of chicken with 2 pieces provolone, arranging it so that the cheese overlaps and covers the entire chicken breast. Cover and let sit until the cheese is just melted, 1 to 2 minutes. Transfer the chicken to the same plate as the onions."<<endl;
                            cout<<"8 .Spread the mayonnaise mixture on both sides of the buns. Layer each bun with a chicken breast, onion round, avocado slices, lettuce and bacon, if using. "<<endl;
                               cout<<endl;
                                  cout<<endl;
                }   else if(c2 =="VEGGIE_DELITE"){
                       cout<<endl;
                          cout<<endl;
                    cout<<"1 .If you wish, the bread can be warmed first."<<endl;
                    cout<<"2 .Spread mayonnaise or mustard on each slice of bread."<<endl;
                    cout<<"3 .Divide and arrange the ingredients equally on both slices"<<endl;
                    cout<<"4 . Garnish with the onion sauc"<<endl;
                    cout<<"5 .Place both bread slices together and cut in half crosswise."<<endl;
                    cout<<"6 .Prep does not include baking the bread if that is what you choose to do. All amounts are estimated."<<endl;
                       cout<<endl;
                          cout<<endl;
                }else if(c2 =="TURKEY_CLUB_HOUSE" ){
                       cout<<endl;
                          cout<<endl;
                        cout<<"1 .Gather the ingredients"<<endl;
                           cout<<"2 .Toast the bread and spread 1 side of each slice with mayo. "<<endl;
                                cout<<"3 .Place 1 piece of lettuce, sliced tomato, cranberry sauce—if you so desire, and the bacon on 1 slice. Place a second slice over these ingredients, mayo-side down."<<endl;
                                     cout<<"4 .Spread this top bread slice with mayo, and place the turkey and another lettuce leaf on it, then top with the remaining slice of bread."<<endl;
                                          cout<<"5 .Cut the sandwich into triangles diagonally. Serve and enjoy. "<<endl;
                                             cout<<endl;
                                                cout<<endl;
                                               
                           
                }else{
                       cout<<"-----------------------------------------------------------------------"<<endl;
                          cout<<endl;
                    cout<<"NOT THE SERVICE WE HAVE PROVIDED"<<endl;
                       cout<<endl;
                          cout<<"-----------------------------------------------------------------------"<<endl;
                }

             }else if(choice == 'c'){
                    cout<<endl;
                     cout<<endl;
                 cout<<"\t\t\tSANDWICHES WE OFFER :\t\t\t"<<endl;
                   cout<<endl;
                 cout<<"\t\t\t ** Rating **  \t\t\t"<<endl; 
                  cout<<endl;

                    cout<<"------1.(GRILLED BEEF)------"<<endl;
                    cout<<"------2.(CHICKEN TEYARKI)------"<<endl;
                    cout<<"------3.(VEGGIE DELITE)------"<<endl;
                    cout<<"------4.(TURKEY CLUB HOUSE)------"<<endl;
                    cout<<endl;
                    cout<<"Rating of the sandwich which you want to check (only one select at a time :)"<<endl;
                    cin>>main;
                    if(main == 1){
                          cout<<endl;
                            cout<<endl;
                        cout<<"GRILLED BEEF RATING ------ (9.5/10)"<<endl;
                        cout<<"People comments : "<<endl;
                          cout<<endl;
                          

                        cout<<"KARTIN MARCUS : (Dude this is my last love)"<<endl;
                        cout<<"katherine : (shit i am in love this sandwich .Can i get yumyum)"<<endl;
                          cout<<endl;

                    }else if(main == 2){
                          cout<<endl;
                            cout<<endl;
                        cout<<"CHICKEN TEYARKI ------ (8/10)"<<endl;
                        cout<<"People comments : "<<endl;
                          cout<<endl;
                        cout<<"LUCUS : (its good man hope i can get it every but Alas ! i have gym issues .)"<<endl;
                        cout<<"Robert@bill : (Out of this planet man . )"<<endl;
                            cout<<endl;

                    }else if(main == 3){
                          cout<<endl;
                            cout<<endl;
                            cout<<"VEGGIE DELITE ------ (5/10)"<<endl;

                        cout<<"People comments : "<<endl;

                        cout<<endl;
                        cout<<"ENID:) : (OH OH OH MY MY FREAKING ....This is shit is amazing i need more of this .)"<<endl;
                        cout<<"lisa_mokani : (i usually dont like this stuff but you guys changed my mind .) "<<endl;
                          cout<<endl;
                            
                    }else if(main ==4){
                          cout<<endl;
                            cout<<endl;
                              cout<<" TURKEY CLUB HOUSE------ (5.6/10)"<<endl;
                        cout<<"People comments : "<<endl;
                        cout<<endl;
                        cout<<"shi_min_so : (this was good enough that u earned my comment . Still I will say average .)"<<endl;
                        cout<<"NICK_man : (out of this universe.) "<<endl;
                          cout<<endl;
                            cout<<endl;
                    }
                    
             }
             
         }

            
       return 0;
            }
  



         

 
