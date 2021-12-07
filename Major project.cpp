//High or Low game

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int num, guess, tries=5;
	srand(time(0));
	num = rand() % 50 + 1;
	cout << "\n\nGuess My Number Game. You have 5 chances!\n\n";

	do
	{
		cout << "\nEnter a guess between 1 and 50 : ";
		cin >> guess;
		tries--;
		cout<<"\nNo. of chances left:"<<tries;

		if (guess > num)
			cout << "\n\nToo high!Enter a number lower than "<<guess<<"\n";
		else if (guess < num)
			cout << "\n\nToo low!Enter a number higher than "<<guess<<"\n";
		else
			cout << "\n\nCorrect! You Won!!\n";
	}
	while (tries != 0 && guess!=num);
	cout<<"\nGame over!!\n";
	cout<<"Do you want to play again(y/n):";
	cin>>ans;
	if(ans=='y')
	{
		return main();
	}
	else
	{
		cout<<"\nGame Over!!";
		
	}
	return 0;
}

