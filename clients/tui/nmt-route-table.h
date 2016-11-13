/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2013 Red Hat, Inc.
 */

#ifndef NMT_ROUTE_TABLE_H
#define NMT_ROUTE_TABLE_H

#include "nmt-newt.h"

#define NMT_TYPE_ROUTE_TABLE            (nmt_route_table_get_type ())
#define NMT_ROUTE_TABLE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), NMT_TYPE_ROUTE_TABLE, NmtRouteTable))
#define NMT_ROUTE_TABLE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), NMT_TYPE_ROUTE_TABLE, NmtRouteTableClass))
#define NMT_IS_ROUTE_TABLE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NMT_TYPE_ROUTE_TABLE))
#define NMT_IS_ROUTE_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), NMT_TYPE_ROUTE_TABLE))
#define NMT_ROUTE_TABLE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), NMT_TYPE_ROUTE_TABLE, NmtRouteTableClass))

typedef struct {
	NmtNewtGrid parent;

} NmtRouteTable;

typedef struct {
	NmtNewtGridClass parent;

} NmtRouteTableClass;

GType nmt_route_table_get_type (void);

NmtNewtWidget *nmt_route_table_new (int family);

#endif /* NMT_ROUTE_TABLE_H */
