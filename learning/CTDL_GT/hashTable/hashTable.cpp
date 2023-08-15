#include <bits/stdc++.h>
using namespace std;

// Sumary flow:
// insert: "abc" -> hashFunc() -> insert "abc" in hashTable
// get: "abc" -> hashFunc() -> get "abc" in hashTable

string hashTable[27];

int hashFunc(string s) {
	return (s[0]-'a'); //'a'-'a'=0, 'b'-'a'=1,...
}

// Tham do tuyen tinh: (i+1)%size
void insert(string s) {
	int index=hashFunc(s);
	while(hashTable[index] != "") { //Bi dung do
		index = (index+1) % 27;
	}
	// Het dung do
	hashTable[index] = s;
}

int getIndex(string s) {
	int index = hashFunc(s);
	while(hashTable[index] != "" && hashTable[index] != s) {
		index = (index+1) % 27;
	}
	if(hashTable[index]==s) {
		return index;
	} else {
		return -1;
	}
}

// Tham do bac 2: (i+k*k)%size (k=1, 2, 3,...)
void insert2(string s) {
	int index=hashFunc(s);
	int k = 1;
	while(hashTable[index] != "") { //Bi dung do
		// Khac o day :)
		index = (index+ k*k) % 27; 
		k++;
	}
	// Het dung do
	hashTable[index] = s;
}

int getIndex2(string s) {
	int index = hashFunc(s);
	int k = 1;
	while(hashTable[index] != "" && hashTable[index] != s) {
		// Khac o day :)
		index = (index+ k*k) % 27; 
		k++;
	}
	if(hashTable[index]==s) {
		return index;
	} else {
		return -1;
	}
}

// Bam day truyen (Noi ket truc tiep) (it sdung): Linked List 
vector<string> hashTable2[27];



int main() {
	insert("abcd");
	insert("bcef");
	insert("cabe");
	insert("caba");
	insert("aaba");
	
	//cout<<getIndex2("aaba");
	cout<<hashTable[4];
	return 0;
}

