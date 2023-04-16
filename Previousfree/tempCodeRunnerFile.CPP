int a,b,c,d,e,not1,not50,not100,not500,not2000,f;
 cout<<"Please Enter the Amount :-"<<endl;
 cin>>a;
 not2000 = a / 2000;
 b = a%2000;
 not500 = b / 500;
 c = b % 500;
 not100 = c/100;
 d = c%100;
 not50 = d/50;
 e = d%50;
 not1 = e/1;
 cout<<"Please Enter which amount note do you want"<<endl;
 for(int i = 1;i<=5;i++){
 cin>>f; 
 switch(f){
    case 1 : 
    cout<<"No of 1 x   "<<not1<<endl;
    break;
    case 50 :
     cout<<"No of 50 x   "<<not50<<endl;
    break;
    case 100 :
     cout<<"No of 100 x   "<<not100<<endl;
    break;
    case 500 :
     cout<<"No of 500 x   "<<not500<<endl;
    break;
    case 2000 :
     cout<<"No of 2000 x   "<<not2000<<endl;
    break;
 }
 }
}