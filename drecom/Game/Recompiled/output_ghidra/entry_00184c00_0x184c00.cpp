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

// Function: entry_00184c00
// Address: 0x184c00 - 0x184c08
void entry_00184c00_0x184c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c00_0x184c00");
#endif

    ctx->pc = 0x184c00u;

    // 0x184c00: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x184c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x184c04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x184c08u;
}
