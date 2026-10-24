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

// Function: entry_0017e758
// Address: 0x17e758 - 0x17e79c
void entry_0017e758_0x17e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e758_0x17e758");
#endif

    switch (ctx->pc) {
        case 0x17e778u: goto label_17e778;
        default: break;
    }

    ctx->pc = 0x17e758u;

    // 0x17e758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e75c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e760: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e764: 0x244501a0  addiu       $a1, $v0, 0x1A0
    ctx->pc = 0x17e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e768: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e76c: 0x2446f100  addiu       $a2, $v0, -0xF00
    ctx->pc = 0x17e76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x17e770: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E770u;
    SET_GPR_U32(ctx, 31, 0x17E778u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E778u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E778u) { return; }
    ctx->pc = 0x17E778u;
label_17e778:
    // 0x17e778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e77c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17e780: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x17e784: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17e788: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17E788u;
    {
        const bool branch_taken_0x17e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e788) {
            ctx->pc = 0x17E7E4u;
            return;
        }
    }
    ctx->pc = 0x17E790u;
    // 0x17e790: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17e790u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17e794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E794u;
    {
        const bool branch_taken_0x17e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e794) {
            ctx->pc = 0x17E7C0u;
            return;
        }
    }
    ctx->pc = 0x17E79Cu;
}
