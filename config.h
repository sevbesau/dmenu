/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=14",
	"JoyPixels:pixelsize=18:antialias:true:autohint=true"
};
static const char green[] = "#a6e22e";
static const char white[] = "#f8f8f2";
static const char black[] = "#272822";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
/*												    fg     bg       */
	[SchemeNorm] =					 { white, black }, // the unselected parts
	[SchemeSel]  =					 { black, white }, // the selected parts
	[SchemeOut]  =					 { green, black }, // the selected items
	[SchemeSelOut]  =				 { green, white }, // the selected selected items
	[SchemeSelHighlight] =	 { green, white }, // the selected fuzzy highlight
	[SchemeNormHighlight] =  { green, black }, // the normal fuzzy highligt

};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
static unsigned int lineheight = 0.8;
static unsigned int maxhist		 = 100;
static int histnodup           = 0;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
