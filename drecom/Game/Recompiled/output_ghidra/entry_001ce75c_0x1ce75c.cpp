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

// Function: entry_001ce75c
// Address: 0x1ce75c - 0x1ce7a4
void entry_001ce75c_0x1ce75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce75c_0x1ce75c");
#endif

    ctx->pc = 0x1ce75cu;

    // 0x1ce75c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce760: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce764: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ce764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce768: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1ce768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce76c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce770: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ce770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce774: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce778: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce77c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce780: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce788: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce78c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ce790: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ce790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce794: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce798: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ce798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce79c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1CE79Cu;
    {
        const bool branch_taken_0x1ce79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce79c) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE7A4u;
}
