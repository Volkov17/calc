#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc,char *argv[])
{
setlocale(LC_ALL,"RUS");		
while(true){
    char x;
    int a,b;	
       do{
            cout<<"Выберите пожалуйста одну из операций[+.-.*,/,%,^,!,&,|,<,>]:"<<endl;
            cin>>x;
         }while(x!='+' && x!='-' && x!='*' && x!='/' && x!='%' && x!='^' && x!='!' && x!='&' && x!='|' && x!='<' && x!='>');
         if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='^'|| x=='>' || x=='<' || x=='|' || x=='&')
         {
            cout<<"Введите первоое число:"<<endl;
            cin>>a;
            cout<<"Введите второе число:"<<endl;
            cin>>b;
               if(cin.good())
		       { 
              switch(x)
		             {
                        case '+':cout<<"Сумма:"<<(a+b)<<endl;
                           break;
                        case '-':cout<<"Разность:"<<(a-b)<<endl;
                           break;
                        case '*':cout<<"Произведение:"<<(a*b)<<endl;
                           break;
                        case '/':
                           if (b!=0)
				              cout<<"Частное:"<<(double)a/(double)b<<endl;
                           else
                              cerr<<"Ошибка:на 0 нельзя делить "<<endl;
                           break;
                        case '%':cout<<"Модуль:"<<(a%b)<<endl;
			               break;
			            case '^':
			            	  for(int i=0,j=a;i<b-1;i++)
			            	     op1*=j;
						      cout<<"Возведение в степень:"<<a<<endl;
			               break;
			            case '&':cout<<"Побитовое И:"<<(a&b)<<endl;
			               break;
			            case '<':
			   	           if(b>=0) 	   
			                  cout<<"Побитовый сдвиг влево:"<<(a<<b)<<endl;
			               else
					          cerr<<"Некорректные данные"<<endl;  
			               break;
			            case '>':
			               if(b>=0)
			                  cout<<"Побитовый сдвиг вправо:"<<(a>>b)<<endl;
			               else
			                  cerr<<"Некорректные данные"<<endl;
			               break; 
			            case '|':cout<<"Побитовое ИЛИ:"<<(a|b)<<endl;
			               break;
			            default:cerr<<"Ошибка"<<endl;               	   	       
                      }
                }
               else
               {
			           cin.clear();
			       cout<<"Некорректные данные"<<endl;
		       }
		   }
		   if(x=='!')
		   {
		      cout<<"Введите пожалуйста оператор:"<<endl;
		      cin>>a;
		         switch(x)
		         {
		      	    case '!':cout<<(!a)<<endl;
		      	       break;
		      	    default:
				       cerr<<"Ошибка"<<endl;  
			     }
       }
return 0;		
}
