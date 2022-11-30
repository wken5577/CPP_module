
#include <cstdint>
#include <iostream>


struct Data
{
	int 	int_data;
	float	float_data;
	double	double_data;
};


uintptr_t serialize(Data* ptr)
{
	uintptr_t data = reinterpret_cast<uintptr_t>(ptr);
	return data;
}

Data* deserialize(uintptr_t raw)
{
	Data* data = reinterpret_cast<Data *> (raw);
	return data;
}


int main()
{
	Data d1;
	d1.double_data = 1.1;
	d1.float_data = 1.2f;
	d1.int_data = 10;

	uintptr_t serialize_data = serialize(&d1);
	Data *deserialize_data = deserialize(serialize_data);
	std::cout << deserialize_data->double_data << std::endl;
	std::cout << deserialize_data->float_data << std::endl;
	std::cout << deserialize_data->int_data << std::endl;
	std::cout << &d1 << std::endl;
	std::cout << deserialize_data << std::endl;
}