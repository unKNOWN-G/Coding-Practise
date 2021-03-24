/*
 16:11 24-03-2021
 OOP Concepts
 
 The statement i am going to make is with experience of reffering Web pages, youtube tutorials on OOP in c++(It is relative and changes from person to person and this is my personal opinion)
 If you want to learn OOP properly with understanding and code implementation go and visit https://www.w3schools.com/cpp/cpp_oop.asp
 I Found it very useful and affective in my learning. Some of the content in this file is inspired from w3schools and geeksforgeeks(An inherited class from 2 parents lol)
 
 Why OOP?
 OOP is faster and easier to execute
 OOP provides a clear structure for the programs
 OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
 OOP makes it possible to create full reusable applications with less code and shorter development time
 
 Things i am gonna mention:
 Class [attributes(variables), methods(functions)]
 Objects
 constructors
 Access specifiers
 Encapsulation
 Inheritance [Multilevel, Multiple, Access specifier]
 polymorphism
 
 Class			- 	User defined data type(Almost similar to structure) , 
 			  	  	Here we can define methods too.
 			  		Its basically like a blueprint to the object variable
 			  
 Object			-	An object is created from a class name.
 				  	To access the attribute and methods we use dot('.') operator.
			 		When an object is defined the memory gets allocated
			  
 Class attributes-	Variables defined in a class are called as attributes
 					These can be in defined under 3types of access specifies public,private,protected(These will be discussed in the Upcoming definitions)
 					
 Class methods	-	These are the function that belong to the class
 					These are of two types
 						Inside class definiton 	- Function defined inside the class
 						Outside class definition- Function declared inside class but defined outside the class by using 'class::method{..}' format
 						
 Constuctors	-	Special type of class Method which gets called everytime an object is created
 					Arguments also can be passed into the constructor
 					These can be defined outside the class too like the function
 	
 Acess Specifiers-	There are 3 types of specifiers for all attributes and methods in the class
 						Public 		- Can be accessed by every object and inherited class
 						Private		- Can be accessed on inside the class, Not by objects or inherited class. To get access to those you need to define methods in public access of that class to access them
 						Protected	- Can be accessed by inherited classes but not objects
 
 Encapsulation	-	Done to prevent losing sensitive data from the users
 					Use private classess to hide data and to access and modify data use get and set mentods in public methods

 Inheritance	- 	Why And When To Use "Inheritance"?It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
 					Two terms Base class(Parent), Derived class(child)
 					Basically the child class gets all the attributes and functions from the parent class
 					General syntax   child class name:: public parent class name{..}
 					There are generally 2 types
 						Multilevel inheritance - Grandchild getting derived from child and that child was derived from parent
 						Multiple inheritance   - Child Inherited from 2 parents
 												 General synatx
 												 child class name:: public parent class name1,public parent class name2{..}
 						
 Polymorphism	-	Having many forms
 					A function with same name as the parent can be overwritten by defining it in the childclass
*/				
