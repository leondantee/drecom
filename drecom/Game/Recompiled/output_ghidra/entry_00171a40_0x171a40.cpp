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

// Function: entry_00171a40
// Address: 0x171a40 - 0x171a58
void entry_00171a40_0x171a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a40_0x171a40");
#endif

    ctx->pc = 0x171a40u;

    // 0x171a40: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x171A40u;
    {
        const bool branch_taken_0x171a40 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x171a40) {
            ctx->pc = 0x171A58u;
            return;
        }
    }
    ctx->pc = 0x171A48u;
    // 0x171a48: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171a4c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x171a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x171a50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171A50u;
    {
        const bool branch_taken_0x171a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a50) {
            ctx->pc = 0x171A60u;
            return;
        }
    }
    ctx->pc = 0x171A58u;
}
