# arduinoLyrics 

repository for storing some of my favorite songs lyrics on a 16x2 LCD screen using an Arduino Uno.

<img src="assets/example.gif" width="400">

## What you need

- An Arduino Uno (or any compatible board)
- A 16x2 LCD screen (easier if you have a IC2 module soldered to it, less wires)
- A few jumper wires
- Arduino IDE 

## How to run it

1. Wire the LCD to your Arduino (check diagrams online for lcds).
2. Open the project in the Arduino IDE.
3. Pick a song from the `songs` folder, and open the .ino file.
4. Choose your board and port, then upload the sketch to your board.
5. The lyrics wil scroll after the 3 dots appear 

> [!WARNING]
> The songs don't automatically play with the lyrics and youll have to time it yourself!!
> Different songs have different timings but i try for the most part to time them on the second dot

## Adding your own song

Contributions are very welcome, if you want to add one:

1. Create a new artist folder inside `songs` if one doesnt exist already.
2. Create another folder with the song title and then the .ino file inside it (this is because the .ino file needs its own separate folder)
2. Follow the same format as the songs already there, you only need to change what comes after the last '.' and clear
> [!TIP]
> lcd.print('yourlyric'), lcd.clear, delay(miliseconds), lcd.setCursor(set location for the text)

3. Open a pull request.

## Contributing

PRs and issues are always welcome, if you want me to do a certain song open an issue, if you want to do it yourself you can always contribute, but keep in mind this is just a personal project so i might not tend to contributions immediately.