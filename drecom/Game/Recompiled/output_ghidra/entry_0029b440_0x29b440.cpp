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

// Function: entry_0029b440
// Address: 0x29b440 - 0x29b4a0
void entry_0029b440_0x29b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b440_0x29b440");
#endif

    switch (ctx->pc) {
        case 0x29b464u: goto label_29b464;
        case 0x29b47cu: goto label_29b47c;
        default: break;
    }

    ctx->pc = 0x29b440u;

    // 0x29b440: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b444: 0x5e3825  or          $a3, $v0, $fp
    ctx->pc = 0x29b444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x29b448: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x29b448u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x29b44c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x29b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b450: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x29b450u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29b454: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b458: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b45c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B45Cu;
    SET_GPR_U32(ctx, 31, 0x29B464u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B464u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B464u) { return; }
    ctx->pc = 0x29B464u;
label_29b464:
    // 0x29b464: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29b464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b468: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29b468u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b46c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b470: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29b474: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B474u;
    SET_GPR_U32(ctx, 31, 0x29B47Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B47Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B47Cu) { return; }
    ctx->pc = 0x29B47Cu;
label_29b47c:
    // 0x29b47c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x29b47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b480: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29b480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x29b484: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B484u;
    {
        const bool branch_taken_0x29b484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b484) {
            ctx->pc = 0x29B4A0u;
            return;
        }
    }
    ctx->pc = 0x29B48Cu;
    // 0x29b48c: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x29b48cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b490: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x29b490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x29b494: 0xffa301a0  sd          $v1, 0x1A0($sp)
    ctx->pc = 0x29b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 3));
    // 0x29b498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B498u;
    {
        const bool branch_taken_0x29b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b498) {
            ctx->pc = 0x29B4A4u;
            return;
        }
    }
    ctx->pc = 0x29B4A0u;
}
