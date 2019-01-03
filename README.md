# Comet 

![](https://img.shields.io/badge/C++-17-blue.svg) ![](https://img.shields.io/badge/license-MIT-lightgray.svg) ![](https://img.shields.io/badge/version-0.0.2-yellow.svg) ![](https://img.shields.io/badge/build-passing-green.svg) 

> A Student Data Organzizer 

--- 

### Table of Contents 

### Table of Contents 

These are the sections on the [README.md](https://github.com/YELLOWHATT/Comet/blob/master/README.md) file. 

- [Description](#description)
- [How To Use](#how-to-use)
- [Files Included](#files-included) 
- [References](#references) 
- [Contributing](#contributing) 
- [License](#license)
- [Author Info](#author-info)
- [Contributors](#contributors) 
- [Version Info](#version-info)
- [Help](#help) 
- [Info](#info) 

--- 

## Description 

Comet is a student organization tool made in C++. 

#### Technologies 

- C++ 17 
- Shell Script 

#### Other technologies are subject to be used 

--- 

## How To Use 

To use this work simply download it and edit or use it by running it in the GNU C++ Compiler.

#### Prerequistites 

You must have the GNU C++ Compiler if you don't have one run

```bash 
sudo apt-get install gcc
```

#### Installation 

To install Comet please use the following command and make sure you have the GNU C++ Compiler. 

```
git clone https://github.com/YELLOWHATT/Comet or Download it 
```

#### Usage 

```cpp
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
```
```
input: 1 

output: Please enter your Name: 

output: Please enter your GPA: 
```

--- 

## Files Included 

- [.gitignore](https://github.com/YELLOWHATT/Comet/blob/master/.gitignore)
- [LICENSE](https://github.com/YELLOWHATT/Comet/blob/master/LICENSE) 
- [README.md](https://github.com/YELLOWHATT/Comet/blob/master/README.md) 
- [CONTRIBUTING.md](https://github.com/YELLOWHATT/Comet/blob/master/CONTRIBUTORS.md)
- [CONTRIBUTIONS.md](https://github.com/YELLOWHATT/Comet/blob/master/CONTRIBUTIONS.md)
- [comet.cpp](https://github.com/YELLOWHATT/Comet/blob/master/comet.cpp)
- [runcom](https://github.com/YELLOWHATT/Comet/blob/master/runcom) 

#### Files are subject to have their name changed and more files can be included without notice. 

---

## References 

[Back To The Top](#Casper) 

--- 

## Contributing

If you wish to help on this project you can simply make changes to the file and post your changes and if they are appreciated we will merge them to the Master branch. Please read the [CONTRIBUTING.md](https://github.com/YELLOWHATT/Comet/blob/master/CONTRIBUTORS.md) file for more information. If you have contributed to this work known as Darwin you will be credited the file for contributors is [CONTRIBUTIONS.md](https://github.com/YELLOWHATT/Comet/blob/master/CONTRIBUTIONS.md). :) 

--- 

## License 

MIT License 

Copyright (c) [2017] [YELLOWHATT] 

Permission is hereby granted, free of charge, to any person obtainin g a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: 

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software. 

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT, IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 

See | [LICENSE.md](https://github.com/YELLOWHATT/Comet/blob/master/LICENSE) file or [MIT](https://choosealicense.com/licenses/mit/)|

[Back To The Top](#Casper) 

--- 

## Author Info 

- Github - [YELLOWHATT](https://github.com/YELLOWHATT)

--- 

## Contributors 

- YELLOWHATT 

--- 

## Version Info 

The current stable version of Comet is: 0.0.2. 

Summury of Version 0.0.2 Application is fixed up. 

--- 

## Help 

If there is a bug please contact us through the email provided. 

- Email Address: thekoolaidmannn@gmail.com 

--- 

## Info 

If you have any info you are willing to know contact us on the email that is provided. 

Emails are located in [Help](#help).  

--- 

#### Thank you for giving Darwin a look :) 

---

[Back To The Top](#Comet)
