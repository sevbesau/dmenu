/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=14",
	"JoyPixels:pixelsize=18:antialias:true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
/*														   fg         bg       */
	[SchemeNorm] =					 { "#f8f8f2", "#272822" }, // the unselected parts
	[SchemeSel]  =					 { "#f8f8f2", "#272822" }, // the selected parts
	[SchemeOut]  =					 { "#000000", "#00ffff" }, // 
	[SchemeSelHighlight] =	 { "#a6e22e", "#272822" },
	[SchemeNormHighlight] =  { "#a6e22e", "#272822" },

};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int maxhist		 = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */
static unsigned int lineheight = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
