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

// Function: entry_001165a8
// Address: 0x1165a8 - 0x1165cc
void entry_001165a8_0x1165a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001165a8_0x1165a8");
#endif

    ctx->pc = 0x1165a8u;

label_1165a8:
    // 0x1165a8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1165a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1165ac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1165acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1165b0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1165b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1165b4: 0x0  nop
    ctx->pc = 0x1165b4u;
    // NOP
    // 0x1165b8: 0x0  nop
    ctx->pc = 0x1165b8u;
    // NOP
    // 0x1165bc: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1165BCu;
    {
        const bool branch_taken_0x1165bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1165bc) {
            ctx->pc = 0x1165A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1165a8;
        }
    }
    ctx->pc = 0x1165C4u;
    // 0x1165c4: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x1165C4u;
    {
        const bool branch_taken_0x1165c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165C4u;
        // 0x1165c8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165c4) {
            ctx->pc = 0x116E94u;
            return;
        }
    }
    ctx->pc = 0x1165CCu;
}
