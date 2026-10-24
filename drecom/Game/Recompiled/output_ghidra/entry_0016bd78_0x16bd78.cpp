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

// Function: entry_0016bd78
// Address: 0x16bd78 - 0x16bda0
void entry_0016bd78_0x16bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bd78_0x16bd78");
#endif

    ctx->pc = 0x16bd78u;

label_16bd78:
    // 0x16bd78: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16bd7c: 0x24630dfc  addiu       $v1, $v1, 0xDFC
    ctx->pc = 0x16bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3580));
    // 0x16bd80: 0x12030076  beq         $s0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x16BD80u;
    {
        const bool branch_taken_0x16bd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bd80) {
            ctx->pc = 0x16BF5Cu;
            return;
        }
    }
    ctx->pc = 0x16BD88u;
    // 0x16bd88: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x16bd88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16bd8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BD8Cu;
    {
        const bool branch_taken_0x16bd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bd8c) {
            ctx->pc = 0x16BDA0u;
            return;
        }
    }
    ctx->pc = 0x16BD94u;
    // 0x16bd94: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16bd94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16bd98: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x16BD98u;
    {
        const bool branch_taken_0x16bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd98) {
            ctx->pc = 0x16BD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bd78;
        }
    }
    ctx->pc = 0x16BDA0u;
}
