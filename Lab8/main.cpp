#include <iostream>
#include <string>
#include <fstream>
#include "BinarySearchTree.h"
#include "pokemon.h"


using namespace std;
//Function Initialization
std::string filename;
ofstream ofile;
void savedic(pokemon& poke);
void printdic(pokemon& poke);
void testadd(BinarySearchTree<pokemon, string> bst3, string eng, string num, string jap);
void testremove(BinarySearchTree<pokemon, string> bst3, string removes);
void testwrite(BinarySearchTree<pokemon, string> bst3, string file);

int main(int argc, char* argv[])
{
	BinarySearchTree<pokemon, std::string> bst;
	BinarySearchTree<pokemon, std::string> bst2;
int select;
int select2;
int select5;
char co;
std::string english;
std::string japanese;
std::string pokenum;
ifstream file;
file.open(argv[1]);
if(file.fail()){
	cout<<"Error! Could not locate file\n\n";
	exit(1);
}
while(file.good()){
	getline(file, english, ',');
	getline(file, pokenum, ',');
        getline(file, japanese,'\n');
        pokemon p(english, pokenum, japanese);
				bst.add(p);
}
file.close();
while(select!=7){
cout<<"\nWelcome to Pokemon dictionary!\nSelect which function you would like to do:\n"
<<"(1) Search for pokemon\n"
<<"(2) Save the dictionary to a file\n"
<<"(3) Add a new pokemon \n"
<<"(4) Remove a pokemon\n"
<<"(5) Test\n"
<<"(6) Copy\n"
<<"(7) Quit\n";
cin>>select;
if(select==1){
	cout<<"Enter name of Pokemon\n";
	cin>>english;
	cout<<"\n";
        pokemon p2=bst.getEntry(english);
        cout<<"Dictionary entry:\nEnglish:"<<p2.getename()<<"  Pokedex: "<<p2.getpnum()<<"  Japanese:  "<<p2.getjname()<<endl;
}
else if(select==2){
	cout<<"Enter output file name \n";
	cin>>filename;
	cout<<"Print copy or original dictionary?(c/o)";
	cin>>co;
	 cout<<"Which order would you like the dictionary to be written?\n"
	 <<"(1) preorder\n"
	 <<"(2) inorder\n"
	 <<"(3) postorder\n";
         cin>>select2;
				 ofile.open(filename);
				if(co=='c'){
					if(select2==1){
						bst2.preorderTraverse(savedic);
					}
					else if(select2==2){
						bst2.inorderTraverse(savedic);
					}
					else if(select2==3){
						bst2.postorderTraverse(savedic);
					}
				}
				else if(co=='o'){
					if(select2==1){
						bst.preorderTraverse(savedic);
					}
					else if(select2==2){
						bst.inorderTraverse(savedic);
					}
					else if(select2==3){
						bst.postorderTraverse(savedic);
					}
				}
				 ofile.close();
}
else if(select==3){
	cout<<"Enter pokemon name in English\n";
	cin>>english;
	cout<<"\nEnter pokemon name in Japanese\n";
	cin>>japanese;
	cout<<"\nEnter pokemon pokedex\n";
	cin>>pokenum;
        pokemon p1(english, pokenum, japanese);
				bst2.add(p1);
}
else if(select==4){
	cout<<"Enter the name of the pokemon you want to delete\n";
	cin>>english;
  bst2.removepoke(english);
}
else if(select==5){
	cout<<"Enter which test you would like to be performed: \n"
		<<"(1) Test Add\n"
		<<"(2) Test Remove\n"
		<<"(3) Test Write to File\n";
		cin>>select5;
		if(select5==1){
			cout<<"Enter pokemon name in English\n";
			cin>>english;
			cout<<"\nEnter pokemon name in Japanese\n";
			cin>>japanese;
			cout<<"\nEnter pokemon pokedex\n";
			cin>>pokenum;
      testadd(bst, english, pokenum, japanese);

		}
		else if(select5==2){
			cout<<"Enter the name of the Pokemon you want to remove\n";
			cin>>english;
      testremove(bst, english);
		}
		else if(select5==3){
			cout<<"Enter output file name\n";
			cin>>filename;
      testwrite(bst, filename);
		}
}
else if(select==6){
	cout<<"Copy created.\n";
}
}
	return 0;
}
void printdic(pokemon& poke){
	cout<<poke.getename()<<" , "<<poke.getpnum()<<" , "<<poke.getjname()<<endl;
}
void savedic(pokemon& poke){
	ofile<<poke.getename()<<" , "<<poke.getpnum()<<" , "<<poke.getjname()<<endl;
}
void testadd(BinarySearchTree<pokemon, std::string> bst3,std::string eng,std::string num,std::string jap){
  pokemon p10(eng, num, jap);
  bst3.add(p10);
  bst3.inorderTraverse(printdic);
}
void testremove(BinarySearchTree<pokemon, std::string> bst3, std::string removes){
  bst3.removepoke(removes);
  bst3.inorderTraverse(printdic);
}
void testwrite(BinarySearchTree<pokemon, std::string> bst3, std::string file){
  ofile.open(file);
  bst3.inorderTraverse(savedic);
}
