/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2007 Imendio AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIGGLE_REMOTE_EDITOR_H__
#define __GIGGLE_REMOTE_EDITOR_H__

#include <gtk/gtk.h>
#include "libgiggle/giggle-remote.h"

G_BEGIN_DECLS

#define GIGGLE_TYPE_REMOTE_EDITOR            (giggle_remote_editor_get_type ())
#define GIGGLE_REMOTE_EDITOR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIGGLE_TYPE_REMOTE_EDITOR, GiggleRemoteEditor))
#define GIGGLE_REMOTE_EDITOR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GIGGLE_TYPE_REMOTE_EDITOR, GiggleRemoteEditorClass))
#define GIGGLE_IS_REMOTE_EDITOR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIGGLE_TYPE_REMOTE_EDITOR))
#define GIGGLE_IS_REMOTE_EDITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GIGGLE_TYPE_REMOTE_EDITOR))
#define GIGGLE_REMOTE_EDITOR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GIGGLE_TYPE_REMOTE_EDITOR, GiggleRemoteEditorClass))

typedef struct GiggleRemoteEditor      GiggleRemoteEditor;
typedef struct GiggleRemoteEditorClass GiggleRemoteEditorClass;

struct GiggleRemoteEditor {
	GtkDialog parent;
};

struct GiggleRemoteEditorClass {
	GtkDialogClass parent_class;
};

GType		      giggle_remote_editor_get_type (void);
GtkWidget *           giggle_remote_editor_new      (GiggleRemote *remote);

G_END_DECLS

#endif /* __GIGGLE_REMOTE_EDITOR_H__ */
