#include <iostream> 
#include <string> 

class student 
{

	private: 

		std::string name; 
		float gpa; 
		unsigned short int num; 

	public:

		friend std::ostream& operator << (std::ostream& out, const student& obj); 
 	
		void redec(float new_gpa, std::string new_name, unsigned short int new_num)
		{

			gpa = new_gpa; 
			name = new_name; 
			num = new_num; 

		}

		void info(void)
		{ 

			std::cout << "\nPlease enter student name: ";  
			std::cin.ignore();  
			std::getline(std::cin, name);

			std::cout << "\nPlease enter student gpa: ";
			std::cin >> gpa; 

			std::cout << "\nPlease enter student number: "; 
			std::cin >> num; 
	
		} 

		void output(void)
		{
			
			std::cout << "\nStudent Name: " << name << "\nStudent GPA: " << gpa << "\nStudent Number: " << num << std::endl; 
		
		}	

};

std::ostream& operator << (std::ostream& out, const student& obj)
{

	out << obj.name << obj.gpa << obj.num << std::endl; 

	return (out); 

} 

int main(void)
{

	student starts; 

	int n; 

	std::cout << "Please enter the number of students you wish to log: "; 
	std::cin >> n; 
	
	student students[n]; 

	for (int i = 0; i < n; i++)
	{
	
		students[i].info(); 
		students[i].output(); 

	} 

	std::cout << "\nPress enter to continue: "; 
	std::cin.ignore(); 
	std::cin.get(); 

	return (0); 

}