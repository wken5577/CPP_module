#include <iostream>

bool isInt(std::string target)
{
	const size_t idx = target.find(".");
	if (idx == std::string::npos)
		return true;
	std::string tmp = target.substr(target.find("."));
	int size;
	if (tmp[tmp.size() - 1] == 'f')
		size = tmp.size() - 1;
	else
		size = tmp.size();
	for(int i = 1; i < size; i++)
	{
		if (tmp[i] != '0')
			return false;
	}
	return true;
}

void castToChar(std::string target)
{
	char ch;

	if (target == "nan" || target == "nanf" \
		|| target == "inf" || target == "-inf"  \
		|| target == "inff" || target == "-inff")
		std::cout << "impossible" << std::endl;
	else
	{
		ch = std::atoi(target.data());
		if (std::isprint(ch))
			std::cout << ch << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void castToInt(std::string target)
{
	long long n;
	if (target == "nan" || target == "nanf" \
		|| target == "inf" || target == "-inf"  \
		|| target == "inff" || target == "-inff")
		std::cout << "impossible" << std::endl;
	else
	{
		n = std::atoll(target.data());
		if (n > 2147483647 || n < -2147483748)
			std::cout << "overflow" << std::endl;
		else
			std::cout << static_cast<int>(n) << std::endl;
	}
}

void castToFloat(std::string target)
{
	float num;

	if (target == "nan" || target == "nanf")
		std::cout << "nanf" << std::endl;
	else if(target == "inf" || target == "inff")
		std::cout << "inff" << std::endl;
	else if(target == "-inf" ||  target == "-inff")
		std::cout << "-inff" << std::endl;
	else
	{
		num = static_cast<float>(std::atof(target.data()));
		if (!isInt(target))
		{
 			std::cout.precision(7);
			std::cout << num << "f" << std::endl;
		}
		else
		{
			std::cout << std::fixed;
			std::cout.precision(1);
			std::cout << num << "f" << std::endl;
		}
	}
}

void castToDouble(std::string target)
{
	double num;

	if (target == "nan" || target == "nanf")
		std::cout << "nan" << std::endl;
	else if(target == "inf" || target == "inff")
		std::cout << "inf" << std::endl;
	else if(target == "-inf" ||  target == "-inff")
		std::cout << "-inf" << std::endl;
	else
	{
		num = std::atof(target.data());
		if (!isInt(target))
		{
			std::cout.precision(15);
			std::cout << num << std::endl;
		}
		else
		{
			std::cout << std::fixed;
			std::cout.precision(1);
			std::cout << num << std::endl;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0 ;
	std::cout << "char: ";
	castToChar(argv[1]);
	std::cout << "int: ";
	castToInt(argv[1]);
	std::cout << "float: ";
	castToFloat(argv[1]);
	std::cout << "double: ";
	castToDouble(argv[1]);
}
