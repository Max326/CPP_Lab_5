#include <iostream>
#include <vector>

int main() {
	std::cout << "Hello world" << std::endl;

	std::vector<int> vector;

	for(int i = 0; i < 100; i++) {
		vector.emplace_back(i);
		std::cout << "Vector size: " << vector.size();
		std::cout << " and capacity: " << vector.capacity() << std::endl;

		std::cout << "address of first element: " << &vector[0] << std::endl;
	}

	int n = 100;
	std::vector<int> bector(n, 100);

    for (int j=0; j<n; j++) {
        std::cout << bector[j] << std::endl;
    }


	return 0;
}
