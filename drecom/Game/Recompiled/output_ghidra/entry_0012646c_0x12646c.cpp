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

// Function: entry_0012646c
// Address: 0x12646c - 0x1264c0
void entry_0012646c_0x12646c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012646c_0x12646c");
#endif

    ctx->pc = 0x12646cu;

    // 0x12646c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126470: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x126470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x126474: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x126474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x126478: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x126478u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12647c: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x12647cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x126480: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x126480u;
    {
        const bool branch_taken_0x126480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126480) {
            ctx->pc = 0x126508u;
            return;
        }
    }
    ctx->pc = 0x126488u;
    // 0x126488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12648c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126490: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126494: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x126494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x126498: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12649c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12649cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1264a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1264a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1264a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1264acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1264b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1264b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1264b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1264B8u;
    {
        const bool branch_taken_0x1264b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1264b8) {
            ctx->pc = 0x126508u;
            return;
        }
    }
    ctx->pc = 0x1264C0u;
}
