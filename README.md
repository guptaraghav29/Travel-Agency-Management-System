 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\<"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
 # Travel Agency Management System
 > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author).
 
 Authors: \<[Pranathi Darbhala](https://github.com/pdarb)\>
 \<[Raghav Gupta](https://github.com/guptaraghav29)\>  \<[Lawrence Wang](https://github.com/LawrenceGWang)\>
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.


## Project Description
* Traveling is very important and interesting to us. As we are well aware, this pandemic has affected our normal travel patterns during vacations or even-day trips to different cities, mountains, and beaches. We miss traveling and can’t wait to get back to it and so we wanted to help our fellow travel agents out by making them a system to easily make and manage their travel arrangements for their respective clientele.
* We plan to use C++ to build our travel agency management system application. If possible, we would like to have a front-end GUI that would be a way for clients to place their travel accommodations. This would be done in primarily HTML, CSS, and JavaScript but we’ll only be thinking about implementing this feature if time permits.
* Project IO:
	* Input: Customer’s and Travel Agent’s names and basic information, Vacation location, Travel Itinerary describing the places to go to and what day, as well as lodging accommodations  
 
	* Output: Creates 2 files:
		 * One containing customer's information and Travel Agent’s name and contact information.
		 * A second file with the Travel Itinerary for the customer’s use

* 3 Design Patterns We’ll Be Implementing:
	* Abstract factory 
		* Abstract factory is great as it allows us to be able to create related and dependent objects. For example, he can have objects like vehicles (cars, planes, boats, etc.) which are all related, but the children objects (type of vehicles) have a dependency on the parent vehicle class for a functionality perhaps. We could also have classes for overnight accommodations such as hotels, motels, etc.
	* Visitor
		* The visitor design pattern allows us to have greater encapsulation and define a new operation without changing the classes of the elements on which it operates. It also adds ease when wanting to define new operations throughout the lifecycle of the program. Visitor design pattern also reduces code footprint by allowing us to use it only in the classes we need to use them in.
	* Decorator
		* Allows us to add responsibilities to a specific object instead of the whole class. Also known as a wrapper, and will give us great flexibility when it comes to specific objects that just don’t need a change that’s for all of the objects. We can also nest decorators recursively, giving us options to add an unlimited amount of added responsibilities. 

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
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
