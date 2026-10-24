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

// Function: entry_00122a98
// Address: 0x122a98 - 0x122ad0
void entry_00122a98_0x122a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a98_0x122a98");
#endif

    ctx->pc = 0x122a98u;

    // 0x122a98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122a9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122aa0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x122aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x122aa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x122aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122aa8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122aac: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x122aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x122ab0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122ab4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122ab8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122abc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122ac0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122ac4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x122ac8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x122AC8u;
    {
        const bool branch_taken_0x122ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122ac8) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122AD0u;
}
