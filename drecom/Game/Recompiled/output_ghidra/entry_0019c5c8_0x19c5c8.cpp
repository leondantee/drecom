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

// Function: entry_0019c5c8
// Address: 0x19c5c8 - 0x19c5d0
void entry_0019c5c8_0x19c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c5c8_0x19c5c8");
#endif

    ctx->pc = 0x19c5c8u;

    // 0x19c5c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19c5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x19c5cc: 0x0  nop
    ctx->pc = 0x19c5ccu;
    // NOP
    ctx->pc = 0x19c5d0u;
}
