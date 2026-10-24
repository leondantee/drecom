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

// Function: entry_0011c3c8
// Address: 0x11c3c8 - 0x11c3d0
void entry_0011c3c8_0x11c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c3c8_0x11c3c8");
#endif

    ctx->pc = 0x11c3c8u;

    // 0x11c3c8: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c3cc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x11c3d0u;
}
