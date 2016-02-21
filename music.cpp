/*
 * music.cpp
 *
 *  Created on: Feb 20, 2016
 *      Author: Marcel Erskine
 */
class Scales{
    //Thomas Jordan
    //This class will data that a user will call upon to access certain musical scales.
    //A scale is any set of musical notes ordered by fundamental frequency or pitch.
    //A user will be able to access a limited number of the most basic scales to see such things as what notes they are comprised of,
    //what they sound like, and the type of scale.

    //Members of this class will be functions that:
    //-output sound
    //-provide a list of available scales (dropdown menu or user input referencing a static menu in the window)
    //-output the notes comprising the scale in character format, in order, for the user to view.
    //-provide a sort of "biography" for each scale to be output when a certain one is selected.
};
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


