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

#ifndef __GIGGLE_SHORT_LIST_H__
#define __GIGGLE_SHORT_LIST_H__

#include <gtk/gtk.h>

G_BEGIN_DECLS

enum {
	GIGGLE_SHORT_LIST_COL_OBJECT,
	GIGGLE_SHORT_LIST_N_COLUMNS
};

#define GIGGLE_TYPE_SHORT_LIST            (giggle_short_list_get_type ())
#define GIGGLE_SHORT_LIST(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIGGLE_TYPE_SHORT_LIST, GiggleShortList))
#define GIGGLE_SHORT_LIST_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GIGGLE_TYPE_SHORT_LIST, GiggleShortListClass))
#define GIGGLE_IS_SHORT_LIST(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIGGLE_TYPE_SHORT_LIST))
#define GIGGLE_IS_SHORT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GIGGLE_TYPE_SHORT_LIST))
#define GIGGLE_SHORT_LIST_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GIGGLE_TYPE_SHORT_LIST, GiggleShortListClass))

typedef struct _GiggleShortList             GiggleShortList;
typedef struct _GiggleShortListClass        GiggleShortListClass;

struct _GiggleShortList {
	GtkBox parent_instance;
};

struct _GiggleShortListClass {
	GtkBoxClass parent_class;

	/* signals */
	gchar* (*display_object) (GiggleShortList* self,
	                          GObject        * object);
};


GType		      giggle_short_list_get_type (void);

GtkTreeModel         *giggle_short_list_get_model (GiggleShortList *short_list);
void                  giggle_short_list_set_model (GiggleShortList *short_list,
						   GtkTreeModel    *model);


G_END_DECLS

#endif /* __GIGGLE_SHORT_LIST_H__ */
