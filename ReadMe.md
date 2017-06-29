

##Bachelor Thesis

#DESIGN AND IMPLEMENTATION OF CCEAP USER INTERFACE


Bachelor Thesis Submitted as Partial Fulfilment of the Requirements for the Degree of B.Sc.  in Applied computer science at the University of applied sciences (Hochschule Worms)

Feugang Kemegni Fabrice 

Submitted Summer, 2017
supervised by Prof.  Dr.  Stephen Wendzel 









							Applied Computer Science
							Software construction

Declaration of Authenticity




	I hereby declare that all material presented in this document is my own work. 
I fully and specifically acknowledge wherever adapted from other sources.
I understand that if at any time it is shown or proven that I have intentionally misrepresented  material present here, any decree or credits awarded to me on the basis of the material may be revoked.
I declare that all statements and information contained here is true, correct and accurate to the best of my knowledge and belief.



Ludwigshafen, Summer 2017.

………………………………..
Feugang Kemegni Fabrice

##Abstract

	This Bachelor thesis discusses the development of a graphical user interface program as an interface to a command line program CCEAP.
CCEAP (Covert Channel Educational Analysis Protocol) is a networking protocol in the form of a command line program to help learn/teach covert channels and hiding patterns.
The cceap program is currently executed from the command line, by starting a cceap-server with a given port number of a computer, then on another command line starting the cceap-client program with the IP address and port number of the computer where the server is running. The client is started with some other parameters that correspond to the cceap’s protocol settings.
	The first section of this thesis is a discussion about what cceap is and the related concepts connected to it. Additional background information required to understand the purpose of cceap are also discussed in this section. Then some limitations of the cceap that lead to the need for a complementary graphical user interface are presented.
	The second section discusses the implementation phase of the Graphical User interface tool. Then a complete discussion on the implementation of the GUI tool with some of the important portions of the code followed by a discussion of some problems/issues faced during the implementation of the program as well as the solutions to some of the problems.
	In the last section, extensions to the GUI tool i.e. are presented. This refers to the features that could be added to the program during future development potentially by other students that might be involved in the evolution of CCEAP.
