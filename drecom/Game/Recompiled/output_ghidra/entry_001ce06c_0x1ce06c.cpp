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

// Function: entry_001ce06c
// Address: 0x1ce06c - 0x1ce0b4
void entry_001ce06c_0x1ce06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce06c_0x1ce06c");
#endif

    ctx->pc = 0x1ce06cu;

    // 0x1ce06c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce074: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce078: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1ce078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce07c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce080: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ce080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce084: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce088: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce08c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce090: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce094: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce09c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ce0a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ce0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce0a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0a8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce0ac: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x1CE0ACu;
    {
        const bool branch_taken_0x1ce0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0ac) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE0B4u;
}
