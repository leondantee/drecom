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

// Function: entry_0010ca88
// Address: 0x10ca88 - 0x10cab0
void entry_0010ca88_0x10ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ca88_0x10ca88");
#endif

    ctx->pc = 0x10ca88u;

label_10ca88:
    // 0x10ca88: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x10ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x10ca8c: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x10ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10ca90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10ca90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ca94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10ca94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10ca98: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x10ca98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x10ca9c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x10ca9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10caa0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10CAA0u;
    {
        const bool branch_taken_0x10caa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10caa0) {
            ctx->pc = 0x10CA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ca88;
        }
    }
    ctx->pc = 0x10CAA8u;
    // 0x10caa8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10caac: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x10caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10cab0u;
}
