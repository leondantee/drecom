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

// Function: entry_0016c1c8
// Address: 0x16c1c8 - 0x16c1f0
void entry_0016c1c8_0x16c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c1c8_0x16c1c8");
#endif

    ctx->pc = 0x16c1c8u;

label_16c1c8:
    // 0x16c1c8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16c1cc: 0x24630dfc  addiu       $v1, $v1, 0xDFC
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3580));
    // 0x16c1d0: 0x12030074  beq         $s0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x16C1D0u;
    {
        const bool branch_taken_0x16c1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c1d0) {
            ctx->pc = 0x16C3A4u;
            return;
        }
    }
    ctx->pc = 0x16C1D8u;
    // 0x16c1d8: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x16c1d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16c1dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C1DCu;
    {
        const bool branch_taken_0x16c1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c1dc) {
            ctx->pc = 0x16C1F0u;
            return;
        }
    }
    ctx->pc = 0x16C1E4u;
    // 0x16c1e4: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16c1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c1e8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x16C1E8u;
    {
        const bool branch_taken_0x16c1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1e8) {
            ctx->pc = 0x16C1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c1c8;
        }
    }
    ctx->pc = 0x16C1F0u;
}
