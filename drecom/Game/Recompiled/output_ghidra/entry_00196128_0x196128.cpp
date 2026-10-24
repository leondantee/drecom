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

// Function: entry_00196128
// Address: 0x196128 - 0x196178
void entry_00196128_0x196128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196128_0x196128");
#endif

    switch (ctx->pc) {
        case 0x19614cu: goto label_19614c;
        default: break;
    }

    ctx->pc = 0x196128u;

    // 0x196128: 0x8eb70010  lw          $s7, 0x10($s5)
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19612c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x19612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x196130: 0x16e30011  bne         $s7, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x196130u;
    {
        const bool branch_taken_0x196130 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x196130) {
            ctx->pc = 0x196178u;
            return;
        }
    }
    ctx->pc = 0x196138u;
    // 0x196138: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19613c: 0x24641240  addiu       $a0, $v1, 0x1240
    ctx->pc = 0x19613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x196140: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x196140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x196144: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x196144u;
    SET_GPR_U32(ctx, 31, 0x19614Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x19614Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19614Cu) { return; }
    ctx->pc = 0x19614Cu;
label_19614c:
    // 0x19614c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x19614cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196150: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x196150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x196154: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196158: 0xac641274  sw          $a0, 0x1274($v1)
    ctx->pc = 0x196158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 4));
    // 0x19615c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x19615cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x196160: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x196160u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196164: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196168: 0x24731260  addiu       $s3, $v1, 0x1260
    ctx->pc = 0x196168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4704));
    // 0x19616c: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x19616cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x196170: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x196170u;
    {
        const bool branch_taken_0x196170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196170) {
            ctx->pc = 0x196760u;
            return;
        }
    }
    ctx->pc = 0x196178u;
}
