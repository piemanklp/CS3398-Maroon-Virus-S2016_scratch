/*
 * music.cpp
 *
 *  Created on: Feb 20, 2016
 *      Author: Marcel Erskine
 */
class Chords{ // Contains all major chords. Will play a certain chord upon being prompted
			 // Seperating both the chord and scale classes makes it easier to edit each
			// sections code.
  public:
  	string chord_name;      //will hold the name of the chord, beneficial to use this method in chords instead of having dozens of differnt classes for each specific chord
};

class userInput { // Contains user entered information

  public:

};

class Metronome {
    // JUSTIN COUTURE
    // Runs a metronome.
    // A metronome will function with a given time preset by the user through the gui interface
    // A tone will be generated at (---) bpm according to the value passed in at the creation of the class.
    // Metronome will run till user presses stop or navigates back to application main menu.
    /*
    Parts:
        - Timing: Accurately measure milliseconds elapsed.
                -> if time current minus time previous is equal to milliseconds between each tone generate tone.
        - Tone Generation: How to import a sound and play in in time.
                -> will there be problems with audio delay? will there be problems with calculations throwing off timing?
        - While loop waits for user input to cease metronome sound (eventually tied to gui):
                -> look up how to run code continuously until a key is pressed. a bool for true/false?
        - Gui: Show Current BPM
                -> be able to edit bpm
                -> be able to start/stop metronome
                -> running light?

    Single Responsibility Principle:
        - This needs to be a standalone class because it should be able to exist separately and at the same time as the other classes.
        - It won't have it yet but further development in another sprint will allow the metronome to function while generating chords etc.
    */
};

int main(){

	return 0;
}


