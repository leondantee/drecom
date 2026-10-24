#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011bc58
// Address: 0x11bc58 - 0x11bc5c
void entry_0011bc58_0x11bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc58_0x11bc58");
#endif

    ctx->pc = 0x11bc58u;

    // 0x11bc58: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bc58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x11bc5cu;
}
