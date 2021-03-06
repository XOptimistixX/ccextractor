ccextractor, 0.83
-----------------
Authors: Carlos Fernández (cfsmp3), Volker Quetschke.
Maintainer: cfsmp3

Lots of credit goes to other people, though:
McPoodle (author of the original SCC_RIP), Neuron2, and others (see source
code).

Home: http://www.ccextractor.org

Google Summer of Code 2014 students
- Willem Van Iseghem
- Ruslan KuchumoV
- Anshul Maheshwari

Google Summer of Code 2015 students
- Willem Van Iseghem
- Ruslan Kuchumov
- Anshul Maheshwari
- Nurendra Choudhary
- Oleg Kiselev
- Vasanth Kalingeri

Google Summer of Code 2016 students
- Willem Van Iseghem
- Ruslan Kuchumov
- Abhishek Vinjamoori
- Abhinav Shukla
- Rishabh Garg

Google Code-in 2016 students
(to be listed)



License
-------
GPL 2.0. 

Description
-----------
ccextractor was originally a mildly optimized C port of McPoodle's excellent
but painfully slow Perl script SCC_RIP. It lets you rip the raw closed
captions (read: subtitles) data from a number of sources, such as DVD or
ATSC (digital TV) streams.

Since the original port, lots of changes have been made, such as HDTV
support, analog captures support (via bttv cards), direct .srt/.smi
generation, time adjusting, and more.

Basic Usage 
-----------
(please run ccextractor with no parameters for the complete manual -
this is for your convenience, really).

ccextractor reads a video stream looking for closed captions (subtitles).
It can do two things:

- Save the data to a "raw", unprocessed file which you can later use
  as input for other tools, such as McPoodle's excellent suite. 
- Generate a subtitles file (.srt,.smi, or .txt) which you can directly 
  use with your favourite player.

Running ccextractor without parameters shows the help screen. Usage is 
trivial - you just need to pass the input file and (optionally) some
details about the input and output files.


Languages
---------
Usually English captions are transmitted in line 21 field 1 data,
using channel 1, so the default values are correct so you don't
need to do anything and you don't need to understand what it all
means.

If you want the Spanish captions, you may need to play a bit with
the parameters. From what I've been, Spanish captions are usually
sent in field 2, and sometimes in channel 2. 

So try adding these parameter combinations to your other parameters.

-2 
-cc2
-2 -cc2

If there are Spanish subtitles, one of them should work. 

McPoodle's page
---------------
http://www.theneitherworld.com/mcpoodle/SCC_TOOLS/DOCS/SCC_TOOLS.HTML

Essential CC related information and free (with source) tools.

Encoding
--------
This version, in both its Linux and Windows builds generates by
default Unicode files. You can use -latin1 and -utf8 if you prefer 
these encodings (usually it just depends on what your specific
player likes).

Future work
-----------
- Please check www.ccextractor.org for news and future work.

