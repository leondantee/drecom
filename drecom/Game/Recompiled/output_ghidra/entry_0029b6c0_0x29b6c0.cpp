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

// Function: entry_0029b6c0
// Address: 0x29b6c0 - 0x29b724
void entry_0029b6c0_0x29b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b6c0_0x29b6c0");
#endif

    switch (ctx->pc) {
        case 0x29b6e8u: goto label_29b6e8;
        case 0x29b700u: goto label_29b700;
        default: break;
    }

    ctx->pc = 0x29b6c0u;

    // 0x29b6c0: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b6c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b6c4: 0xdfa401c8  ld          $a0, 0x1C8($sp)
    ctx->pc = 0x29b6c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x29b6c8: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x29b6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29b6cc: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29b6d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b6d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b6d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b6d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b6d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b6dc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b6e0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B6E0u;
    SET_GPR_U32(ctx, 31, 0x29B6E8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B6E8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B6E8u) { return; }
    ctx->pc = 0x29B6E8u;
label_29b6e8:
    // 0x29b6e8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b6ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b6ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b6f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b6f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b6f4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b6f8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B6F8u;
    SET_GPR_U32(ctx, 31, 0x29B700u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B700u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B700u) { return; }
    ctx->pc = 0x29B700u;
label_29b700:
    // 0x29b700: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b704: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x29b704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x29b708: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B708u;
    {
        const bool branch_taken_0x29b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b708) {
            ctx->pc = 0x29B724u;
            return;
        }
    }
    ctx->pc = 0x29B710u;
    // 0x29b710: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b714: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b718: 0xffa201d0  sd          $v0, 0x1D0($sp)
    ctx->pc = 0x29b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 2));
    // 0x29b71c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B71Cu;
    {
        const bool branch_taken_0x29b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b71c) {
            ctx->pc = 0x29B728u;
            return;
        }
    }
    ctx->pc = 0x29B724u;
}
