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

#ifndef __GIGGLE_GIT_REFS_H__
#define __GIGGLE_GIT_REFS_H__

#include <libgiggle/giggle-job.h>

G_BEGIN_DECLS

#define GIGGLE_TYPE_GIT_REFS            (giggle_git_refs_get_type ())
#define GIGGLE_GIT_REFS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIGGLE_TYPE_GIT_REFS, GiggleGitRefs))
#define GIGGLE_GIT_REFS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GIGGLE_TYPE_GIT_REFS, GiggleGitRefsClass))
#define GIGGLE_IS_GIT_REFS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIGGLE_TYPE_GIT_REFS))
#define GIGGLE_IS_GIT_REFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GIGGLE_TYPE_GIT_REFS))
#define GIGGLE_GIT_REFS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GIGGLE_TYPE_GIT_REFS, GiggleGitRefsClass))

typedef struct GiggleGitRefs      GiggleGitRefs;
typedef struct GiggleGitRefsClass GiggleGitRefsClass;

struct GiggleGitRefs {
	GiggleJob parent;
};

struct GiggleGitRefsClass {
	GiggleJobClass parent_class;
};

GType	     giggle_git_refs_get_type      (void);
GiggleJob *  giggle_git_refs_new           (void);
GList *      giggle_git_refs_get_branches  (GiggleGitRefs     *refs);
GList *      giggle_git_refs_get_tags      (GiggleGitRefs     *refs);
GList *      giggle_git_refs_get_remotes   (GiggleGitRefs     *refs);

G_END_DECLS

#endif /* __GIGGLE_GIT_REFS_H__ */
