// 04_drill.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	double i{};
	double smallest{};
	double largest{};
	std::string unit{};
	int m{ 100 };
	double in{ 2.54 };
	double ft{ 12 * in };
	double cm{};
	double sum{};
	int n_values{};
	std::vector<double> values;

	while (std::cin >> i >> unit) {
		cm = 0;
		if (unit == "cm") cm = i;
		else if (unit == "m") cm = i * m;
		else if (unit == "in") cm = i * in;
		else if (unit == "ft") cm = i * ft;
		else {
			std::cout << "\"Illegal\" unit\n";
		}
		if (cm) {
			if (cm < smallest) {
				smallest = cm;
				if (!largest) largest = smallest;
				std::cout << "the smallest so far\n";
			}
			else if (cm > largest) {
				largest = cm;
				if (!smallest) smallest = largest;
				std::cout << "the largest so far\n";
			}
			sum += cm;
			n_values++;
			values.push_back(cm/m);
		}
	}

	std::cout << "\nSmallest value: " << smallest << "cm\n";
	std::cout << "Largest value: " << largest << "cm\n";
	std::cout << "Number of values: " << n_values << '\n';
	std::cout << "Sum of values: " << sum/m << " m\n";
	std::cout << "Values:\n";
	std::sort(values.begin(), values.end());
	for (double v : values)
		std::cout << v << '\n';
	std::cout << '\n';

    return 0;
}

