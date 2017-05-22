






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

In general the abstract should be the last thing that you write, when you know what you have actually written. It is nevertheless a good idea to work on a draft continuously. Writing a good abstract is difficult, since it should only include the most important points of your work. But this is also why working on your abstract can be useful – it forces you to identify exactly what it is you are writing about. 

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

2 What is my contribution to solve the problem

	Faced with these limitations of the tool, I will attempt to provide a durable solution which includes 
		- a graphical user interface program
		- transportable: can run on both windows and Linux
		- usable program that even the most rookie user will find it easy to use
		- smart program that hels and guides learners throughout their learning of covert channels and hiding patterns 
		- users should be able to follow the outputs to their given inputs and understand them

## Related Work

	- Show that I have read about the topics
	- solutions that are already available
	- what is already out there
	- the goal is not to reinvent the wheel, instead 
	- show other scientific publications

## Design and Implementation

- Design decisions
	- The CCEAP-UI tool is written in java programming language
		Java has been choosen over the variety of other languages because 
			- it is the most portable language, the system architecture only requires a JVM (Java virzual machine) running in backgound
			- the JVM, JavaC (java compiler) are relatively easy and simple to install
	
	- Programming Requirements
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
		It is extremely dificult to use javas SWING and AWT classes as means of developing User Interface programs.
		This is because, althow java offers these classes, these elements are limited in the way they can be used.
		These classes are appropriate for UI such as calculator, video player, etc where a.
		
			For the CCEAP, the available containers apply useles because some items need absolute positioning on well defined coordinates,
		whereals AWT and SWING containers only offer Border layout and flow layouts.
		
	- Solutions to encountered problems
		Faced with this problem, I was forced to abandon java and search an alternative solution, thus QT appeard the next best solution 
		due to its portability, as programs written on QT on either architecture, can be easily compiled in another architecture.
		
		With QT, design is relatively simple, items are placed on the container through a simple drag and drop.
		
			
- How is the GUI implemented, descriptions
	- sketches
	- wire frames
	- mock-ups


	- My remark about the implementation
	- Problems encountered during the implementation
	- Good Things about the tool
	- Drawbacks/bad about the tool

# Conclusion

- What other features can be added to the tool
- What features should not be added
- Open tasks to the GUI

# Abbreviations

- JRE
- JDK
- SDK
- Eclipse
