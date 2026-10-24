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

// Function: entry_0029b978
// Address: 0x29b978 - 0x29b9e8
void entry_0029b978_0x29b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b978_0x29b978");
#endif

    switch (ctx->pc) {
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9c0u: goto label_29b9c0;
        default: break;
    }

    ctx->pc = 0x29b978u;

    // 0x29b978: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b978u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b97c: 0xdfa201f0  ld          $v0, 0x1F0($sp)
    ctx->pc = 0x29b97cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29b980: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b984: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b984u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b988: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b98c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b98cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b990: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b994: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b998: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b99c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B99Cu;
    SET_GPR_U32(ctx, 31, 0x29B9A4u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B9A4u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B9A4u) { return; }
    ctx->pc = 0x29B9A4u;
label_29b9a4:
    // 0x29b9a4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b9a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b9a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b9ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b9b0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29b9b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b9b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b9b8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B9B8u;
    SET_GPR_U32(ctx, 31, 0x29B9C0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B9C0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B9C0u) { return; }
    ctx->pc = 0x29B9C0u;
label_29b9c0:
    // 0x29b9c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b9c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b9c4: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x29b9c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b9c8: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x29b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x29b9cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B9CCu;
    {
        const bool branch_taken_0x29b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9cc) {
            ctx->pc = 0x29B9E8u;
            return;
        }
    }
    ctx->pc = 0x29B9D4u;
    // 0x29b9d4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x29b9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b9d8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x29b9d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b9dc: 0xffa601f8  sd          $a2, 0x1F8($sp)
    ctx->pc = 0x29b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 6));
    // 0x29b9e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B9E0u;
    {
        const bool branch_taken_0x29b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9e0) {
            ctx->pc = 0x29B9ECu;
            return;
        }
    }
    ctx->pc = 0x29B9E8u;
}
