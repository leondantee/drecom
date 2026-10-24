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

// Function: caseD_5
// Address: 0x126c58 - 0x126cac
void caseD_5_0x126c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x126c58");
#endif

    ctx->pc = 0x126c58u;

    // 0x126c58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c5c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x126c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x126c60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x126c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x126c64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x126c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x126c68: 0x286103e8  slti        $at, $v1, 0x3E8
    ctx->pc = 0x126c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x126c6c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x126C6Cu;
    {
        const bool branch_taken_0x126c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c6c) {
            ctx->pc = 0x126CACu;
            return;
        }
    }
    ctx->pc = 0x126C74u;
    // 0x126c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126c78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126c80: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x126c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x126c84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c88: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126c8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126c94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126c9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126ca0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126ca4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x126CA4u;
    {
        const bool branch_taken_0x126ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ca4) {
            ctx->pc = 0x126D9Cu;
            return;
        }
    }
    ctx->pc = 0x126CACu;
}
