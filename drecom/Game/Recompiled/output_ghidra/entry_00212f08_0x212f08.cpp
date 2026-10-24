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

// Function: entry_00212f08
// Address: 0x212f08 - 0x212f28
void entry_00212f08_0x212f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212f08_0x212f08");
#endif

    ctx->pc = 0x212f08u;

label_212f08:
    // 0x212f08: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x212f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x212f0c: 0x8c42f000  lw          $v0, -0x1000($v0)
    ctx->pc = 0x212f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F000u));
    // 0x212f10: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x212f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x212f14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212F14u;
    {
        const bool branch_taken_0x212f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F14u;
        // 0x212f18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f14) {
            ctx->pc = 0x212F28u;
            return;
        }
    }
    ctx->pc = 0x212F1Cu;
    // 0x212f1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f20: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x212F20u;
    {
        const bool branch_taken_0x212f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F20u;
        // 0x212f24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f20) {
            ctx->pc = 0x212F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f08;
        }
    }
    ctx->pc = 0x212F28u;
}
