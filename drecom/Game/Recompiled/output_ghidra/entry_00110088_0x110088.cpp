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

// Function: entry_00110088
// Address: 0x110088 - 0x1100a4
void entry_00110088_0x110088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110088_0x110088");
#endif

    ctx->pc = 0x110088u;

    // 0x110088: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11008c: 0x24445200  addiu       $a0, $v0, 0x5200
    ctx->pc = 0x11008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x110090: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x110090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110094: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x110094u;
    {
        const bool branch_taken_0x110094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110094u;
        // 0x110098: 0x3c07003b  lui         $a3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110094) {
            ctx->pc = 0x1100A4u;
            return;
        }
    }
    ctx->pc = 0x11009Cu;
    // 0x11009c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11009Cu;
    {
        const bool branch_taken_0x11009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11009Cu;
        // 0x1100a0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11009c) {
            ctx->pc = 0x1100D8u;
            return;
        }
    }
    ctx->pc = 0x1100A4u;
}
