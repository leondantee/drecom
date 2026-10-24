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

// Function: entry_00216990
// Address: 0x216990 - 0x2169b0
void entry_00216990_0x216990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216990_0x216990");
#endif

    ctx->pc = 0x216990u;

label_216990:
    // 0x216990: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x216990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x216994: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x216994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216998: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21699c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21699cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2169a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2169a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2169a4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2169a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2169a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2169A8u;
    {
        const bool branch_taken_0x2169a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2169ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169A8u;
        // 0x2169ac: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169a8) {
            ctx->pc = 0x216990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216990;
        }
    }
    ctx->pc = 0x2169B0u;
}
