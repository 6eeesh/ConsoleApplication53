int main()
{
	stack<int> st;

	for (int i = 1; i <= 5; i++)
	{
		st.push(i);
	}

	cout << "Top element: " << st.top() << "\n";

	for (int i = 0; i < 2; i++)
	{
		if (!st.empty())
		{
			cout << "Popped elements: " << st.top() << "\n";
			st.pop();
		}
	}

	cout << "All elements: ";
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}

}