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

// Function: entry_0011c138
// Address: 0x11c138 - 0x11c140
void entry_0011c138_0x11c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c138_0x11c138");
#endif

    ctx->pc = 0x11c138u;

    // 0x11c138: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c13c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x11c140u;
}
