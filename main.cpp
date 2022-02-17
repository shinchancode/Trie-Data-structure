#include<bits/stdc++.h> 
#include "Trie.cpp"
#include<windows.h>
using namespace std;  

int menu()
{
    cout<<"\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t\t|          PHONE BOOK APPLICATION          |\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t\t|                                          |\n";
    cout<<"\t\t\t\t\t|       [1]  Add Contacts                  |\n";
    cout<<"\t\t\t\t\t|       [2]  Search by Name                |\n";
    cout<<"\t\t\t\t\t|       [3]  Search by Prefix              |\n";
    cout<<"\t\t\t\t\t|       [4]  Delete Data                   |\n";
    cout<<"\t\t\t\t\t|       [5]  Show Recommendations          |\n";
    cout<<"\t\t\t\t\t|                                          |\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t\t|            [6]    Exit                   |\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\tEnter your choice ";

    int a;
    cin>>a;
    
    return a;
}


int main()
{    
    Trie *t = new Trie();

    int ch = menu();
    do
    {

        if(ch==1)
        {

            cout<<"\t\t\t\t\t\t Please Enter Name :\n";
            cout<<"\t\t\t\t\t\t ";
            string s,num;
            cin>>s;
            cout<<"\t\t\t\t\t\t Please Enter Phone No :\n";
            cout<<"\t\t\t\t\t\t ";
            cin>>num;
            if(t->search(s))
            { 
                cout<<"\t\t\t\t\t!!!!Name already exists!!!!\n\n";
            }



           t->insert(s, num);

       }

       else if(ch==2)
       {

        cout<<"\t\t\t\t\tPlease Enter name to check: ";
        string s;
        cin>>s;
        bool ok = t->search(s);
        if(ok)
            cout<<"\t\t\t\t\t\t Contact exists!! \n";
        else
            cout<<"\t\t\t\t\t\t Contact does not exists !! \n";

        }

        else if(ch==3)
       {

        cout<<"\t\t\t\t\tPlease Enter prefix to check: ";
        string s;
        cin>>s;
        
        bool ok = t->starts_with(s);
        if(ok)
            cout<<"\t\t\t\t\t\t Contact exists with this prefix!! \n";
        else
            cout<<"\t\t\t\t\t\t No Contact exists with this prefix!! \n";

        }

        else if(ch==4)
        {

            cout<<"\t\t\t\t\tPlease Enter name to delete : ";
            string n;
            cin>>n;
            t->remove(n);

        }

        else if(ch==5)
        {

            cout<<"\t\t\t\t\tPlease enter the prefix: ";
            string na;
            cin>>na;

            t->show_recommendations(na);
        }

        ch=menu();
    }

    while(ch<=5 && ch>=1);

    cout<<"\t\t\t\t\tTHANK YOU !";

    return 0;
}