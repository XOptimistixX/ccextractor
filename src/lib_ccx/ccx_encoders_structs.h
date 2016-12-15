#ifndef CCX_ENCODERS_STRUCTS_H
#define CCX_ENCODERS_STRUCTS_H

typedef struct ccx_encoders_transcript_format {
	// TODO: add more options, and (perhaps) reduce other ccextractor options?
	int xds; 												// Show XDS or not
	int showCC; 										// Show which CC channel has been captured.
	int isFinal; 										// Used to determine if these parameters should be changed afterwards.
	int showMode; 									// Show which mode if available (E.G.: POP, RU1, ...)
	int useColors; 									// Add colors or no colors
	int relativeTimestamp; 					// Timestamps relative to start of sample or in UTC?
	int showStartTime, showEndTime; // Show start and/or end time.

} ccx_encoders_transcript_format;

struct ccx_s_write
{
	int fh;
	int append_mode; 				/* Append the file. Prevent overwriting of files */
	int with_playlist; 			// For m3u8 /webvtt: If 1, we'll generate a playlist and segments
	int with_semaphore; 		// 1 means create a .sem file when the file is open and delete it when it's closed
	int temporarily_closed; // 1 means the file was created OK before but we released the handle
	int renaming_extension; //Used for file rotations
	char *filename;
	char *semaphore_filename;
	char *playlist_filename;
	void* spupng_data;
};

#endif
