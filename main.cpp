/*
	Name : Aarti Rathi
 	Wesbite : https://shinchancode.github.io/3d-react-portfolio/
*/

#include<bits/stdc++.h> 
#include "Trie.cpp"
#include<windows.h>
using namespace std;  

int menu()
{
    cout<<"\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t\t|          PHONE BOOK APPLICATION          |\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t\t|                                          |\n";
    cout<<"\t\t\t\t\t|       [1]  Add Contacts                  |\n";
    cout<<"\t\t\t\t\t|       [2]  Search by Name                |\n";
    cout<<"\t\t\t\t\t|       [3]  Search by Prefix              |\n";
    cout<<"\t\t\t\t\t|       [4]  Delete Data                   |\n";
    cout<<"\t\t\t\t\t|       [5]  Show Prefixes                 |\n";
    cout<<"\t\t\t\t\t|                                          |\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t\t|            [6]    Exit                   |\n";
    cout<<"\t\t\t\t\t--------------------------------------------\n";
    cout<<"\n";
    cout<<"\t\t\t\t\tEnter your choice : ";

    int choice;
    cin>>choice;
    
    return choice;
}


int main()
{    
    Trie *t = new Trie();

    int choice = menu();
    do
    {

        if(choice==1)
        {

            cout<<"\t\t\t\t\t\t Please Enter Name : ";
            string s,num;
            cin>>s;
            cout<<"\t\t\t\t\t\t Please Enter Contact No : ";
            cin>>num;
            
            if(t->search(s))
            { 
                cout<<"\n\t\t\t\t\t\t Data already exists\n";
            }
            else
            {
                t->insert(s, num);
            }
       }

       else if(choice==2)
       {

        cout<<"\t\t\t\t\t\t Please Enter name to check: ";
        string s;
        cin>>s;
        bool ok = t->search(s);
        if(ok)
            cout<<"\n\t\t\t\t\t\t Contact exists \n";
        else
            cout<<"\n\t\t\t\t\t\t Contact does not exist !! \n";

        }

        else if(choice==3)
       {

        cout<<"\t\t\t\t\t\t Please Enter prefix to check: ";
        string s;
        cin>>s;
        
        bool ok = t->starts_with(s);
        if(ok)
            cout<<"\n\t\t\t\t\t\t Contact exists with this prefix!! \n";
        else
            cout<<"\n\t\t\t\t\t\t Contact does not exist with this prefix!! \n";

        }

        else if(choice==4)
        {

            cout<<"\t\t\t\t\t\t Please Enter name to delete : ";
            string n;
            cin>>n;
            t->remove(n);

        }

        else if(choice==5)
        {

            cout<<"\t\t\t\t\t\t Please Enter the prefix: ";
            string na;
            cin>>na;

            t->show_recommendations(na);
        }
        else
        {
            break;
        }

        choice=menu();
    }

    while(choice<=5 && choice>=1);

    cout<<"\n\t\t\t\t\t\t\tTHANK YOU !";

    return 0;
}
