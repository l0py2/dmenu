static int topbar = 1;

static const char *fonts[] = {
	"monospace:size=12"
};

static const char *prompt      = NULL;

static const char *colors[SchemeLast][2] = {
	[SchemeNorm] = { "#cdd6f4", "#1e1e2e" },
	[SchemeSel]  = { "#1e1e2e", "#cdd6f4" },
	[SchemeOut]  = { "#000000", "#000000" },
};

static unsigned int lines      = 0;

static const char worddelimiters[] = " ";
