#include <fstream>
#include <vector>
#include "Directory.h"

typedef vector<vector<string> > Dir;

Dir getRecords(string filename = "EmployeeDirectory.txt") {
	
	ifstream iFile(filename.c_str());

	Dir result;
	string field;

	while (!iFile.eof()) {
		vector<string> record;
		for (int i = 0; i < 4; ++i) {
			getline(iFile, field, '\t');
			if (field.length() == 0)
				break;
			record.push_back(field);
		}
		if (field.length() == 0)
			break;
		getline(iFile, field, '\n');
		record.push_back(field);
		result.push_back(record);
	}
	return result;
}

TEST(SearchTest, SearchSuccess) {
	
	Directory<int> directory("EmployeeDirectory.txt");

	directory.Add(9743, "Ali", "Ahmad", "03005543287", "H#34,sector H11, Islamabad");
	directory.Add(1234, "Ayesha", "Ahmad", "03215573987", "H#45,sector G11, Islamabad");

	string firstName, lastName, contactNo, address;


	bool result = directory.SearchById(9743, firstName, lastName, contactNo, address);

	ASSERT_EQ(result, true);
	ASSERT_EQ(firstName, "Ali");
	ASSERT_EQ(lastName, "Ahmad");
	ASSERT_EQ(contactNo, "03005543287");
	ASSERT_EQ(address, "H#34,sector H11, Islamabad");

	result = directory.SearchById(1234, firstName, lastName, contactNo, address);

	ASSERT_EQ(result, true);
	ASSERT_EQ(firstName, "Ayesha");
	ASSERT_EQ(lastName, "Ahmad");
	ASSERT_EQ(contactNo, "03215573987");
	ASSERT_EQ(address, "H#45,sector G11, Islamabad");

}

TEST(SearchTest, SearchFail) {

	Directory<int> directory("EmployeeDirectory.txt");

	directory.Add(9743, "Ali", "Ahmad", "03005543287", "H#34,sector H11, Islamabad");
	directory.Add(1234, "Ayesha", "Ahmad", "03215573987", "H#45,sector G11, Islamabad");

	string firstName, lastName, contactNo, address;


	bool result = directory.SearchById(1000, firstName, lastName, contactNo, address);

	ASSERT_EQ(result, false);

	result = directory.SearchById(9740, firstName, lastName, contactNo, address);

	ASSERT_EQ(result, false);
}

TEST(AddTest, AddTest) {

	Directory<int> directory("EmployeeDirectory.txt");

	directory.Add(9743, "Ali", "Ahmad", "03005543287", "H#34,sector H11, Islamabad");
	directory.Add(1234, "Ayesha", "Ahmad", "03215573987", "H#45,sector G11, Islamabad");

	auto records = getRecords();
	ASSERT_EQ(records.size(), 2);

	ASSERT_EQ(records[0].size(), 5);
	ASSERT_EQ(records[1].size(), 5);

	ASSERT_TRUE(records[0][0] == "9743");
	ASSERT_TRUE(records[1][0] == "1234");

	ASSERT_TRUE(records[0][1] == "Ali");
	ASSERT_TRUE(records[1][1] == "Ayesha");
	
	ASSERT_TRUE(records[0][2] == "Ahmad");
	ASSERT_TRUE(records[1][2] == "Ahmad");

	ASSERT_TRUE(records[0][3] == "03005543287");
	ASSERT_TRUE(records[1][3] == "03215573987");

	ASSERT_TRUE(records[0][4] == "H#34,sector H11, Islamabad");
	ASSERT_TRUE(records[1][4] == "H#45,sector G11, Islamabad");
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
