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

// Function: $L21
// Address: 0x1189dc - 0x1189f0
void ps2__L21_0x1189dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L21_0x1189dc");
#endif

    ctx->pc = 0x1189dcu;

label_1189dc:
    // 0x1189dc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1189dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1189e0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1189E0u;
    {
        const bool branch_taken_0x1189e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1189E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189E0u;
        // 0x1189e4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189e0) {
            ctx->pc = 0x1189F8u;
            return;
        }
    }
    ctx->pc = 0x1189E8u;
    // 0x1189e8: 0x14c3fffc  bne         $a2, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1189E8u;
    {
        const bool branch_taken_0x1189e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1189ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189E8u;
        // 0x1189ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189e8) {
            ctx->pc = 0x1189DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1189dc;
        }
    }
    ctx->pc = 0x1189F0u;
}
