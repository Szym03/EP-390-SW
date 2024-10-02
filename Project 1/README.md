# Project 1

Nintendo Switch Controller instrument.

## Development Journal

### Session 1 

* Added a patch that plays two chords. 'A' button switches between the two chords, 'X' button triggers playback on/off, and pitch data from the gyro sensor modulates pitch bend.
* Want to add: chord inversions using joysticks, design an instrument in ableton that will work well with repeating, long chords -  ambient soundscape.

### Session 2

* Added the ableton patch with a simple pad, and a drum loop loaded up.
* Added EQ control on the X axis of the left joystick as well as reverb mix on the Y axis.
* Added triggering the drum loop on and off with up and down buttons. Sometimes you have to press them down twice due to the way they trigger, not sure how to fix that for now.
* Want to add controlable drum effects.

### Session 3
* Switched to toggling drums with just d pad up.
* Added a drum effect while pressing right D pad down.

### Session 4
* Added a random melody generator using random and coll objects.
* Changed the general metronome system from being millisecond based to transport based so everything is in sync when using the instrument.
* Added user manual (below).

## User Manual

### Initialization
1. Connect joycon controllers to computer via bluetooth.
2. Open Max Patch and Ableton Session

### Using the instrument
* Start by pressing `X` - this will run transport in ableton and activate the pad. Use the `A` button to toggle between two chords.
* Use the `left joystick` to control reverb mix (X-axis) and Filter Cutoff (Y-axis). Move the joystick around to hear pitch bend.
* Toggle drum break using the `UP` button. Holding down the `RIGHT` button will produce various effects affecting the drums.
* Activate the melody using the `DOWN` button. Switch between half, quarter, and eighth notes using the `LEFT` button.
* Finish your session by pressing `X` button.