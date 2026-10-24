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
// Address: 0x127290 - 0x1272e4
void caseD_5_0x127290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x127290");
#endif

    ctx->pc = 0x127290u;

    // 0x127290: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127294: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x127294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x127298: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x127298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12729c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12729cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1272a0: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x1272a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1272a4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1272A4u;
    {
        const bool branch_taken_0x1272a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272a4) {
            ctx->pc = 0x127334u;
            return;
        }
    }
    ctx->pc = 0x1272ACu;
    // 0x1272ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1272acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1272b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1272b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1272b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1272b8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1272b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1272bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1272c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1272c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1272c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1272c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1272c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1272cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1272d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1272d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1272d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1272d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1272d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1272d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1272dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1272DCu;
    {
        const bool branch_taken_0x1272dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272dc) {
            ctx->pc = 0x127334u;
            return;
        }
    }
    ctx->pc = 0x1272E4u;
}
