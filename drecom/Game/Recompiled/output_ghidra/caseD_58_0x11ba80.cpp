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

// Function: caseD_58
// Address: 0x11ba80 - 0x11ba8c
void caseD_58_0x11ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_58_0x11ba80");
#endif

    ctx->pc = 0x11ba80u;

    // 0x11ba80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11ba84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA84u;
    {
        const bool branch_taken_0x11ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA84u;
        // 0x11ba88: 0x2442db70  addiu       $v0, $v0, -0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba84) {
            ctx->pc = 0x11BA94u;
            return;
        }
    }
    ctx->pc = 0x11BA8Cu;
}
