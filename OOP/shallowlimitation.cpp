#include <iostream>
using namespace std;

class Box
{
private:
	int length;
	int *breadth;
	int height;

public:
	Box()
	{
		breadth = new int;
	}

	void set_dimension(int l, int b,
					   int h)
	{
		length = l;
		*breadth = b;
		height = h;
	}

	void show_data()
	{
		cout << " Length = " << length
			 << "\n Breadth = " << *breadth
			 << "\n Height = " << height
			 << "\n";
	}

	// Box(Box& sample)
	// {
	// 	length = sample.length;
	// 	breadth = new int;
	// 	*breadth = *(sample.breadth);
	// 	height = sample.height;
	// }

	~Box()
	{
		delete breadth;
	}
};

int main()
{
	Box b1;

	b1.set_dimension(5, 10, 15);

	// Box b2 = b1;

	// b2.show_data();

	{
		Box b3{b1};
	}
	b1.show_data();
	return 0;
}
