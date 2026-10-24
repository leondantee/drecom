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

// Function: default
// Address: 0x128780 - 0x1287bc
void ps2_default_0x128780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x128780");
#endif

    ctx->pc = 0x128780u;

    // 0x128780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128784: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128788: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12878c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x12878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x128790: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128794: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128798: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12879c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12879cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1287a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1287a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1287a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1287a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1287a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1287ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1287acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1287b0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1287b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1287b4: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x1287B4u;
    {
        const bool branch_taken_0x1287b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287b4) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x1287BCu;
}
