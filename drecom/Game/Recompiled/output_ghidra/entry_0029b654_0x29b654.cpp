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

// Function: entry_0029b654
// Address: 0x29b654 - 0x29b6bc
void entry_0029b654_0x29b654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b654_0x29b654");
#endif

    switch (ctx->pc) {
        case 0x29b67cu: goto label_29b67c;
        case 0x29b694u: goto label_29b694;
        default: break;
    }

    ctx->pc = 0x29b654u;

    // 0x29b654: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b654u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b658: 0xdfa201c0  ld          $v0, 0x1C0($sp)
    ctx->pc = 0x29b658u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x29b65c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b660: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b660u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b664: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b668: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b668u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b66c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b670: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b674: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B674u;
    SET_GPR_U32(ctx, 31, 0x29B67Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B67Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B67Cu) { return; }
    ctx->pc = 0x29B67Cu;
label_29b67c:
    // 0x29b67c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b680: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b680u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b684: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b688: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x29b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29b68c: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B68Cu;
    SET_GPR_U32(ctx, 31, 0x29B694u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B694u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B694u) { return; }
    ctx->pc = 0x29B694u;
label_29b694:
    // 0x29b694: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b698: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x29b698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b69c: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x29b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x29b6a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B6A0u;
    {
        const bool branch_taken_0x29b6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6a0) {
            ctx->pc = 0x29B6BCu;
            return;
        }
    }
    ctx->pc = 0x29B6A8u;
    // 0x29b6a8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x29b6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b6ac: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x29b6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b6b0: 0xffa601c8  sd          $a2, 0x1C8($sp)
    ctx->pc = 0x29b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 6));
    // 0x29b6b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B6B4u;
    {
        const bool branch_taken_0x29b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6b4) {
            ctx->pc = 0x29B6C0u;
            return;
        }
    }
    ctx->pc = 0x29B6BCu;
}
