# GyroSpiro
<strong> <blue> A Digital Whirlygig written in C </blue> </strong>

## Materials 
(1) [An Arduino](www.arduino.cc)<br>
![Uno](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9d/UnoConnections.jpg/220px-UnoConnections.jpg)
<br>(2) A single LED<br>
![LED](http://www.topledlight.com/images/l/201009/12844380890.jpg)
<br>(3) The Arduino IDE<br>
<em>The Arduino Integrated Development Environment is simple and easy to use! Download it [here](https://www.arduino.cc/en/Main/OldSoftwareReleases)</em>

## Setup
* If you're an Arduino first-timer, follow the setup instructions for your partiular operating system [here](https://www.arduino.cc/en/Guide/HomePage).
* (...[HERE](https://www.arduino.cc/en/Guide/MacOSX) is a handy set of installation info for Mac OS X)
* With Arduino board in hand, push one metallic 'leg' of the LED light into DIGITAL PIN 13 and let the other 'leg' pop into the neighboring pin.
* Make sure your Arduino is tethered to your laptop via USB connector, and that the Ardunio IDE is open. Hit Cmd+N to create NEW instructions for it, and paste the Gyro code in!
* Hit UPLOAD and watch the magic!

### Details
The Arduino has input channels, output channels, and power.  The input channels, or PINs, are conductive metallic pins awaiting electronic data - in this case in binary 1111101010100101010.  We can send 0 and 1 signals using C with the commands digitalWrite LOW and digitalWrite HIGH.  The LED receives these as Off and On signals. 

When we send these Off/On signals at a certain pace, the LED gives us the illusion of spinning like a gyroscope does.

![Oh So Gyro](https://upload.wikimedia.org/wikipedia/commons/d/d5/Gyroscope_operation.gif)

<p xmlns:dct="http://purl.org/dc/terms/">
<a rel="license" href="http://creativecommons.org/publicdomain/mark/1.0/">
<img src="http://i.creativecommons.org/p/mark/1.0/88x31.png"
     style="border-style: none;" alt="Public Domain Mark" />
</a>
<br />
This work (<span property="dct:title">Gyro</span>, by <a href="https://github.com/DhiMalo/GyroSpiro" rel="dct:creator"><span property="dct:title">Aheri Stanford-Asiyo</span></a>), is free of known copyright restrictions.
</p>
