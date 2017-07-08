 Bachelor Thesis
 DESIGN AND IMPLEMENTATION OF CCEAP USER INTERFACE


 Bachelor Thesis Submitted as Partial Fulfillment of the Requirements for the 
 Degree of B.Sc.  in Applied computer science at the University of applied sciences 
 (Hochschule Worms)
 by
 Feugang Kemegni Fabrice

 Submitted Summer, 2017
 supervised by Prof.  Dr.  Steffen Wendzel 








									Applied Computer Science
									Software construction.


Declaration of Authenticity




	I hereby declare that all material presented in this document is my own work. I fully and specifically acknowledge wherever adapted from other sources.
I understand that if at any time it is shown or proven that I have intentionally misrepresented material present here, any decree or credits awarded to me on the basis of the material may be revoked.
I declare that all statements and information contained here is true, correct and accurate to the best of my knowledge and belief.















Ludwigshafen, Summer 2017.

………………………………..
Feugang Kemegni Fabrice

Abstract



	This Bachelor thesis discusses the development of a graphical user interface to complement  a command line program CCEAP.
CCEAP (Covert Channel Educational Analysis Protocol) is a networking protocol tool in the form of a command line program to help learn/teach covert channels and hiding patterns.
The CCEAP program is currently executed from the command line, by starting a cceap-server with a given port number of a computer, then on another command line starting the cceap-client program with the IP address and port number of the computer where the server is running. The client is started with some other parameters that correspond to the cceap’s protocol settings. After client and server are started, the client sends a number of TCP/IP packets with configurations corresponding to the CCEAP protocol. These packets are received by the server and are ready for analysis, which is the purpose of CCEAP.
	The first Chapter of this thesis is a more detailed discussion about CCEAP, what it is, the related concepts connected to it and how it functions. Some limitations of the cceap are then discussed, the limitations lead to the need for a complementary graphical user interface (GUI). As mentioned earlier, the design of this GUI is the theme of this thesis.
	The second chapter discusses the implementation phase of the Graphical User interface tool, including design decisions as well as some of the important portions of the code. This section is followed by a chapter that discusses some of the problems and issues faced during the implementation of the program as well as the solutions to some of the problems.
	In the last section, extensions to the GUI tool are presented. These refer to the features that could be added to the program during future development potentially by other students that might be involved in the evolution of CCEAP. This is then followed by my conclusion, a bibliography and a list of figures.


Contents


Declaration of Authenticity	2
Abstract	3
1	Introduction	5
1.1	What is CCEAP	5
1.1.1	Steganography/Covert Channels and Hiding patterns	5
1.1.2	CCEAP	5
1.2	How does CCEAP function	6
1.2.1	Running CCEAP on windows	6
1.2.2	Running CCEAP on Unix	7
1.3	Limitations of the CCEAP Tool	10
1.4	My contribution to solve the problem	12
2	Design and Implementation	13
2.1	Program requirements	13
2.2	Screenshots of the GUI	13
2.3	Programming Requirements	17
2.4	Design decisions	19
2.5	Qt Creator	20
3	Deploying the app to windows	22
3.1.1	Requirements	22
3.1.2	Steps (Hard Code)	22
4	Problems encountered and Solutions	23
4.1	Layout	23
4.2	Deadlock	23
4.3	Live communication between cceap GUI	26
4.4	My remark	27
5	Extensions to the application	28
5.1	Export session	28
5.2	Import session	28
5.3	Live communication	28
5.4	Load Test	29
6	Conclusion	30
7	Abbreviations	31
8	Bibliography	32
9	List of figures	33

