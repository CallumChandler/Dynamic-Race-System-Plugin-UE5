# GearShiftOverdrive

--------------==For the Test Level==--------------

[![Test Level Demo](https://img.youtube.com/vi/1WnSBZAP0M4/0.jpg)](https://www.youtube.com/watch?1WnSBZAP0M4)

--Install & Launch (Windows)--

1-Download the latest [TestLevel.zip] from Releases.

2-Unzip the file and open it.

3-Go to [DRS VX/Windows/] and run [GSO_Project.exe]

4-Now the game should be laid out before you.

5(Optional)-To try it out in LAN Multiplayer first repeat the above on a second system.

5.1-Then open the Menu with Tab on both systems. On one hit Host.

5.2-On the other system type in your IP at the input box near the bottom of the menu, then hit Connect.

5.3-Now there should be multiple cars on the same Test Level.

---Controls---

W -> Accelerate

A/D -> Turn Left/Right Respectively

S -> Reverse

Space -> Brake

Mouse -> Hold Left Key to look around

Tab -> Menu

--------------==To use the Plugin==--------------

--Installation--

1-Go to Releases and Download the latest [DynamicRaceSystem.Plugin.zip].

2-Unzip the Plugin and copy the unzipped file into a UE5 Project's [Plugins] folder (if one doesn't exist you'll need to make it).

2.5-If already open prior to installing the Plugin close your UE5 Project and reopen it anew to restart it.

3-Now you should see the Plugin's Content folder in your Content Browser.

--How to use the Plugin--

The Dynamic Race System Plugin is designed to allow you to adjust objects in the game world to reflect the speed of the player or a proxy of them. It provides three central components: the Broadcaster, Processor and Reciever. You'll need at least one of each to use the system.

The Broadcaster needs to be attached to the source, aka where you get the speed from. In it there are two nodes you can use to interact with it:

![image](https://github.com/user-attachments/assets/ff87fb80-52a2-47f6-bcd0-e4951806024a)

SetSpeed lets you update the speed value in the Component. SetSpeedAndPosition does the some but also lets you update the placement of the source relative to other sources (this is important if you are using the Formulas explained below).
By default, a Broadcaster's placement is the order it is spawned in at.

The Processor Component is what automatically registers these Broadcaster/s and collects these values. It uses them to update any connected Reciever's using the below node:

![image](https://github.com/user-attachments/assets/e1d7a87c-2d21-418f-a049-cf09f1e3193b)

UpdateAdaptiveComponents processes the collected values according to various Formulas, you can designate which ones via CalcType, and then produces a value from 1->3 referred to as the Race Level. Said Race Level is determined by the weighted average of the collected Speeds, with the weights varying by position and Formula (covered in detail in the Formula section), and the Bounds set in the Processor.

![image](https://github.com/user-attachments/assets/03d71d0f-78df-44f2-b4b7-91e9cbbcc44d)

The LowerBound determines the speed at which 1 becomes 2, and the UpperBound where 2 becomes 3. By default this is 60 and 120, but you may adjust this freely in each instance of the Processor.

Lastly there's the Reciever, which goes on the objects you wish to change according to their Connected Processor's Race Level. They have the following nodes:

![image](https://github.com/user-attachments/assets/a28739c0-ec30-4198-9f68-36adcb1f929a)

A Reciever does not automatically link to a Processor, instead it has two functions that connect the two together. The first ConnectToProcessor links it to the first one it finds, whilst the latter lets you specify which one by the Components Name.
This allows for multiple Processors, with different bounds and formula, to work simultaneously in the same level if one wishes.

The OnRaceLevelChange Event is triggered by the connected Processor whenever the RaceLevel is updated, you can then take the supplied RaceLevel and use it in various ways to adjust the attached object.
There are many examples given of this in the Plugin itself found in the Contents folder, using Switches and other means to alter these objects. OnRaceSpeedChange let's you trigger this on your own, you may use this for testing or if you wish to trigger OnRaceLevelChange prematurely.

--Formulas--

There are five Formulas given in this Plugin:

-Mean: the default, this updates the RaceLevel with the average sum of all speed values.

-Forward Weight: this updates the RaceLevel with a heavy bias to the first two positioned Broadcasters.

-Rear Weight: this updates the RaceLevel with a heavy bias to the last two positioned Broadcasters.

-Expanded Forward Weight: same as Forward Weight but for the first three positioned Broadcasters.

-Expanded Rear Weight: same as Rear Weight but for the last three positioned Broadcasters.

The Broadcaster's with priority will have the most influence over the final Race Level produced. Individually counting as if eight Broadcaster's were giving the same value. This can be used to give select advantages or disadvantages to specific players.

-----Known Issues-----

-V0.05: When joining Multiplayer you might get stuck in the floor, car in Test Level can get stuck on Elevator edge.

-V0.04: Various screens can cause Menu to be partially hidden, when joining Multiplayer rarely you will end up stuck in floor, and when racer leaves Multiplayer server the server crashes.

-V0.03: No Multiplayer, gap at leftmost wall.

