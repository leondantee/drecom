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

// Function: entry_0029b9ec
// Address: 0x29b9ec - 0x29ba5c
void entry_0029b9ec_0x29b9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b9ec_0x29b9ec");
#endif

    switch (ctx->pc) {
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba38u: goto label_29ba38;
        default: break;
    }

    ctx->pc = 0x29b9ecu;

    // 0x29b9ec: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b9ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b9f0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x29b9f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29b9f4: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x29b9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29b9f8: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29b9fc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29ba00: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29ba00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29ba04: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29ba08: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29ba08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29ba0c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29ba10: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29BA10u;
    SET_GPR_U32(ctx, 31, 0x29BA18u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29BA18u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29BA18u) { return; }
    ctx->pc = 0x29BA18u;
label_29ba18:
    // 0x29ba18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29ba18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29ba1c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29ba20: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x29ba20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29ba24: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29ba24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29ba28: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x29ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29ba2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29ba2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29ba30: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29BA30u;
    SET_GPR_U32(ctx, 31, 0x29BA38u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29BA38u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29BA38u) { return; }
    ctx->pc = 0x29BA38u;
label_29ba38:
    // 0x29ba38: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29ba3c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29ba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x29ba40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BA40u;
    {
        const bool branch_taken_0x29ba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba40) {
            ctx->pc = 0x29BA5Cu;
            return;
        }
    }
    ctx->pc = 0x29BA48u;
    // 0x29ba48: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x29ba48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29ba4c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x29ba4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x29ba50: 0xffa60200  sd          $a2, 0x200($sp)
    ctx->pc = 0x29ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 6));
    // 0x29ba54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29BA54u;
    {
        const bool branch_taken_0x29ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba54) {
            ctx->pc = 0x29BA60u;
            return;
        }
    }
    ctx->pc = 0x29BA5Cu;
}
