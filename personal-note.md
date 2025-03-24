Back in my first semester, I used to ride my waveboard from my hostel to college. One day, I held onto my friend’s cycle for a little boost, IT WAS FUCKING INSANE.

That’s when it hit me, what if I could make it electric?

Now you see, unlike an electric skateboard, a waveboard’s wheels aren’t fixed. Hence I couldn’t just slap on a motor like a normal electric skateboard. I needed a different approach here.

I started exploring and looking into whether someone had attempted this before and found one guy who had done something similar (shoutout to eric for real). That gave me a starting point but the real struggle began when I had to design the drivetrain and integrate the motor system. Not to mention I almost lost the motor once because a tiny metal piece got stuck but thanks to the local repair waale bhaiya who managed to save it! 🙏

Rather than buying an expensive transceiver-receiver set, I decided to build my own motor control system. Controlling a BLDC motor is surprisingly simple — it only requires PWM signals. That’s it! Now, all I had to figure out was how to deliver those signals. To achieve this, I built a react native app using Expo that connects to my onboard ESP32 using bluetooth, which then links to the ESC. To speed up data transfer, I optimized the message size to fit within a single packet. And just like that, I had my controller ready!!

This project has taught me a lot, how motors work, the different types of belts, ESCs, and much more. Honestly, this could never have been made if my brother hadn’t bought me the motor, so a huge thanks to him for always supporting me.

There are several improvements that can be made and it’s far from perfect, but we’ll get there eventually. For now, I’m just enjoying the ride.
