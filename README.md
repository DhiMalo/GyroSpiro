# GyroSpiro
A digital Whirlygig 

## Materials 
###(1) [An Arduino](www.arduino.cc)
![Uno](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9d/UnoConnections.jpg/220px-UnoConnections.jpg)
###(2) A single LED
![LED](http://www.topledlight.com/images/l/201009/12844380890.jpg)
###(3) The Arduino IDE
The Arduino Integrated Development Environment is simple and easy to use! Download it [here](https://www.arduino.cc/en/Main/OldSoftwareReleases) 

## Setup
* If you're an Arduino first-timer, follow the setup instructions for your partiular operating system [here](https://www.arduino.cc/en/Guide/HomePage).
* With Arduino board in hand, push one metallic 'leg' of the LED light into DIGITAL PIN 13 and let the other 'leg' pop into the neighboring pin.
* Make sure your Arduino is tethered to your laptop via USB connector, and that the Ardunio IDE is open. Hit Cmd+N to create NEW instructions for it, and paste the Gyro code in!
* Hit UPLOAD and watch the magic!

###Details
The Arduino has input channels, output channels, and power.  The input channels, or PINs, are conductive metallic pins awaiting electronic data - in this case in binary 1111101010100101010.  We can send 0 and 1 signals with the command digitalWrite LOW and digitalWrite HIGH.  The LED receives these as Off and On signals. 

When we send these Off/On signals at a certain pace using, the LED gives us the illusion of spinning like a gyroscope does.

![Oh So Gyro](https://upload.wikimedia.org/wikipedia/commons/d/d5/Gyroscope_operation.gif)

[HERE](https://www.arduino.cc/en/Guide/MacOSX) is a handy set of installation info for Mac OS X