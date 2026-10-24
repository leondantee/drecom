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

// Function: entry_001193c0
// Address: 0x1193c0 - 0x1193dc
void entry_001193c0_0x1193c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001193c0_0x1193c0");
#endif

    ctx->pc = 0x1193c0u;

label_1193c0:
    // 0x1193c0: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1193C0u;
    {
        const bool branch_taken_0x1193c0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1193c0) {
            ctx->pc = 0x1193C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1193C0u;
            // 0x1193c4: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1193DCu;
            return;
        }
    }
    ctx->pc = 0x1193C8u;
    // 0x1193c8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1193c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1193cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1193ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1193d0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1193D0u;
    {
        const bool branch_taken_0x1193d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1193d0) {
            ctx->pc = 0x1193D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1193D0u;
            // 0x1193d4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1193C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1193c0;
        }
    }
    ctx->pc = 0x1193D8u;
    // 0x1193d8: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x1193d8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
    ctx->pc = 0x1193dcu;
}
