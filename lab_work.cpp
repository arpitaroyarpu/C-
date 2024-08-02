#include<iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Choose one option 1 or 2: "<<endl;
    cin>>x;
    if(x==1){
        int i,count=0;
        char ch[100],c;

        cout<<"Enter a String : ";
        cin>>ch;

        cout<<"\nEnter any Character: ";
        cin>>c;

        for(i=0;ch[i]!='\0';i++)
        {
          if(ch[i]==c)
              count++;
        }
        if(count==0)
        {
          cout<<"\n [ "<<c<<" ] invalid.\n";
        }
        else
        {
          cout<<"\nTotal occurance of [ " <<c<<" ] is : "<<count<<"\n";
        }

        }
    else if(x==2)
    {
    int num1=0, num2=0, num3=0,t,r;
    cout<<"Enter the number of operands:"<<endl;
    cin>>t;
    cout<<"Enter the number of operator: "<<endl;
    cin>>r;
    string st;
    cout<<"Enter the string: ";
    cin>>st;
    int pos1=-1, pos2=-1;
    char op1,op2;


    for(int i=0; i<st.size(); i++)
    {
        if(st[i]=='+' || st[i]=='-' || st[i]=='*' || st[i]=='/')
        {
            if(pos1==-1)
            {
                pos1=i;
                op1=st[i];
            }
            else
            {
                pos2=i;
                op2=st[i];
            }
        }
            else if(pos1==-1)
            {
                num1=num1*10+(st[i]-48);
            }
            else if(pos2==-1)
                {
                num2=num2*10+(st[i]-48);
            }
            else
                {
                num3=num3*10+(st[i]-48);
            }
        }
        cout<<num1<<endl<<op1<<endl<<num2<<endl<<op2<<endl<<num3<<endl;

        if(op2=='*')
        {
            if(op1=='+')
                cout<<num1+(num2*num3);
             else if(op1=='-')
                cout<<num1-(num2*num3);
             else if(op1=='/')
                cout<<num1/(num2*num3);
             else
                cout<<num1*num2*num3;
        }
        else if(op2=='/')
        {
            if(op1=='+')
                cout<<num1+(num2*num3);
             else if(op1=='-')
                cout<<num1-(num2*num3);
             else if(op1=='/')
                cout<<num1/num2/num3;
             else
                cout<<(num1*num2)/num3;
        }

    else
    {
        if(op1=='+')
                num1+=num2;
             else if(op1=='-')
                num1-=num2;
             else if(op1=='*')
                num1*=num2;
             else
                num1/=num2;

         if(op2=='+')
                num1+=num3;
             else if(op2=='-')
                num1-=num3;
             else if(op2=='*')
                num1*=num3;
             else
                num1/=num3;

                cout<<"ans: "<<num1;
    }
}
    else{
        cout<<"Invalid option: "<<endl;
    }

    return 0;
}
