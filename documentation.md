






Bachelor Thesis

DESIGN AND IMPLEMENTATION OF CCEAP USER INTERFACE


Bachelor Thesis Submitted as Partial Fulfilment of the Requirements for the Degree of B.Sc.  in Applied computer science at the University of applied sciences (Hochschule Worms)

Feugang Kemegni Fabrice 

Submitted Summer, 2017
supervised by Prof.  Dr.  Stephen Wendzel 









									Applied Computer Science
									Software construction

Declaration of Authenticity



	I hereby declare that all material presented in this document is my own work. I fully and specifically acknowledge wherever adapted from other sources.
I understand that if at any time it is shown or proven that I have intentionally misrepresented  material present here, any decree or credits awarded to me on the basis of the material may be revoked.
I declare that all statements and information contained here is true, correct and accurate to the best of my knowledge and belief.























Ludwigshafen, Summer 2017.

………………………………..
Feugang Kemegni Fabrice


## Abstract

In general the abstract should be the last thing that you write, when you know what you have actually written. It is nevertheless a good idea to work on a draft continuously. 
Writing a good abstract is difficult, since it should only include the most important points of your work. But this is also why working on your abstract can be useful – it forces you to identify exactly what it is you are writing about. 

## Introduction

1 Problem statement: the problem/context on hand

- What is CCEAP and What is it for (The Core Idea)

		CCEAP(Covert Channel Educational Analysis Protocol) is a network protocol designed for teaching covert channels.
	It is an application layer protocol that is embedded into the TCP payload (which is explicitly vulnerable against several hiding patterns).
	The protocol helps in understanding network covert channels by eliminating the requirement (for students) to understand several network protocols in advance.
	Additionally, 
	the traditional number of hiding methods (more than a hundred of them) that students need to understand to capture the full spectrum of hiding methods is summarized(into 14 only).
	The core idea is that CCEAP allows students model the protocol structure in a way that they can represent covert channels.
	CCEAP aims to serve as both, an assistance for teaching and for learning.

- What are Hiding Patterns?

		[Hiding patterns](http://ih-patterns.blogspot.de/p/introduction.html)(also known as hiding technique) describe the core ideas of how secret data can be hidden in network transmissions. 
	While more than hundred hiding methods are known, earlier work by [Steffen Wendzel and Wojciech Mazurczyk.](http://ih-patterns.blogspot.de/p/authorscontact.html) has shown that these hiding methods can be broken down into only 11 hiding patterns. 
	By learning these 11  hiding patterns, students automatically understand the core concepts of all known hiding methods.
	Being still in an early stage, CCEAP can already be used to create most of the known hiding patterns for network covert channels

		Several papers describe data hiding methods to create network covert channels. However, no work explains the actual process of
	analyzing a network protocol for potential covert channels in the context of recently introduced hiding patterns. 
	the CCEAP paper fills this gap by providing a pattern-based method for teaching network covert channel analysis with an educational network protocol.
	[this publication] (https://www.researchgate.net/profile/Steffen_Wendzel/publication/263773592_Hidden_and_Uncontrolled_-_On_the_Emergence_of_Network_Steganographic_Threats/links/53eb38eb0cf2dc24b3cea87a.pdf).

- How does CCEAP function?

	The CCEAP is a command line tool that runs on both windows and Linux.
	[User CCEAP command Line tool](https://github.com/cdpxe/CCEAP)
		
- Limitations of the CCEAP Tool		
	- The main limitations of the CCEAP is that it is a Command Line tool:
		- most people dont know such language
		- it is difficult (event for expert) to follow the program floww and outputs on command line
		- undo and redos are 
		- the outputs of the tool are not easy to understand and interprete
		- available parameters are not easily undestandable to non experts
		-

2 What is my contribution to solve the problem

	Faced with these limitations of the tool, I will attempt to provide a durable solution which includes 
		- a graphical user interface program
		- transportable: can run on both windows and Linux
		- usable program that even the most rookie user will find easy to use
		- smart program that hels and guides learners throughout their learning of covert channels and hiding patterns 
		- users should be able to follow the outputs to their given inputs and understand them
		- provide easyily understandable and interpretable outputs of the program
		- provide customizable

## Related Work

	- Show that I have read about the topics
	- solutions that are already available
	- what is already out there
	- the goal is not to reinvent the wheel, instead 
	- show other scientific publications
	
	Cryptography- the practice and study of techniques for secure communications in the presence of adversaries (third parties) is a relatively broad topic and Covert channel
	being one of its subtopics, is still a relatively is a relative complex topic in computer science, as compared to other topics like cryptography In the demain of coevert cin genaral
	
## Design and Implementation

	- Design decisions
		- Initially, the CCEAP-UI tool was written in java programming language. Java has been choosen over the variety of other languages because 
				- it is the most portable language, the system architecture only requires a JVM (Java virtual machine) running in backgound
				- the JVM, JavaC (java compiler) are relatively easy and simple to install
				- Java code(source code) is compiled by the java compiler  independent from the system architecture to produce platform-neutral Java bytecode
				targeting the Java Virtual Machine, that will take these bytecodes(Java.class files) to produce Machine code to be ran by the architecture.
	
	- Programming Requirements
	
		- QT creator
		- Git
		- gcc, qmake, cmake,...
		- OS
			- ubuntu 
			- windows
		
		## Why Qt Creator is a cross-platform C++, JavaScript and QML integrated development environment. 
		QT creator commes with several useful programming resources including 
		- a visual debugger
		- an integrated GUI layout and forms designer. 
		- syntax highlighting and autocompletion  in editor's features. 
		- C++ compiler from the GNU Compiler Collection on Linux and FreeBSD. 
		- On Windows it can:
			- use MinGW or MSVC
			- Microsoft Console Debugger (when compiled from source code).
			- Clang.
		Due to these features, it became intuitive to choose it as the development tool.
		
		- javac JRE
		- java  JDK
		- Eclipse
		- WindowBuilder plugin for Eclipse
		- Windows System 
		- Ubuntu/any Linux distribution for testing
		- virtual bix for virtualization in case only one architecture is available
		
	- i.e. user guide
	- program documentation
	- Discussion
	
	- Problems encoutered
		- It is extremely dificult to use javas SWING and AWT classes as means of developing User Interface programs.
		This is because, althow java offers these classes, these elements are limited in the way they can be used.
		These classes are appropriate for UI such as calculator, video player, etc where a.
		
			For the CCEAP, the available containers apply useles because some items need absolute positioning on well defined coordinates,
		whereals AWT and SWING containers only offer Border layout and flow layouts.
		
		- Executing an application from QT.
		I have stayed on deathlock for more than a week trying to run the server and client program from QT using the read parameters, 
		each of the approaches that I used didnt work and each time I ran the program nothing noticeable happened, at best when i closed the program,
		a debug message said , client program started and is still running althau my gui app is closed.
		
		- Deadlock: Server freezes when waiting for data.
		When the button 'start server' is clickd, after ~ 2 seconds the server GUI freezes waiting for clients connection, 
		it only unfreezes once a client has connected and completely sent its packets.
		
		- Live communication with the CCEAP tools:
		The GUI-Tools do not communicate in duplex with the CCEAP tools, instead, the client/server gui send its message to the corresponding tool
		and waits for reply, then closes communication, so it is impossible to receive live stdio/err from the tools.
		
	- Solutions to encountered problems
		Faced with this problem, I was forced to abandon java and search an alternative solution, thus QT appeard the next best solution 
		due to its portability, as programs written on QT on either architecture, can be easily compiled in another architecture.
		
		With QT, design is relatively simple, items are placed on the container through a simple drag and drop.
		
			
	- How is the GUI implemented, descriptions
		- sketches
		- wire frames
		- mock-ups
		
		CCEAP GUI is developped with QT creator, because it appears to be the best alternative to develop such a GUI program, because
		UI Cotrols are easily placed on th window container as compared to the java alternative.
		This is because QT creator allows drag and drop of UI Controls on desired positions of the caontainer(Window), as compared to java
		where containers are constraint in Layouts, for example a Border layout only allows a ui control to be placed at the left of the previous 
		pcontrols. 
		...
		....


	- My remark about the implementation
		Despite all the planning that I went through, i have come to learn that, practice is a different topic from theory.
		
		
	- Problems encountered during the implementation
	- Good Things about the tool
	- Drawbacks/bad about the tool


	Deploying the app to windows
	[Deploy an Application on Windows](http://wiki.qt.io/Deploy_an_Application_on_Windows)
	
	requirements
	
		- The release version of your app works correctly when you build + run it from Qt Creator
		- Qt is installed in C:\Qt\5.2.1\mingw48_32\
		- This also applies to 
			- Qt 5.6 and mingw49_32
	
	Steps (Hard Code)
	
		1. Close Qt Creator.
		2. Create a folder to hold the app eg ~\MyApp\
		3. cp \QT\Projects\MýApp\MyApp.exe ~\MyApp\
		4. cp C:\Qt\5.2.1\mingw48_32\bin\*.dll ~\MyApp\
		5. cp from C:\Qt\5.2.1\mingw48_32\plugins\* ~\MyApp\
		6. cp C:\Qt\5.2.1\mingw48_32\qml\* ~\MyApp\
		7. Test if deployment worked
			1. mv (rename) C:\Qt C:\QtHidden\ (This turns your PC into a clean environment, just like one that doesn't have Qt installed).
			2. ~\MyApp\\MyApp.exe
			3. if it works then perfect
		8. Cleanup
			- start ~\MyApp\MyApp.exe 
			- while ie running, 
				-rm ~\MyApp\* and skip eroneous files.(this will delete only unnecessary dll files)
		9. restart ~\MyApp\MyApp.exe
			- it it works, then the app can be distributed.
	
	Steps (Expert)	
	
	## What else can be done
	
		- CCEAP: currently after starting the client, it doesnt provide any information about the state, it 
		does
		--CCEAP server: display server running and waiting for packets from clients
		
# Extensions

Features that could be extended to the CCEAP tool
- Export packet configuration to xml, cvs, oData, JSon etc
- Import Packet from any of the above file
- The above for both client and server
- Live communication between tool and GUI, is GUI starts the tool, reads the hello message from tool
   then sends its command with parameters, and receives any message from tool that is displayed live to gui.
- 
	
# Conclusion

- What other features can be added to the tool
- What features should not be added
- Open tasks to the GUI

# Abbreviations

- JRE
- JDK
- SDK
- Eclipse

# References
