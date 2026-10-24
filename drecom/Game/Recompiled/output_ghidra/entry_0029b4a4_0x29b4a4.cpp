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

// Function: entry_0029b4a4
// Address: 0x29b4a4 - 0x29b50c
void entry_0029b4a4_0x29b4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b4a4_0x29b4a4");
#endif

    switch (ctx->pc) {
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b4e8u: goto label_29b4e8;
        default: break;
    }

    ctx->pc = 0x29b4a4u;

    // 0x29b4a4: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x29b4a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b4a8: 0xdfa301a0  ld          $v1, 0x1A0($sp)
    ctx->pc = 0x29b4a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x29b4ac: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x29b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29b4b0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b4b4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b4b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b4b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b4bc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b4c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b4c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b4c4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b4c8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B4C8u;
    SET_GPR_U32(ctx, 31, 0x29B4D0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B4D0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B4D0u) { return; }
    ctx->pc = 0x29B4D0u;
label_29b4d0:
    // 0x29b4d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b4d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b4d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b4d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b4d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b4dc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x29b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29b4e0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B4E0u;
    SET_GPR_U32(ctx, 31, 0x29B4E8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B4E8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B4E8u) { return; }
    ctx->pc = 0x29B4E8u;
label_29b4e8:
    // 0x29b4e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b4ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29b4f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B4F0u;
    {
        const bool branch_taken_0x29b4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4f0) {
            ctx->pc = 0x29B50Cu;
            return;
        }
    }
    ctx->pc = 0x29B4F8u;
    // 0x29b4f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b4fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b500: 0xffa201a8  sd          $v0, 0x1A8($sp)
    ctx->pc = 0x29b500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 2));
    // 0x29b504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B504u;
    {
        const bool branch_taken_0x29b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b504) {
            ctx->pc = 0x29B510u;
            return;
        }
    }
    ctx->pc = 0x29B50Cu;
}
