<!-- > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\<"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). -->
 # Travel Agency Management System
 <!-- > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author). -->
 
 Authors: \<[Pranathi Darbhala](https://github.com/pdarb)\>
 \<[Raghav Gupta](https://github.com/guptaraghav29)\>  \<[Lawrence Wang](https://github.com/LawrenceGWang)\>
 
<!-- 
> You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project. 
 -->


## Project Description
* Traveling is very important and interesting to us. As we are well aware, the COVID-19 pandemic has affected our normal travel patterns during vacations or even-day trips to different cities, mountains, and beaches. We miss traveling and can’t wait to get back to it and so we wanted to help our fellow travel agents out by making them a system to easily make and manage their travel arrangements for their respective clientele. In these unprecedented times, it is important for the entire travel industry to be flexible with consumer demand. By providing a system that can aid the quick planning and creation of new trips, we hope we can make it easier to travel for everyone.
* We plan to use C++ to build our travel agency management system application. This system would allow travel agents to create, edit, and remove custom travel itineraries. If possible, we would like to have a front-end GUI that would be a way for clients to place their travel accommodations. This would be done in primarily HTML, CSS, and JavaScript but we’ll only be thinking about implementing this feature if time permits.
* Project IO:
	* Input: Customer’s and Travel Agent’s names and basic information, Vacation location, Travel Itinerary describing the places to go to and what day, as well as lodging accommodations  
 
	* Output: Creates 2 files:
		 * One containing customer's information and Travel Agent’s name and contact information.
		 * A second file with the Travel Itinerary for the customer’s use

* 3 Design Patterns We’ll Be Implementing:
	* Abstract factory 
		* Abstract factory is great as it allows us to be able to create related and dependent objects. This design pattern makes it easy for us to create groups of objects such as different combinations of transportation type and ticket class.
	* Visitor
		* The visitor design pattern allows us to have greater encapsulation and define a new operation without changing the classes of the elements on which it operates. We will use this pattern to make it easy to calculate service fees for our company. For example, the fees during a special deal sale will be lower than normal which will end up lowering the overall price of the travel package. The visitor pattern makes it easy for us to create different ways to calculate commission.
	* Decorator
		* Allows us to add responsibilities to a specific object instead of the whole class. Also known as a wrapper, and will give us great flexibility when it comes to specific objects that just don’t need a change that’s for all of the objects. The decorator is used to add additional information to points of interest that need it. Since points of interest have large amounts of variation, the decorator makes it possible to add information to points when it is needed.
<!--
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 -->
## Class Diagram
 ![OMT class diagram](/images/Diagram.png)
 * The abstract factory design pattern is used to create groups of transportation and ticket classes
 * The decorator design pattern is used to add additional information to points of interest should they need it
 * The visitor design pattern is used to caluclate commission differently based on the package without needing to add extra methods to the existing classes for each new commission calculation
 <!--
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 -->
 
 ## Screenshots
 Screenshots of the input/output after running the application:
![Screenshot 1](/images/Screenshot1.png)
![Screenshot 2](/images/Screenshot2.png)
![Screenshot 3](/images/Screenshot3.png)

 ## Installation/Usage
 * Instructions on installing and running the application:
	 1. git clone https://github.com/cs100/final-project-rgupt047-pdarb001-lwang283.git
	 2. git submodule update --init --recursive
	 3. cmake .
	 4. make
	 5. ./TAMS

 * This application is for travel agents to create travel plans for their clients. 
	1. The travel agent selects an option from the main menu to either add a trip, list trips, delete trips, and etc. and enters the corresponding number to the option
	2. Then depending on the option selected fill out the corresponding information
	3. If adding a trip(1): enter trip name, select a price type (based on client’s budget)
		- a. Then the travel agent (user) can customize the trip using the 3 options from the menu: Add New Transportation, Add New Point Of Interest, Add New Lodging
		- b. Enter the number corresponding to the option selected
		- c. Then the user enters all the corresponding information prompted by the program
		- d. Once complete, select done option to go back to the main menu
	4. If list trips (4) selected, the console outputs all the information collected for each of the trips added
	5. If delete trip (2) is selected, asks user which trip to be deleted
	6. To quit program enter 7
 * Options 3, 5-6 in the main menu were not able to be implemented by the deadline


 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
