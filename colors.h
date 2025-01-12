static const char norm_fg[] = "#cac5cb";
static const char norm_bg[] = "#090b10";
static const char norm_border[] = "#8d898e";

static const char sel_fg[] = "#cac5cb";
static const char sel_bg[] = "#936D5F";
static const char sel_border[] = "#cac5cb";

static const char urg_fg[] = "#cac5cb";
static const char urg_bg[] = "#8C5B32";
static const char urg_border[] = "#8C5B32";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
