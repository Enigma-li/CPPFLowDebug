#include "trained_model.h"


namespace Test {

	TFModel::TFModel()
	{
	}

	TFModel ::~TFModel()
	{
	}

	void TFModel::test_network()
	{
		auto input = cppflow::fill({ 10, 5 }, 1.0f);
		cppflow::model model("../model");
		auto output = model(input);

		std::cout << output << std::endl;

		auto values = output.get_data<float>();

		for (auto v : values) 
		{
			std::cout << v << std::endl;
		}

	}

}
