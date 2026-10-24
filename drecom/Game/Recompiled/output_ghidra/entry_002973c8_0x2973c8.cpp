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

// Function: entry_002973c8
// Address: 0x2973c8 - 0x2973d0
void entry_002973c8_0x2973c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002973c8_0x2973c8");
#endif

    ctx->pc = 0x2973c8u;

    // 0x2973c8: 0x26160080  addiu       $s6, $s0, 0x80
    ctx->pc = 0x2973c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2973cc: 0x0  nop
    ctx->pc = 0x2973ccu;
    // NOP
    ctx->pc = 0x2973d0u;
}
