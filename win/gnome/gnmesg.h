/*
 * Gnome Interface for NetHack
 *
 * Copyright (C) 1998 by Erik Andersen <andersee@debian.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
*/

#ifndef GnomeHackMessageWindow_h
#define GnomeHackMessageWindow_h

#include <gnome.h>
#include "config.h"

GtkWidget* ghack_init_message_window ( /* GnomeHackKeyBuffer g_keybuffer,
					  GnomeHackClickBuffer g_clickbuffer */ );
void ghack_message_window_clear(GtkWidget *widget, gpointer data);
void ghack_message_window_destroy();
void ghack_message_window_display(GtkWidget *widget, boolean block,
                                  gpointer data);
void ghack_message_window_put_string(GtkWidget *widget, int attr,
                                     const char* text, gpointer data);
void ghack_message_window_use_RIP(int how);
void ghack_message_window_scroll(int dx, int dy);


#endif /* GnomeHackMessageWindow_h */