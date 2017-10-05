#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc,char *argv[]){
setlocale(LC_ALL,"RUS");		
while(true){
    char x;
    int a,b;	
       do{
            cout<<"выберите операцию [+.-.*,/,%,^,!,&,|,<,>]:"<<endl;
            cin>>x;
         }while(x!='+' && x!='-' && x!='*' && x!='/' && x!='%' && x!='^' && x!='!' && x!='&' && x!='|' && x!='<' && x!='>');
         if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='^'|| x=='>' || x=='<' || x=='|' || x=='&')
         {
            cout<<" введите первое число :"<<endl;
            cin>>a;
            cout<<"введите второе число:"<<endl;
            cin>>b;
               if(cin.good())
		       { 
              switch(x)
		             {
                        case '+':cout<<(a+b)<<endl;
                           break;
                        case '-':cout<<(a-b)<<endl;
                           break;
                        case '*':cout<<(a*b)<<endl;
                           break;
                        case '/':
                           if (b!=0)
				              cout<<(double)a/(double)b<<endl;
                           else
                              cerr<<"error:на 0 делить нельзя  "<<endl;
                           break;
                        case '%':cout<<(a%b)<<endl;
			               break;
			            case '^':
			            	  for(int i=0,j=a;i<b-1;i++)
			            	     a*=j;
						      cout<<a<<endl;
			               break;
			            case '&':cout<<(a&b)<<endl;
			               break;
			            case '<':
			   	           if(b>=0) 	   
			                  cout<<(a<<b)<<endl;
			               else
					          cerr<<"данные некорректны "<<endl;  
			               break;
			            case '>':
			               if(b>=0)
			                  cout<<(a>>b)<<endl;
			               else
			                  cerr<<"данные некорректы "<<endl;
			               break; 
			            case '|':cout<<(a|b)<<endl;
			               break;
			            default:cerr<<"error "<<endl;               	   	       
                      }
                }
               else
               {
			           cin.clear();
			       cout<<"данные некорректны "<<endl;
		       }
		   }
		   if(x=='!')
		   {
		      cout<<"Введите оператор:"<<endl;
		      cin>>a;
		         switch(x)
		         {
		      	    case '!':cout<<(!a)<<endl;
		      	       break;
		      	    default:
				       cerr<<"error "<<endl;  
			     }
		   }
       }
return 0;		
}
