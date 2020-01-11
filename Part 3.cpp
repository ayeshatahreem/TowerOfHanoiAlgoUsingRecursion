#include <iostream>
using namespace std;

// The Towers of Hanoi : T(n)= O(2n)  
void hanoi(int num, int from, int to, int spare)
{
  if(num == 0)
	{
		cout << "Moving disk " << num << " from peg " << from << " to peg " << to << endl;
	}
	else
	{
		hanoi(num-1 , from, spare, to);
		cout << "Moving disk "  << num << " from peg " << from << " to peg " << to << endl;
		hanoi(num-1 , spare, to, from);
	}
}

int main()
{
  cout<<"*******RECURSIVE WAY TO IMPLEMENT TOWER OF HANOI******"<<endl;
  cout<<"How many disks u want to move ? ";
  int noOfDisks;
  cin>>noOfDisks;
  hanoi(noOfDisks, 1, 2, 3);
  system ("pause");
  return 0;
}