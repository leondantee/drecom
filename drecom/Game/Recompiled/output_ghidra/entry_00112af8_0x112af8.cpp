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

// Function: entry_00112af8
// Address: 0x112af8 - 0x112b50
void entry_00112af8_0x112af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112af8_0x112af8");
#endif

    ctx->pc = 0x112af8u;

    // 0x112af8: 0x5812  mflo        $t3
    ctx->pc = 0x112af8u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x112afc: 0xafab0240  sw          $t3, 0x240($sp)
    ctx->pc = 0x112afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 11));
    // 0x112b00: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x112b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b04: 0x18b602a  slt         $t4, $t4, $t3
    ctx->pc = 0x112b04u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x112b08: 0xc100a  movz        $v0, $zero, $t4
    ctx->pc = 0x112b08u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x112b0c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x112b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x112b10: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x112b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x112b14: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x112b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x112b18: 0x7e8823  subu        $s1, $v1, $fp
    ctx->pc = 0x112b18u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x112b1c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x112b20: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x112b20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x112b24: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x112B24u;
    {
        const bool branch_taken_0x112b24 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x112B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B24u;
        // 0x112b28: 0xafa60248  sw          $a2, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b24) {
            ctx->pc = 0x112B98u;
            return;
        }
    }
    ctx->pc = 0x112B2Cu;
    // 0x112b2c: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x112b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112b30: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x112b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x112b34: 0x29060003  slti        $a2, $t0, 0x3
    ctx->pc = 0x112b34u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x112b38: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x112b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
    // 0x112b3c: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x112b3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112b40: 0xafa6025c  sw          $a2, 0x25C($sp)
    ctx->pc = 0x112b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 6));
    // 0x112b44: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x112b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x112b48: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x112b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112b4c: 0x0  nop
    ctx->pc = 0x112b4cu;
    // NOP
    ctx->pc = 0x112b50u;
}
