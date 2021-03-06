#include <iostream>
#include <vector>
using namespace std;

void playing_with_vectors()
{	
	vector<int> first;
	vector<int> second(4,100);
	vector<int> third(second.begin(), second.end());
	
	for(int i; i<third.size(); i++)
		cout << third[i]<< endl;
}

int main()
{
	vector<int> my_vect(4,0); //Initializing a 1 array of size 4 with 0's
	
	for(int i=0;i<10;i++)	
		my_vect.push_back(i); // Appending values(1-9) to the array
	for(int i=0;i<my_vect.size();i++)	
		cout << my_vect[i];
	cout << endl;
	my_vect.resize(8); // Resizing the array to a smaller sized  array of 8 elements and the bigger elements will be lost 
	my_vect.resize(12,33); // Resizing the array and initializing the newer elements to 33 
	my_vect.resize(14); // resizing - the newer elements are initialized to 0 by default 

	
	for(int i=0; i<my_vect.size();i++)	
		cout<<my_vect[i]<<"\t";

	cout << endl;
	playing_with_vectors();
	return 0;
}

