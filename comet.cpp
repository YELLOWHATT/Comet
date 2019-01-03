#include <iostream> 
#include <string> 

class student 
{

	private: 

		std::string name; 
		float gpa; 

	public: 

		friend std::ostream& operator << (std::ostream& out, const student& obj); 
 	
		void redec(float new_gpa, std::string new_name)
		{

			gpa = new_gpa; 
			name = new_name; 

		}

		void info(void)
		{ 

			std::cout << "\nPlease enter your name: ";  
			std::cin >> name; 
			std::cout << "\nPlease enter your gpa: ";
			std::cin >> gpa; 
	
		} 

		void output(void)
		{
			
			std::cout << "\nName: " << name << "\nGPA: " << gpa << std::endl; 
		
		}	

};

std::ostream& operator << (std::ostream& out, const student& obj)
{

	out << obj.name << obj.gpa << std::endl; 

	return out; 

} 

int main(void)
{

	student starts; 

	int n; 

	std::cout << "Please enter the number of students you wish to log: "; 
	std::cin >> n; 
	std::cout << "\n"; 
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
