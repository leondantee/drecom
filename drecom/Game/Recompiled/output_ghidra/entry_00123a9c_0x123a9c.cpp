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

// Function: entry_00123a9c
// Address: 0x123a9c - 0x123ad0
void entry_00123a9c_0x123a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a9c_0x123a9c");
#endif

    ctx->pc = 0x123a9cu;

    // 0x123a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123aa0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123aa4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x123aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x123aa8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123aac: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x123aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ab0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ab4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x123ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ab8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123abc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x123abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ac0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ac4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x123ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x123ac8: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x123AC8u;
    {
        const bool branch_taken_0x123ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ac8) {
            ctx->pc = 0x123E9Cu;
            return;
        }
    }
    ctx->pc = 0x123AD0u;
}
