# ArduinoEsploraSerialCommunication
Arduino Esplora board writes its values to serial port

This repo contains the solution for Arduino Esplora serial communication with Unity. 
There is no Unity part here, you can find it by folowing the [link](https://github.com/georgevasilchenko/ArduinoEsploraSerialCommunicationUnity).

A few years ago I have made a simple school project where I set a communication between Arduino Esplora and Unity3D (version 3.x back then).
After posting the showreel to youtube I got a couple questions about the source code. So I decided to create recreate the solution.
The only difference though is that it worked out of the box on iMac but requires an extra configuration step on Windows.

Old youtube video:

<a href="http://www.youtube.com/watch?feature=player_embedded&v=Lx3sc2GQ-fc" target="_blank">
  <img src="http://img.youtube.com/vi/Lx3sc2GQ-fc/0.jpg" 
      alt="Arduino Esplora + Unity3D" 
      width="240" height="180" border="10" />
</a>


This Arduino sketch reads Esplora inputs and writes them to the serial port. 
Additionally here are a few header files that contain inline helper methods.



