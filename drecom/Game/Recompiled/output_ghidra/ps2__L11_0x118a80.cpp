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

// Function: $L11
// Address: 0x118a80 - 0x118a8c
void ps2__L11_0x118a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L11_0x118a80");
#endif

    ctx->pc = 0x118a80u;

    // 0x118a80: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x118a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x118a84: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118A84u;
    {
        const bool branch_taken_0x118a84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x118A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A84u;
        // 0x118a88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a84) {
            ctx->pc = 0x118A68u;
            return;
        }
    }
    ctx->pc = 0x118A8Cu;
}
