/*
 * Copyright (C) 2004, 2005  Internet Systems Consortium, Inc. ("ISC")
 * Copyright (C) 1999-2002  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/* $Id: events.h,v 1.42.18.3 2005/04/29 00:16:13 marka Exp $ */

#ifndef DNS_EVENTS_H
#define DNS_EVENTS_H 1

#include <isc/eventclass.h>

/*! \file 
 * \brief
 * Registry of DNS event numbers.
 */

#define DNS_EVENT_FETCHCONTROL			(ISC_EVENTCLASS_DNS + 0)
#define DNS_EVENT_FETCHDONE			(ISC_EVENTCLASS_DNS + 1)
#define DNS_EVENT_VIEWRESSHUTDOWN		(ISC_EVENTCLASS_DNS + 2)
#define DNS_EVENT_VIEWADBSHUTDOWN		(ISC_EVENTCLASS_DNS + 3)
#define DNS_EVENT_UPDATE			(ISC_EVENTCLASS_DNS + 4)
#define DNS_EVENT_UPDATEDONE			(ISC_EVENTCLASS_DNS + 5)
#define DNS_EVENT_DISPATCH			(ISC_EVENTCLASS_DNS + 6)
#define DNS_EVENT_TCPMSG			(ISC_EVENTCLASS_DNS + 7)
#define DNS_EVENT_ADBMOREADDRESSES		(ISC_EVENTCLASS_DNS + 8)
#define DNS_EVENT_ADBNOMOREADDRESSES		(ISC_EVENTCLASS_DNS + 9)
#define DNS_EVENT_ADBCANCELED			(ISC_EVENTCLASS_DNS + 10)
#define DNS_EVENT_ADBNAMEDELETED		(ISC_EVENTCLASS_DNS + 11)
#define DNS_EVENT_ADBSHUTDOWN			(ISC_EVENTCLASS_DNS + 12)
#define DNS_EVENT_ADBEXPIRED			(ISC_EVENTCLASS_DNS + 13)
#define DNS_EVENT_ADBCONTROL			(ISC_EVENTCLASS_DNS + 14)
#define DNS_EVENT_CACHECLEAN			(ISC_EVENTCLASS_DNS + 15)
#define DNS_EVENT_BYADDRDONE			(ISC_EVENTCLASS_DNS + 16)
#define DNS_EVENT_ZONECONTROL			(ISC_EVENTCLASS_DNS + 17)
#define DNS_EVENT_DBDESTROYED			(ISC_EVENTCLASS_DNS + 18)
#define DNS_EVENT_VALIDATORDONE			(ISC_EVENTCLASS_DNS + 19)
#define DNS_EVENT_REQUESTDONE			(ISC_EVENTCLASS_DNS + 20)
#define DNS_EVENT_VALIDATORSTART		(ISC_EVENTCLASS_DNS + 21)
#define DNS_EVENT_VIEWREQSHUTDOWN		(ISC_EVENTCLASS_DNS + 22)
#define DNS_EVENT_NOTIFYSENDTOADDR		(ISC_EVENTCLASS_DNS + 23)
#define DNS_EVENT_ZONE				(ISC_EVENTCLASS_DNS + 24)
#define DNS_EVENT_ZONESTARTXFRIN		(ISC_EVENTCLASS_DNS + 25)
#define DNS_EVENT_MASTERQUANTUM			(ISC_EVENTCLASS_DNS + 26)
#define DNS_EVENT_CACHEOVERMEM			(ISC_EVENTCLASS_DNS + 27)
#define DNS_EVENT_MASTERNEXTZONE		(ISC_EVENTCLASS_DNS + 28)
#define DNS_EVENT_IOREADY			(ISC_EVENTCLASS_DNS + 29)
#define DNS_EVENT_LOOKUPDONE			(ISC_EVENTCLASS_DNS + 30)
/* #define DNS_EVENT_unused			(ISC_EVENTCLASS_DNS + 31) */
#define DNS_EVENT_DISPATCHCONTROL		(ISC_EVENTCLASS_DNS + 32)
#define DNS_EVENT_REQUESTCONTROL		(ISC_EVENTCLASS_DNS + 33)
#define DNS_EVENT_DUMPQUANTUM			(ISC_EVENTCLASS_DNS + 34)
#define DNS_EVENT_IMPORTRECVDONE		(ISC_EVENTCLASS_DNS + 35)
#define DNS_EVENT_FREESTORAGE			(ISC_EVENTCLASS_DNS + 36)
#define DNS_EVENT_VIEWACACHESHUTDOWN		(ISC_EVENTCLASS_DNS + 37)
#define DNS_EVENT_ACACHECONTROL			(ISC_EVENTCLASS_DNS + 38)
#define DNS_EVENT_ACACHECLEAN			(ISC_EVENTCLASS_DNS + 39)
#define DNS_EVENT_ACACHEOVERMEM			(ISC_EVENTCLASS_DNS + 40)

#define DNS_EVENT_FIRSTEVENT			(ISC_EVENTCLASS_DNS + 0)
#define DNS_EVENT_LASTEVENT			(ISC_EVENTCLASS_DNS + 65535)

#endif /* DNS_EVENTS_H */
