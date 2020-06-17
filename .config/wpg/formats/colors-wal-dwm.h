static const char norm_fg[] = "#ffdffc";
static const char norm_bg[] = "#1a1019";
static const char norm_border[] = "#392237";

static const char sel_fg[] = "#ffdffc";
static const char sel_bg[] = "#6B658D";
static const char sel_border[] = "#ffdffc";

static const char urg_fg[] = "#ffdffc";
static const char urg_bg[] = "#953360";
static const char urg_border[] = "#953360";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
