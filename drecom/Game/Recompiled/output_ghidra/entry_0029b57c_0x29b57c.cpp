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

// Function: entry_0029b57c
// Address: 0x29b57c - 0x29b5dc
void entry_0029b57c_0x29b57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b57c_0x29b57c");
#endif

    switch (ctx->pc) {
        case 0x29b5a4u: goto label_29b5a4;
        case 0x29b5b8u: goto label_29b5b8;
        default: break;
    }

    ctx->pc = 0x29b57cu;

    // 0x29b57c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b57cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b580: 0xdfa201b0  ld          $v0, 0x1B0($sp)
    ctx->pc = 0x29b580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29b584: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b588: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b58c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29b58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b590: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b594: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b594u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b598: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b59c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B59Cu;
    SET_GPR_U32(ctx, 31, 0x29B5A4u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B5A4u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B5A4u) { return; }
    ctx->pc = 0x29B5A4u;
label_29b5a4:
    // 0x29b5a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29b5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b5a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b5a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b5ac: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x29b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b5b0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B5B0u;
    SET_GPR_U32(ctx, 31, 0x29B5B8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B5B8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B5B8u) { return; }
    ctx->pc = 0x29B5B8u;
label_29b5b8:
    // 0x29b5b8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b5bc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x29b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x29b5c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B5C0u;
    {
        const bool branch_taken_0x29b5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5c0) {
            ctx->pc = 0x29B5DCu;
            return;
        }
    }
    ctx->pc = 0x29B5C8u;
    // 0x29b5c8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b5cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b5d0: 0xffa201b8  sd          $v0, 0x1B8($sp)
    ctx->pc = 0x29b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 2));
    // 0x29b5d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B5D4u;
    {
        const bool branch_taken_0x29b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5d4) {
            ctx->pc = 0x29B5E0u;
            return;
        }
    }
    ctx->pc = 0x29B5DCu;
}
