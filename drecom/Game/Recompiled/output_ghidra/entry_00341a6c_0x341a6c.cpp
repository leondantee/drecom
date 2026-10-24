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

// Function: entry_00341a6c
// Address: 0x341a6c - 0x341ac0
void entry_00341a6c_0x341a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341a6c_0x341a6c");
#endif

    ctx->pc = 0x341a6cu;

    // 0x341a6c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341a74: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x341a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x341a78: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x341a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x341a7c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x341A7Cu;
    {
        const bool branch_taken_0x341a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341a7c) {
            ctx->pc = 0x341AC8u;
            return;
        }
    }
    ctx->pc = 0x341A84u;
    // 0x341a84: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x341a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x341a88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341A88u;
    {
        const bool branch_taken_0x341a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341a88) {
            ctx->pc = 0x341AC0u;
            return;
        }
    }
    ctx->pc = 0x341A90u;
    // 0x341a90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x341a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341a94: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x341a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x341a9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x341a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341aa0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x341aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341aa4: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x341aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x341aa8: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x341aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341aac: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x341aacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341ab0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341ab4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x341ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341ab8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341abc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x341ac0u;
}
