/*
 * Copyright (C) 2015 - 2016 David Bigagli
 * Copyright (C) 2007 Platform Computing Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301, USA
 *
 */


#include <stdio.h>
#include <rpc/types.h>
#include <rpc/xdr.h>
#include "../../lsf/lib/lproto.h"

extern bool_t xdr_submitReq(XDR *,
			    struct submitReq *,
			    struct LSFHeader *);

extern bool_t xdr_submitMbdReply(XDR *,
				 struct submitMbdReply *,
				 struct LSFHeader *);

extern bool_t xdr_signalReq(XDR *,
			    struct signalReq *,
			    struct LSFHeader *);

extern bool_t xdr_lsbMsg(XDR *,
			 struct lsbMsg *,
			 struct LSFHeader *);

extern bool_t xdr_controlReq(XDR *,
			     struct controlReq *,
			     struct LSFHeader *);

extern bool_t xdr_debugReq (XDR *,
			    struct debugReq *,
			    struct LSFHeader *);

extern bool_t xdr_infoReq(XDR *,
			  struct infoReq *,
			  struct LSFHeader *);

extern bool_t xdr_parameterInfo(XDR *,
				struct parameterInfo *,
				struct LSFHeader *);

extern bool_t xdr_userInfoEnt(XDR *,
			       struct userInfoEnt *,
			       struct LSFHeader *);

extern bool_t xdr_userInfoReply(XDR *,
				struct userInfoReply *,
				struct LSFHeader *);

extern bool_t xdr_hostInfoEnt(XDR *,
			      struct hostInfoEnt *,
			      struct LSFHeader *,
			      int *);

extern bool_t xdr_hostDataReply(XDR *,
				struct hostDataReply *,
				struct LSFHeader *);

extern bool_t xdr_queueInfoEnt(XDR *,
			       struct queueInfoEnt *,
			       struct LSFHeader *,
			       int *);

extern bool_t xdr_queueInfoReply(XDR *,
				 struct queueInfoReply *,
				 struct LSFHeader *);

extern bool_t xdr_jobInfoHead(XDR *,
			      struct jobInfoHead *,
			      struct LSFHeader *);

extern bool_t xdr_jobInfoReply(XDR *,
			       struct jobInfoReply *,
			       struct LSFHeader *);

extern bool_t xdr_jobInfoEnt(XDR *,
			     struct jobInfoEnt *,
			     struct LSFHeader *);

extern bool_t xdr_jobInfoReq(XDR *,
			     struct jobInfoReq *,
			     struct LSFHeader *);

extern bool_t xdr_jobPeekReq(XDR *,
			     struct jobPeekReq *,
			     struct LSFHeader *);

extern bool_t xdr_jobPeekReply(XDR *,
			       struct jobPeekReply *,
			       struct LSFHeader *);

extern bool_t xdr_jobMoveReq(XDR *,
			     struct jobMoveReq *,
			     struct LSFHeader *);

extern bool_t xdr_jobSwitchReq(XDR *,
			       struct jobSwitchReq *,
			       struct LSFHeader *);

extern bool_t xdr_groupInfoReply(XDR *,
				 struct groupInfoReply *,
				 struct LSFHeader *);
extern bool_t xdr_groupInfoEnt(XDR *,
			       struct groupInfoEnt *,
			       struct LSFHeader *);
extern bool_t xdr_migReq(XDR *,
			 struct migReq *,
			 struct LSFHeader *);

extern bool_t xdr_time_t(XDR *,
			 time_t *);

extern bool_t xdr_xFile(XDR *,
			struct xFile *,
			struct LSFHeader *);

bool_t xdr_modifyReq(XDR *,
		     struct  modifyReq *,
		     struct LSFHeader *);

extern bool_t xdr_var_string(XDR *,
			     char **);

extern bool_t xdr_lsbShareResourceInfoReply(XDR *,
					    struct  lsbShareResourceInfoReply *,
					    struct LSFHeader *);

extern bool_t xdr_runJobReq(XDR *,
			    struct runJobRequest *,
			    struct LSFHeader *);

extern bool_t xdr_jobAttrReq(XDR *,
			    struct jobAttrInfoEnt *,
			    struct LSFHeader *);
extern bool_t xdr_numShareAccts(XDR *,
                                int *,
                                struct share_acct ***,
                                struct LSFHeader *);
extern bool_t xdr_shareAcct(XDR *,
                            struct share_acct *,
                            struct LSFHeader *);
extern bool_t xdr_jobID(XDR *,
                        LS_LONG_INT *,
                        struct LSFHeader *);
extern bool_t xdr_jobdep(XDR *, struct job_dep *, struct LSFHeader *);
extern bool_t xdr_jobgroup(XDR *, struct job_group *, struct LSFHeader *);
