/*
 * Copyright (C) 2013 Martin Willi
 * Copyright (C) 2013 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <library.h>

const GUID FWPM_CONDITION_IP_REMOTE_ADDRESS = {
	0xb235ae9a, 0x1d64, 0x49b8, { 0xa4,0x4c,0x5f,0xf3,0xd9,0x09,0x50,0x45 }
};
const GUID FWPM_CONDITION_IP_LOCAL_ADDRESS = {
	0xd9ee00de, 0xc1ef, 0x4617, { 0xbf,0xe3,0xff,0xd8,0xf5,0xa0,0x89,0x57 }
};
const GUID FWPM_CONDITION_IP_SOURCE_ADDRESS = {
	0xae96897e, 0x2e94, 0x4bc9, { 0xb3,0x13,0xb2,0x7e,0xe8,0x0e,0x57,0x4d }
};
const GUID FWPM_CONDITION_IP_DESTINATION_ADDRESS = {
	0x2d79133b, 0xb390, 0x45c6, { 0x86,0x99,0xac,0xac,0xea,0xaf,0xed,0x33 }
};
const GUID FWPM_CONDITION_IP_LOCAL_PORT = {
	0x0c1ba1af, 0x5765, 0x453f, { 0xaf,0x22,0xa8,0xf7,0x91,0xac,0x77,0x5b }
};
const GUID FWPM_CONDITION_IP_REMOTE_PORT = {
	0xc35a604d, 0xd22b, 0x4e1a, { 0x91,0xb4,0x68,0xf6,0x74,0xee,0x67,0x4b }
};
const GUID FWPM_CONDITION_IP_PROTOCOL = {
	0x3971ef2b, 0x623e, 0x4f9a, { 0x8c,0xb1,0x6e,0x79,0xb8,0x06,0xb9,0xa7 }
};
const GUID FWPM_LAYER_INBOUND_TRANSPORT_V4 = {
	0x5926dfc8, 0xe3cf, 0x4426, { 0xa2,0x83,0xdc,0x39,0x3f,0x5d,0x0f,0x9d }
};
const GUID FWPM_LAYER_INBOUND_TRANSPORT_V6 = {
	0x634a869f, 0xfc23, 0x4b90, { 0xb0,0xc1,0xbf,0x62,0x0a,0x36,0xae,0x6f }
};
const GUID FWPM_LAYER_OUTBOUND_TRANSPORT_V4 = {
	0x09e61aea, 0xd214, 0x46e2, { 0x9b,0x21,0xb2,0x6b,0x0b,0x2f,0x28,0xc8 }
};
const GUID FWPM_LAYER_OUTBOUND_TRANSPORT_V6 = {
	0xe1735bde, 0x013f, 0x4655, { 0xb3,0x51,0xa4,0x9e,0x15,0x76,0x2d,0xf0 }
};
const GUID FWPM_LAYER_IPFORWARD_V4 = {
	0xa82acc24, 0x4ee1, 0x4ee1, { 0xb4,0x65,0xfd,0x1d,0x25,0xcb,0x10,0xa4}
};
const GUID FWPM_LAYER_IPFORWARD_V6 = {
	0x7b964818, 0x19c7, 0x493a, { 0xb7,0x1f,0x83,0x2c,0x36,0x84,0xd2,0x8c }
};
const GUID FWPM_CALLOUT_IPSEC_INBOUND_TRANSPORT_V4 = {
	0x5132900d, 0x5e84, 0x4b5f, { 0x80,0xe4,0x01,0x74,0x1e,0x81,0xff,0x10 }
};
const GUID FWPM_CALLOUT_IPSEC_INBOUND_TRANSPORT_V6 = {
	0x49d3ac92, 0x2a6c, 0x4dcf, { 0x95,0x5f,0x1c,0x3b,0xe0,0x09,0xdd,0x99 }
};
const GUID FWPM_CALLOUT_IPSEC_OUTBOUND_TRANSPORT_V4 = {
	0x4b46bf0a, 0x4523, 0x4e57, { 0xaa,0x38,0xa8,0x79,0x87,0xc9,0x10,0xd9 }
};
const GUID FWPM_CALLOUT_IPSEC_OUTBOUND_TRANSPORT_V6 = {
	0x38d87722, 0xad83, 0x4f11, { 0xa9,0x1f,0xdf,0x0f,0xb0,0x77,0x22,0x5b }
};
const GUID FWPM_CALLOUT_IPSEC_INBOUND_TUNNEL_V4 = {
	0x191a8a46, 0x0bf8, 0x46cf, { 0xb0,0x45,0x4b,0x45,0xdf,0xa6,0xa3,0x24 }
};
const GUID FWPM_CALLOUT_IPSEC_INBOUND_TUNNEL_V6 = {
	0x80c342e3, 0x1e53, 0x4d6f, { 0x9b,0x44,0x03,0xdf,0x5a,0xee,0xe1,0x54 }
};
const GUID FWPM_CALLOUT_IPSEC_OUTBOUND_TUNNEL_V4 = {
	0x70a4196c, 0x835b, 0x4fb0, { 0x98,0xe8,0x07,0x5f,0x4d,0x97,0x7d,0x46 }
};
const GUID FWPM_CALLOUT_IPSEC_OUTBOUND_TUNNEL_V6 = {
	0xf1835363, 0xa6a5, 0x4e62, { 0xb1,0x80,0x23,0xdb,0x78,0x9d,0x8d,0xa6 }
};
const GUID FWPM_CALLOUT_IPSEC_FORWARD_INBOUND_TUNNEL_V4 = {
	0x28829633, 0xc4f0, 0x4e66, { 0x87,0x3f,0x84,0x4d,0xb2,0xa8,0x99,0xc7 }
};
const GUID FWPM_CALLOUT_IPSEC_FORWARD_INBOUND_TUNNEL_V6 = {
	0xaf50bec2, 0xc686, 0x429a, { 0x88,0x4d,0xb7,0x44,0x43,0xe7,0xb0,0xb4 }
};
const GUID FWPM_CALLOUT_IPSEC_FORWARD_OUTBOUND_TUNNEL_V4 = {
	0xfb532136, 0x15cb, 0x440b, { 0x93,0x7c,0x17,0x17,0xca,0x32,0x0c,0x40 }
};
const GUID FWPM_CALLOUT_IPSEC_FORWARD_OUTBOUND_TUNNEL_V6 = {
	0xdae640cc, 0xe021, 0x4bee, { 0x9e,0xb6,0xa4,0x8b,0x27,0x5c,0x8c,0x1d }
};

/**
 * Load a function symbol from a loaded dll
 */
static inline void *load_function(char *dll, char *name)
{
	HANDLE handle;
	void *sym = NULL;

	handle = GetModuleHandle(dll);
	if (!handle)
	{
		return NULL;
	}
	sym = GetProcAddress(handle, name);
	return sym;
}

/**
 * Macro that defines a stub for a function that calls the same DLL function
 *
 * @param dll		DLL to find function in
 * @param ret		return type of function
 * @param name		function name
 * @param size		size of all arguments on stack
 * @param ...		arguments of function
 */
#define STUB(dll, ret, name, size, ...) \
ret WINAPI name(__VA_ARGS__) \
{ \
	static void (*fun)() = NULL; \
	if (!fun) \
	{ \
		fun = load_function(#dll, #name); \
	} \
	if (fun) \
	{ \
		__builtin_return(__builtin_apply(fun, __builtin_apply_args(), size)); \
	} \
	return ERROR_NOT_SUPPORTED; \
}

STUB(fwpuclnt, DWORD, IPsecSaContextCreate1, 40,
	HANDLE engineHandle, const void *outboundTraffic,
	const void *virtualIfTunnelInfo, UINT64 *inboundFilterId, UINT64 *id)

STUB(fwpuclnt, DWORD, IPsecSaContextSetSpi0, 32,
	HANDLE engineHandle, UINT64 id, const void *getSpi, UINT32 inboundSpi)

STUB(fwpuclnt, DWORD, IPsecSaContextGetById1, 24,
	HANDLE engineHandle, UINT64 id, void **saContext)

STUB(fwpuclnt, DWORD, IPsecSaContextUpdate0, 24,
	HANDLE engineHandle, UINT32 flags, const void *newValues)

STUB(fwpuclnt, DWORD, IPsecSaContextEnum1, 40,
	HANDLE engineHandle, HANDLE enumHandle, UINT32 numEntriesRequested,
	void ***entries, UINT32 *numEntriesReturned)

STUB(fwpuclnt, DWORD, FwpmNetEventSubscribe0, 40,
	HANDLE engineHandle, const void *subscription, void(*callback)(),
	void *context, HANDLE *eventsHandle)

STUB(fwpuclnt, DWORD, FwpmNetEventUnsubscribe0, 16,
	HANDLE engineHandle, HANDLE eventsHandle)
