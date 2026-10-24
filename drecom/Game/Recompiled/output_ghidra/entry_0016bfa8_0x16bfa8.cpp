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

// Function: entry_0016bfa8
// Address: 0x16bfa8 - 0x16bfd0
void entry_0016bfa8_0x16bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bfa8_0x16bfa8");
#endif

    ctx->pc = 0x16bfa8u;

label_16bfa8:
    // 0x16bfa8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16bfac: 0x24630dfc  addiu       $v1, $v1, 0xDFC
    ctx->pc = 0x16bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3580));
    // 0x16bfb0: 0x12030074  beq         $s0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x16BFB0u;
    {
        const bool branch_taken_0x16bfb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bfb0) {
            ctx->pc = 0x16C184u;
            return;
        }
    }
    ctx->pc = 0x16BFB8u;
    // 0x16bfb8: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x16bfb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16bfbc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BFBCu;
    {
        const bool branch_taken_0x16bfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bfbc) {
            ctx->pc = 0x16BFD0u;
            return;
        }
    }
    ctx->pc = 0x16BFC4u;
    // 0x16bfc4: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16bfc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16bfc8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x16BFC8u;
    {
        const bool branch_taken_0x16bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bfc8) {
            ctx->pc = 0x16BFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bfa8;
        }
    }
    ctx->pc = 0x16BFD0u;
}
