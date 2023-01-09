
#include <iostream>
#define size 5
using namespace std;
struct  linearqueue
{
	int front;
	int rear;
	int items[size];

};
void intilization(struct linearqueue* ps)
{
	ps->front = 0;
	ps->rear = -1;
}
int isempty(struct linearqueue* ps)
{
	if (ps->rear < ps->front)
		return 1;
	else
		return 0;
}
void insert(struct linearqueue* ps, int x )
{
	if (isempty)
	{
		cout << "empty";
}
	else
	ps->items[++ps->rear]=x;
}
int remove(struct linearqueue* ps)
{
	int x;
	if (isempty(ps))
		cout << " pls insert ";
	else
		x = ps->items[ps->front++];
	return x;
}
void print(struct linearqueue *ps)
{
	struct linearqueue temp;
	intilization(&temp);
	int x;
	while ((!isempty)(ps))
	{
		x=remove(ps);
			cout << x;
		insert(&temp, x);
	}
	while ((!isempty)(&temp))
	{
		x =remove(&temp);
		insert(ps, x);
	}

}
int main()
{
	cout << "                                                    "<< "CPU Scheduler stimulation" << endl;
	int a;
		cout << "press 1 to get out option" << ":";
		cin >> a;

		switch (a)
		{
		case 1:
			cout << "  " << " 1" << "  " << " Scheduling Method (none)" << endl;
		case 2:
			cout << "  " << " 2" << "  " << "Premative mode"<< endl;
		case 3:
			cout << "  " << " 3" << "  " << "Show result " << endl;
		case 4:
			cout << "  " << " 4" << "  " << "End Program" << endl;
		}

}
