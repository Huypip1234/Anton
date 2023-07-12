#include<bits/stdc++.h>
using namespace std

int main() {
	//Khai niem:
	//La tap cac code lien ket theo tuyen tinh (truoc, sau)
	//Cac node nam random trong bo nho (trong khi vector, arr nam lien tuc)
	
	//1) Single linked list: 
	//+) Moi node co 2 element (value va address thang tiep theo)
	//+) First Node: Head tro den dia chi value
	//+) last Node: Tail tro den dia chi value, element thu 2 tro den NULL
	
	//2) Double linked List:
	//+) Moi node co 3 element (address prev, value, address next)
	//+) First Node: Chi co 1 element (value), head tro den dia chi value
	//+) Last Node: Chi co 1 element (value), trailer tro den dia chi value
	
	//3) Round linked List:
	//+) Moi node co 2 element (value, address thang tiep theo)
	//+) First Node: Cursor tro den dia chi value
	//+) Last Node: Element thu 2 tro den value thang First Node, Cursor = address
	return 0;
}
