/* Copyright (c) 2002-2016 Dovecot authors, see the included COPYING file */

#include "imap-common.h"
#include "imap-commands.h"

bool cmd_examine(struct client_command_context *cmd)
{
	return cmd_select_full(cmd, TRUE);
}
