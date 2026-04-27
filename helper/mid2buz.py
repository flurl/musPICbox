# type: ignore

import pretty_midi
import sys
import argparse

notes: list[str] = ["NOTE_C1",
                    "NOTE_CS1",
                    "NOTE_D1",
                    "NOTE_DS1",
                    "NOTE_E1",
                    "NOTE_F1",
                    "NOTE_FS1",
                    "NOTE_G1",
                    "NOTE_GS1",
                    "NOTE_A1",
                    "NOTE_AS1",
                    "NOTE_B1",
                    "NOTE_C2",
                    "NOTE_CS2",
                    "NOTE_D2",
                    "NOTE_DS2",
                    "NOTE_E2",
                    "NOTE_F2",
                    "NOTE_FS2",
                    "NOTE_G2",
                    "NOTE_GS2",
                    "NOTE_A2",
                    "NOTE_AS2",
                    "NOTE_B2",
                    "NOTE_C3",
                    "NOTE_CS3",
                    "NOTE_DB3",
                    "NOTE_D3",
                    "NOTE_DS3",
                    "NOTE_EB3",
                    "NOTE_E3",
                    "NOTE_F3",
                    "NOTE_FS3",
                    "NOTE_G3",
                    "NOTE_GS3",
                    "NOTE_A3",
                    "NOTE_AS3",
                    "NOTE_B3",
                    "NOTE_C4",
                    "NOTE_CS4",
                    "NOTE_D4",
                    "NOTE_DS4",
                    "NOTE_E4",
                    "NOTE_F4",
                    "NOTE_FS4",
                    "NOTE_G4",
                    "NOTE_GS4",
                    "NOTE_A4",
                    "NOTE_AS4",
                    "NOTE_B4",
                    "NOTE_C5",
                    "NOTE_CS5",
                    "NOTE_D5",
                    "NOTE_DS5",
                    "NOTE_E5",
                    "NOTE_F5",
                    "NOTE_FS5",
                    "NOTE_G5",
                    "NOTE_GS5",
                    "NOTE_A5",
                    "NOTE_AS5",
                    "NOTE_B5",
                    "NOTE_C6",
                    "NOTE_CS6",
                    "NOTE_D6",
                    "NOTE_DS6",
                    "NOTE_E6",
                    "NOTE_F6",
                    "NOTE_FS6",
                    "NOTE_G6",
                    "NOTE_GS6",
                    "NOTE_A6",
                    "NOTE_AS6",
                    "NOTE_B6",
                    "NOTE_C7",
                    "NOTE_CS7",
                    "NOTE_D7",
                    "NOTE_DS7",
                    "NOTE_E7",
                    "NOTE_F7",
                    "NOTE_FS7",
                    "NOTE_G7",
                    "NOTE_GS7",
                    "NOTE_A7",
                    "NOTE_AS7",
                    "NOTE_B7",
                    "NOTE_C8",
                    "NOTE_CS8",
                    "NOTE_D8",
                    "NOTE_DS8"]

if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="Extract note data from a MIDI file for a PIC microcontroller buzzer."
    )
    parser.add_argument("midi_file", help="Path to the input MIDI file.")
    parser.add_argument(
        "-t", "--track", type=int, default=0, help="The track number to extract from the MIDI file (default: 0)."
    )

    args: argparse.Namespace = parser.parse_args()

    midi_file_path: str = args.midi_file
    track_number: int = args.track

    try:
        # Load the MIDI file
        pm: pretty_midi.PrettyMIDI = pretty_midi.PrettyMIDI(
            midi_file_path)
        print(f"Successfully loaded MIDI file: {midi_file_path}")
        print(f"Extracting notes from track: {track_number}")
        last_end = 0
        for note in pm.instruments[track_number].notes:
            start = pm.time_to_tick(note.start)
            end = pm.time_to_tick(note.end)
            duration = int(288*2/(end-start))
            # if the end of the last note is not the start of the
            # current note we insert a pause
            if start != last_end:
                rest_duration = int(288*2/(start-last_end))
                if rest_duration > 0:
                    print(f"{{ REST, {rest_duration} }},")
            print(f"{{{notes[note.pitch-22]}, {duration}}},")
            last_end = end

    except Exception as e:
        print(f"Error loading MIDI file: {e}")
        sys.exit(1)
