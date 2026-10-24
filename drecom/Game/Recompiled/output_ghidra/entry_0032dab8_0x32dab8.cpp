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

// Function: entry_0032dab8
// Address: 0x32dab8 - 0x32db08
void entry_0032dab8_0x32dab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032dab8_0x32dab8");
#endif

    switch (ctx->pc) {
        case 0x32dafcu: goto label_32dafc;
        default: break;
    }

    ctx->pc = 0x32dab8u;

    // 0x32dab8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x32dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32dabc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32dabcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dac0: 0x26220820  addiu       $v0, $s1, 0x820
    ctx->pc = 0x32dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x32dac4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32dac4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dac8: 0x86e210a6  lh          $v0, 0x10A6($s7)
    ctx->pc = 0x32dac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4262)));
    // 0x32dacc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32dad0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32dad0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32dad4: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x32dad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x32dad8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x32DAD8u;
    {
        const bool branch_taken_0x32dad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dad8) {
            ctx->pc = 0x32DB08u;
            return;
        }
    }
    ctx->pc = 0x32DAE0u;
    // 0x32dae0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x32dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32dae4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x32dae4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x32dae8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x32dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x32daec: 0x24c7a5f0  addiu       $a3, $a2, -0x5A10
    ctx->pc = 0x32daecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944240));
    // 0x32daf0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x32daf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32daf4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32DAF4u;
    SET_GPR_U32(ctx, 31, 0x32DAFCu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32DAFCu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32DAFCu) { return; }
    ctx->pc = 0x32DAFCu;
label_32dafc:
    // 0x32dafc: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x32dafcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32db00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32DB00u;
    {
        const bool branch_taken_0x32db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32db00) {
            ctx->pc = 0x32DB28u;
            return;
        }
    }
    ctx->pc = 0x32DB08u;
}
