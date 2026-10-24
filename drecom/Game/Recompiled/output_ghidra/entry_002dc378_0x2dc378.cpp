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

// Function: entry_002dc378
// Address: 0x2dc378 - 0x2dc3ac
void entry_002dc378_0x2dc378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc378_0x2dc378");
#endif

    ctx->pc = 0x2dc378u;

    // 0x2dc378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc37c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc380: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc388: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dc388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc38c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc390: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc394: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc398: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc39c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc3a4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2DC3A4u;
    {
        const bool branch_taken_0x2dc3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3a4) {
            ctx->pc = 0x2DC5ECu;
            return;
        }
    }
    ctx->pc = 0x2DC3ACu;
}
