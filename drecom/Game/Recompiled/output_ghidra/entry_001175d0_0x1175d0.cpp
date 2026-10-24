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

// Function: entry_001175d0
// Address: 0x1175d0 - 0x1175f0
void entry_001175d0_0x1175d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001175d0_0x1175d0");
#endif

    ctx->pc = 0x1175d0u;

label_1175d0:
    // 0x1175d0: 0x50e80007  beql        $a3, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1175D0u;
    {
        const bool branch_taken_0x1175d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1175d0) {
            ctx->pc = 0x1175D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1175D0u;
            // 0x1175d4: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1175F0u;
            return;
        }
    }
    ctx->pc = 0x1175D8u;
    // 0x1175d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1175d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1175dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1175dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1175e0: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1175e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1175e4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1175E4u;
    {
        const bool branch_taken_0x1175e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1175e4) {
            ctx->pc = 0x1175E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1175E4u;
            // 0x1175e8: 0x8ce70008  lw          $a3, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1175D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1175d0;
        }
    }
    ctx->pc = 0x1175ECu;
    // 0x1175ec: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1175ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    ctx->pc = 0x1175f0u;
}
