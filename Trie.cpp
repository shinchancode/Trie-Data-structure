/*
	Name : Aarti Rathi
 	Wesbite : https://shinchancode.github.io/3d-react-portfolio/
*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		char data;

		pair<bool,string> is_last;

		unordered_map<char,Node*> children;
		
		Node(char d)
		{
			data = d;
			is_last.first=false;
			is_last.second="-1";
		}
};


class Trie
{
	Node *root;
	Node* tmp;

public:
	//Initialize trie data structure here

	Trie()
	{
		root=new Node('\0');
	}

	//Inserting a word into the trie

	void insert(string word,string phn_no)
	{
		Node* temp = root;

		for(int i=0;i<word.length();i++)
		{
			char ch = word[i];

			if(temp->children.count(ch))
			{
				temp = temp->children[ch];
			}
			else
			{
				Node *n = new Node(ch);
				temp->children[ch]=n;
				temp = temp->children[ch];
			}
		}

		temp->is_last.first = 1;
		temp->is_last.second = phn_no;
		cout<<"\n\t\t\t\t\t\t Data Added Successfully \n";
	}


	//Returns if the word is in the trie

	bool search(string word)
	{
		Node *temp= root;
		for(int i=0;i<word.length();i++)
		{
			char ch = word[i];
			if(!temp->children.count(ch))
			{
				return false;
			}

			temp = temp->children[ch];
		}

		if(temp->is_last.first==1)
		{
			return true;
		}
		return false;
	}


	

	bool starts_with(string prefix)
	{
		Node* temp=root;

		for(int i=0;i<prefix.size();i++)
		{
			char ch = prefix[i];
			if(!temp->children.count(ch))
			{
				return false;
			}

			temp = temp->children[ch];
		}
		tmp=temp;
		return true;
	}

	//Remove the word if exists

	void remove(string word)
	{
		Node *temp= root;

		bool check=true;

		for(int i=0;i<word.length();i++)
		{
			char ch = word[i];
			if(!temp->children.count(ch))
			{
				check=false;
			}
			else
			{
				temp = temp->children[ch];
			}
		}

		if(check)
		{
			temp->is_last.first=false;
			cout<<"\n\t\t\t\t\t\t Data Deleted Successfully \n";
			return;
		}
		else
		{
			cout<<"\n\t\t\t\t\t\t Invalid!! Please Enter a valid name\n";
		}
	}

	void build_words(Node *temp,string curr)
	{
		for(char c='a';c<='z';c++)
		{
			if(temp->children.count(c))
				build_words(temp->children[c],curr+temp->data);

			else
			{
				if(temp->is_last.first)
				{
					cout<<"\t\t\t\t\t\t ";
					cout<<curr+temp->data<<endl;
					return;
				}
			}
		}

	}

	//Show recommendations according to the given word

	void show_recommendations(string incom_word)
	{
		Node *temp = root;

		if(!starts_with(incom_word))
		{
			cout<<"\n\t\t\t\t\t\t Invalid!! Please Enter a valid Prefix\n";
			return ;
		}
		else
		{
			string cpy = incom_word;
			cpy.pop_back();

			build_words(tmp,cpy);
		}
	}
};
